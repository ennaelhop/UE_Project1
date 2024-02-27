#include "Project_1Pawn.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"
#include "Camera/CameraComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "GameFramework/SpringArmComponent.h"
#include <Kismet/KismetMathLibrary.h>

#include "CollidingPawnMovementComponent.h"

AProject_1Pawn::AProject_1Pawn()
{
	PrimaryActorTick.bCanEverTick = true;
	AutoPossessPlayer = EAutoReceiveInput::Player0;

	RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
	SetRootComponent(RootComp);

	PlayerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlayerMesh"));
	PlayerMesh->SetupAttachment(RootComp);

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(PlayerMesh);

	PlayerCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("PlayerCamera"));
	PlayerCamera->SetupAttachment(CameraBoom);

	PawnMovementComponent = CreateDefaultSubobject<UCollidingPawnMovementComponent>(TEXT("CollidingPawnMovementComponent"));
	PawnMovementComponent->UpdatedComponent = RootComponent;
}

void AProject_1Pawn::BeginPlay()
{
	Super::BeginPlay();
}

void AProject_1Pawn::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	MoveForward();
}

// Called to bind functionality to input
void AProject_1Pawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//PlayerInputComponent->BindAxis("MoveY", this, &AProject_1Pawn::Move_YAxis);
	//PlayerInputComponent->BindAxis("Look", this, &AProject_1Pawn::Look);
}

void AProject_1Pawn::Move_YAxis(float AxisValue)
{
	/*auto Location = GetActorLocation();
	Location.Y += AxisValue * MoveSpeed;
	SetActorLocation(Location);*/

	/*if (PawnMovementComponent && (PawnMovementComponent->UpdatedComponent == RootComponent))
	{
		PawnMovementComponent->AddInputVector(GetActorRightVector() * AxisValue * MoveSpeed);
	}*/
}

void AProject_1Pawn::Look(float AxisValue)
{
	/*auto Rotation = GetActorRotation();
	Rotation.Yaw += AxisValue * RotationSpeed;
	SetActorRotation(Rotation);*/
}

void AProject_1Pawn::MoveForward()
{
	/*auto Location = GetActorLocation();
	Location.X += 1.0f * ForwardMovingSpeed;
	SetActorLocation(Location);*/

	/*if (PawnMovementComponent && (PawnMovementComponent->UpdatedComponent == RootComponent))
	{
		PawnMovementComponent->AddInputVector(GetActorForwardVector() * ForwardMovingSpeed);
	}*/
}