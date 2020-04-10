// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "GameFramework/PlayerInput.h"

#include "CoordinateSystem.h"
#include "TileLoadManager.h"
#include "SceneCulling.h"

#include "UE_World_Camera.generated.h"

UCLASS()
class VIRTUAL_GLOBE_API AUE_World_Camera : public APawn
{
	GENERATED_BODY()

public:

	SceneCulling_CenterTileStrategy sccts;
	TileLoadManager tlm;
	CameraState UE_CameraState;

	// Sets default values for this pawn's properties
	AUE_World_Camera();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	UPROPERTY(EditAnywhere)
	USpringArmComponent* OurCameraSpringArm;
	UCameraComponent* OurCamera;

	//球体的原点坐标
	FVector SphereOrigin;

	//球体的半径
	FVector SphereR;

	float MaxSphereR;

	//输入变量
	FVector2D MovementInput;
	FVector2D CameraInput;
	float MoveStepFactor;
	bool bZoomingIn;
	//鼠标滚轮的滚动步长
	int32 ScrollWheelSpeed;

	//当前鼠标在屏幕中的二维坐标位置
	FVector2D CursorPos;
	//一个用于记录当前鼠标在屏幕中二维坐标位置的点
	FVector2D CurrentCursorPos;
	////一个用于记录之前鼠标在屏幕中二维坐标位置的点
	FVector2D PreviousCursorPos;



	//记录当前相机视角是否旋转的状态标识
	bool IsRotateCameraState;
	//记录当前相机视角是否平移的状态标识
	bool IsMoveCameraState;

	//记录当前用户是否按下shift案件的的状态标识
	bool IsBindShiftKey;


	//一个世界三维坐标位置
	FVector WorldPos;
	//一个世界三维偏转向量
	FVector MoveDirection;

	//输入函数
	void MoveForward(float AxisValue);
	void MoveRight(float AxisValue);
	void PitchCamera(float AxisValue);
	void YawCamera(float AxisValue);
	void ZoomIn();
	void ZoomOut();


	void OnScrollWheelUpPress(float axisValue);
	void OnMouseRightDrag(float axisValue);
	void CalcCameraMoveDragDirection();
	void OnKeyLeftShiftPressed();
	void OnKeyLeftShiftReleased();
	void OnTurnRotate(float axisValue);
	void OnLookAtRotate(float axisValue);

	void InitializeVirtualGlobe();
};
