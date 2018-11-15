// Fill out your copyright notice in the Description page of Project Settings.

#include "OMFWeaponMelee.h"

#include "Components/StaticMeshComponent.h"

void AOMFWeaponMelee::BeginPlay()
{
	Super::BeginPlay();
}

void AOMFWeaponMelee::Attack()
{
	Super::Attack();

	if (nullptr != MeshComponent)
	{
		TArray<AActor*> CollisionedActors;
		MeshComponent->GetOverlappingActors(CollisionedActors);

		for (auto Actor : CollisionedActors)
		{
			Actor->Destroy();
		}

	}
}