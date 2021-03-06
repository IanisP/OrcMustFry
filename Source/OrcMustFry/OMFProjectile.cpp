// Fill out your copyright notice in the Description page of Project Settings.

#include "OMFProjectile.h"

#include "Components/StaticMeshComponent.h"
//#include "Runtime/Engine/Classes/GameFramework/ProjectileMovementComponent.h"


// Sets default values
AOMFProjectile::AOMFProjectile()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	RootComponent = MeshComponent;

	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	ProjectileMovementComponent->SetUpdatedComponent(MeshComponent);
	ProjectileMovementComponent->InitialSpeed = 3000.0f;
	ProjectileMovementComponent->MaxSpeed = 3000.0f;
	ProjectileMovementComponent->bRotationFollowsVelocity = true;
	ProjectileMovementComponent->bShouldBounce = true;
	ProjectileMovementComponent->Bounciness = 0.3f;
}

// Called when the game starts or when spawned
void AOMFProjectile::BeginPlay()
{
	Super::BeginPlay();

	if (nullptr != MeshComponent)
	{
		MeshComponent->OnComponentHit.AddUniqueDynamic(this, &AOMFProjectile::OnProjectileHit);
	}

}

// Called every frame
void AOMFProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AOMFProjectile::InitProjectile(FVector Location, FVector ForwardWeapon)
{
	SetActorLocation(Location);
	MeshComponent->SetEnableGravity(false);
	ProjectileMovementComponent->SetVelocityInLocalSpace(ForwardWeapon * ProjectileMovementComponent->InitialSpeed);
}

void AOMFProjectile::OnProjectileHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	Destroy();
}
