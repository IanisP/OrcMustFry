# OrcMustFry
Devoir cours Unreal Engine 4

Projectiles/traps

We start to implement projectiles and traps for the game, we will set the base class we need for the projectiles
 and the traps.
Use the projectileComponent from Unreal and the ActorSequenceComponent for animation (this one is optional).
This starts on 10/11 and finish on 22-23/11 you have two weeks including one Unreal class to complete this, 
then we will correct.

Projectiles:

ProjectileComponent : Component existing in Unreal, use it to implement the following projectiles

Arrow : normal projectile
Bullet : same just different body
Grenade : bouncing and exploding after time
Mine : sticking and exploding on command
Explosive : exploding on hit aoe
Mamouchka : rocket controlled by the player when fired, exploding on hit or on command

Traps:

SpikeTrap : inflict damage when an ennemy walks on it
	//Attack() when in triggerBox if CD <= 0
TarTrap : slow an ennemy walking on it
	//Attack() when in triggerBox (s i h ote a ote f r s)
SwingMace : inflict damage on CD (animation like a melee weapon)
	//Attack() when in triggerBox if CD <= 0
ArrowWall : fire multiple arrows when an ennemy walks in front of it (system to generates the number of projectiles
	asked by the variable designer)
	//Fire() when in triggerBox if CD <= 0
BoomBarrel : explode on damaged
	//Attack() when hit
Ballista : shoot arrow to a target (projectile follow target)
	//Fire() when in certain distance if CD <= 0
Bomber : shoot explosive to a position (system to generates the number of projectiles asked by the variable designer)
	//Fire() when in certain distance if CD <= 0
IceTower : slow all ennemies in range on CD
	//Attack() when in triggerBox if CD <= 0
FireTower : burn all ennemies in range on CD
	//Attack() when in triggerBox if CD <= 0
BladeTornado : damage all ennemies in range when reloaded
	//Attack() when in triggerBox if CD <= 0
Blizzard : stop and damage all ennemies in range when reloaded
	//Attack() when in triggerBox if CD <= 0

ActorSequenceComponent (optional) : Component existing in a plugin, you can use it to implement animation for 
melee weapons and traps if you want
it's a WIP feature so it's buggy, use it only in Blueprint
See : https://docs.unrealengine.com/en-US/Engine/Sequencer/HowTo/ActorSequence


