// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Project_1PlayerController.generated.h"

UENUM(BlueprintType)
enum class EPlayerShapes : uint8
{
	CYLINDER = 0 UMETA(DisplayName = "CYLINDER"),
	SPHERE = 1 UMETA(DisplayName = "SPHERE")
};

/**
 * 
 */
UCLASS()
class PROJECT_1_API AProject_1PlayerController : public APlayerController
{
	GENERATED_BODY()


protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Status)
	EPlayerShapes CurrentPlayerShape = EPlayerShapes::CYLINDER;
	
};
