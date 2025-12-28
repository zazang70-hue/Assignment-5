// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cube.generated.h"

UCLASS()
class MYPROJECT2_API ACube : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACube();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Move();
	void Turn();

	float LocMin = -4000.0f;
	float LocMax = 4000.0f;
	float ZMin = 0.0f;
	float ZMax = 2000.0f;
	float TurnMin = -180.0f;
	float TurnMax = 180.0f;

};
