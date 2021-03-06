// Fill out your copyright notice in the Description page of Project Settings.

#include "OMFWeapon.h"

#include "Components/StaticMeshComponent.h"

// Sets default values
AOMFWeapon::AOMFWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SceneComponent"));

	RootComponent = SceneComponent;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));

	if(nullptr != MeshComponent && nullptr != SceneComponent)
		MeshComponent->SetupAttachment(SceneComponent);
}

// Called when the game starts or when spawned
void AOMFWeapon::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AOMFWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AOMFWeapon::Attack()
{

}

