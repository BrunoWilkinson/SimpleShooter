// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterAIController.h"
#include "Kismet/GameplayStatics.h"

void AShooterAIController::BeginPlay()
{
	Super::BeginPlay();

	APawn* PlayePawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	SetFocus(PlayePawn);
}

void AShooterAIController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	APawn* PlayePawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	MoveToActor(PlayePawn);
}
