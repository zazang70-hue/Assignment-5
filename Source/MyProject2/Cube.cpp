// Fill out your copyright notice in the Description page of Project Settings.

#include "Cube.h"
#include "Engine/Engine.h"

void ACube::Move()
{

	
		float RLX = FMath::RandRange(LocMin, LocMax);
		float RLY = FMath::RandRange(LocMin, LocMax);
		float RLZ = FMath::RandRange(ZMin, ZMax);

		SetActorLocation(FVector(RLX, RLY, RLZ));

		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Green, FString::Printf(TEXT("Move Log  : %f, %f, %f"), RLX, RLY, RLZ));
		}
	
}


void ACube::Turn()
{


	
		float RLP = FMath::RandRange(TurnMin, TurnMax);
		float RLY = FMath::RandRange(TurnMin, TurnMax);
		float RLR = FMath::RandRange(TurnMin, TurnMax);

		SetActorRotation(FRotator(RLP, RLY, RLR));
	
}

// Sets default values
ACube::ACube()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


}

// Called when the game starts or when spawned
void ACube::BeginPlay()
{
	Super::BeginPlay();

	SetActorLocation(FVector(0.0, 50.0, 0.0));

	for (int i = 0; i < 10; ++i)
	{
		Move();
		Turn();
		
		
	}


}

// Called every frame
void ACube::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}


