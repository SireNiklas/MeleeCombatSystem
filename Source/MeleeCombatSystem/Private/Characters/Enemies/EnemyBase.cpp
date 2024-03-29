﻿// Fill out your copyright notice in the Description page of Project Settings.


#include "MeleeCombatSystem/Public/Characters/Enemies/EnemyBase.h"

#include "GameFramework/PawnMovementComponent.h"


// Sets default values
AEnemyBase::AEnemyBase()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AEnemyBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemyBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AEnemyBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AEnemyBase::OnDeath()
{
	GetWorld()->GetTimerManager().SetTimer(OnDeathTimer, this, &AEnemyBase::OnDeath, 3.f, false);
	GetMesh()->SetSimulatePhysics(true);
	
	
}

