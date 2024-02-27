// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Project_1Pawn.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UBoxComponent;
class USphereComponent;
class UCollidingPawnMovementComponent;
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;

UCLASS()
class PROJECT_1_API AProject_1Pawn : public APawn
{
	GENERATED_BODY()

public:
	AProject_1Pawn();

protected:

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;

	void Move_YAxis(float AxisValue);
	void Look(float AxisValue);
	void MoveForward();

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	UStaticMeshComponent* PlayerMesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float MoveSpeed = 5.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float RotationSpeed = 1.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float ForwardMovingSpeed = 10.f;

public:

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	void SetMoveSpeed(float InMoveSpeed) { MoveSpeed = InMoveSpeed; }

	UFUNCTION(BlueprintCallable)
	void SetForwardMovingSpeed(float InForwardMovingSpeed) { ForwardMovingSpeed = InForwardMovingSpeed; }

private:
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* PlayerCamera;

	UPROPERTY(EditDefaultsOnly)
	USpringArmComponent* CameraBoom;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UCollidingPawnMovementComponent* PawnMovementComponent;

	UPROPERTY(EditDefaultsOnly)
	USceneComponent* RootComp;

};
