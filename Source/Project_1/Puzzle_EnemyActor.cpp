// Fill out your copyright notice in the Description page of Project Settings.


#include "Puzzle_EnemyActor.h"

// Sets default values
APuzzle_EnemyActor::APuzzle_EnemyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APuzzle_EnemyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APuzzle_EnemyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

