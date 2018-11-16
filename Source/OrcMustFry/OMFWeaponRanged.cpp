// Fill out your copyright notice in the Description page of Project Settings.

#include "OMFWeaponRanged.h"

#include "OMFProjectile.h"
//#include "OMFArrow.h"
#include "Components/StaticMeshComponent.h"

#include "Engine/World.h"

// Called when the game starts or when spawned
void AOMFWeaponRanged::BeginPlay()
{
	Super::BeginPlay();

	if (nullptr != MeshComponent)
		MeshComponent->SetCollisionProfileName(TEXT("NoCollision"));

}

void AOMFWeaponRanged::Attack()
{
	Super::Attack();
	if (nullptr != GetWorld())
	{
		AOMFProjectile* CurrentProjectile = nullptr;

		CurrentProjectile = GetWorld()->SpawnActor<AOMFProjectile>(ProjectileClass);

		if (nullptr != CurrentProjectile && nullptr != CurrentProjectile->MeshComponent)
		{
			CurrentProjectile->InitProjectile(MeshComponent->GetSocketLocation(TEXT("ProjectileSocket")),GetActorForwardVector());
		}
	}
}