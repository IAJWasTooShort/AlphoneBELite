#pragma once
#include "MultiPlayerLevel.h"

class Actor {
public:
	char pad_0008[280]; //0x0008
	Vec2 bodyRot; //0x0120
	char pad_0128[152]; //0x0128
	bool onGround; //0x01C0
	char pad_01C1[95]; //0x01C1
	float stepHeight; //0x0220 | Default = 0.5625
	char pad_0224[308]; //0x0224
	class MultiPlayerLevel* MultiPlayerLevel; //0x0358
	char pad_0360[340]; //0x0360
	Vec2 collision; //0x04B4
	char pad_04BC[24]; //0x04BC
	Vec3 velocity; //0x04D4
	char pad_04E0[880]; //0x04E0

	virtual void Function0();
	virtual void Function1();
	virtual void Function2();
	virtual void Function3();
	virtual void Function4();
	virtual void Function5();
	virtual void Function6();
	virtual void Function7();
	virtual void reset(void);
	virtual void getOnDeathExperience(void);
	virtual enum ActorType getOwnerEntityType(void);
	virtual void remove(void);
	virtual void setPos(Vec3*);
	virtual bool isSneaking();
	virtual void Function13();
	virtual Vec3* getPos();
	virtual Vec3* getPosOld();
	virtual Vec3* getPosExtrapolated(float);
	virtual void Function17();
	virtual Vec3* getFiringPos(void);
	virtual void setRot(Vec3 const&);
	virtual void Function20();
	virtual void move(Vec3 const&);
	virtual void Function22();
	virtual float getInterpolatedBodyRot(float);
	virtual float getShadowHeightOffs(void);
	virtual void Function25();
	virtual float getYawSpeedInDegreesPerSecond(void);
	virtual float getInterpolatedWalkAnimSpeed(float);
	virtual void Function28();
	virtual void checkBlockCollisions(void);
	virtual void Function30();
	virtual bool isFireImmune(void);
	virtual void Function32();
	virtual void Function33();
	virtual void teleportTo(Vec3 const&, bool, int, int, uint64_t); //Last param is ActorUniqueID
	virtual void tryTeleportTo(Vec3 const&, bool, bool, int, int);
	virtual void chorusFruitTeleport(Vec3&);
	virtual void lerpTo(Vec3 const&, Vec2 const&, int);
	virtual void lerpMotion(Vec3 const&);
	virtual void Function39();
	virtual void normalTick(void);
	virtual void baseTick(void);
	virtual void rideTick(void);
	virtual void positionRider(Actor&, float);
	virtual float getRidingHeight(void);
	virtual void startRiding(Actor&);
	virtual void addRider(Actor&);
	virtual void flagRiderToRemove(Actor&);
	virtual void Function48();
	virtual bool intersects(Vec3 const&, Vec3 const&);
	virtual bool isFree(Vec3 const&);
	virtual void Function51();
	virtual bool isInWall(void);
	virtual bool isInvisible(void);
	virtual bool canShowNameTag(void);
	virtual void Function55();
	virtual void setNameTagVisible(bool);
	virtual void Function57();
	virtual __int64 getNameTagAsHash(void);
	virtual std::string getFormattedNameTag(void);
	virtual void Function60();
	virtual void setNameTag(std::string const&);
	virtual void Function62();
	virtual void Function63();
	virtual void Function64();
	virtual bool isInWater(void);
	virtual bool hasEnteredWater(void);
	virtual bool isImmersedInWater(void);
	virtual bool isInWaterOrRain(void);
	virtual bool isInLava(void);
	virtual bool isUnderLiquid(class MaterialType);
	virtual bool isOverWater(void);
	virtual void makeStuckInBlock(Vec3 const&);
	virtual void Function73();
	virtual void Function74();
	virtual float getShadowRadius(void);
	virtual Vec3* getHeadLookVector(float);
	virtual void Function77();
	virtual bool canSee(Vec3 const&);
	virtual bool canSee(Actor const&);
	virtual bool isSkyLit(float);
	virtual float getBrightness(float);
	virtual void Function82();
	virtual void Function83();
	virtual void onAboveBubbleColumn(bool);
	virtual void onInsideBubbleColumn(bool);
	virtual bool isImmobile(void);
	virtual bool isSilent(void);
	virtual bool isPickable();
	virtual void Function89();
	virtual bool isSleeping(void);
	virtual void Function91();
	virtual void setSneaking(bool);
	virtual bool isBlocking(void);
	virtual void Function94();
	virtual bool isAlive(void);
	virtual bool isOnFire(void);
	virtual bool isOnHotBlock(void);
	virtual void Function98();
	virtual bool isSurfaceMob(void);
	virtual void Function100();
	virtual void Function101();
	virtual void Function102();
	virtual bool canAttack(Actor*, bool);
	virtual void setTarget(Actor*);
	virtual void Function105();
	virtual void Function106();
	virtual void attack(Actor&);
	virtual void performRangedAttack(Actor&, float);
	virtual void adjustDamageAmount(int&);
	virtual int getEquipmentCount(void);
	virtual void setOwner(uint64_t); //Param is ActorUniqueID
	virtual void setSitting(bool);
	virtual void Function113();
	virtual void Function114();
	virtual int getInventorySize(void);
	virtual int getEquipSlots(void);
	virtual int getChestSlots(void);
	virtual void setStanding(bool);
	virtual bool canPowerJump(void);
	virtual void setCanPowerJump(bool);
	virtual bool isJumping(void);
	virtual bool isEnchanted(void);
	virtual void Function123();
	virtual void Function124();
	virtual bool shouldRender(void);
	virtual void Function126();
	virtual void Function127();
	virtual void Function128();
	virtual void animateHurt(void);
	virtual void doFireHurt(void);
	virtual void onLightningHit(void);
	virtual void onBounceStarted(void);
	virtual void feed(int);
	virtual void handleEntityEvent(class ActorEvent, int);
	virtual float getPickRadius(void);
	virtual void getActorRendererId(void);
	virtual void spawnAtLocation(class ItemStack const&, float);
	virtual void spawnAtLocation(class Block const&, int, float);
	virtual void spawnAtLocation(class Block const&, int);
	virtual void spawnAtLocation(int, int, float);
	virtual void spawnAtLocation(int, int);
	virtual void despawn(void);
	virtual void killed(Actor&);
	virtual void Function144();
	virtual void setArmor(int, class ItemStack const&);
	virtual class ItemStack getArmor(int);
	virtual void Function147();
	virtual void Function148();
	virtual float getModelScale(void);
	virtual class ItemStack getEquippedSlot(int);
	virtual void setEquippedSlot(int, class ItemStack const&);
	virtual class ItemStack getSelectedItem(void);
	virtual void setCarriedItem(class ItemStack const&);
	virtual void setOffhandSlot(class ItemStack const&);
	virtual class ItemStack getEquippedTotem(void);
	virtual void consumeTotem(void);
	virtual void Function157();
	virtual void Function158();
	virtual void Function159();
	virtual void Function160();
	virtual int getEntityTypeId(void);
	virtual void queryEntityRenderer(void);
	virtual __int64 getSourceUniqueID(void);
	virtual void setOnFire(int);
	virtual void getHandleWaterAABB(void);
	virtual void handleInsidePortal(Vec3 const&);
	virtual void Function167();
	virtual __int64 getPortalCooldown(void);
	virtual int getDimensionId(void);
	virtual void Function170();
	virtual void Function171();
	virtual void changeDimension(int, bool);
	virtual void Function173();
	virtual void checkFallDamage(float, bool);
	virtual void causeFallDamage(float);
	virtual void handleFallDistanceOnServer(float, bool);
	virtual void Function177();
	virtual void Function178();
	virtual void onSynchedDataUpdate(int);
	virtual bool canAddRider(Actor&);
	virtual void Function181();
	virtual void Function182();
	virtual bool isInCaravan(void);
	virtual void Function184();
	virtual void tickLeash(void);
	virtual void sendMotionPacketIfNeeded(void);
	virtual void Function187();
	virtual void stopRiding(bool, bool, bool);
	virtual void startSwimming(void);
	virtual void stopSwimming(void);
	virtual void Function191();
	virtual int getCommandPermissionLevel(void);
	virtual void Function193();
	virtual void Function194();
	virtual int getDeathTime(void);
	virtual void heal(int);
	virtual bool isInvertedHealAndHarm(void);
	virtual void Function198();
	virtual bool canBeAffected(int);
	virtual void Function200();
	virtual void Function201();
	virtual void Function202();
	virtual void Function203();
	virtual void Function204();
	virtual void Function205();
	virtual void swing(void);
	virtual void Function206();
	virtual void Function207();
	virtual void Function208();
	virtual void Function209();
	virtual float getMapDecorationRotation(void);
	virtual float getRiderYRotation(Actor const&);
	virtual void Function212();
	virtual void Function213();
	virtual bool isCreative(void);
	virtual bool isAdventure(void);
	virtual void add(class ItemStack&);
	virtual void drop(class ItemStack const&, bool);
	virtual void Function218();
	virtual void Function219();
	virtual void Function220();
	virtual void setSize(float, float);
	virtual int getLifeSpan(void);
	virtual void onOrphan(void);
	virtual void wobble(void);
	virtual bool wasHurt(void);
	virtual void startSpinAttack(void);
	virtual void stopSpinAttack(void);
	virtual void setDamageNearbyMobs(bool);
	virtual void Function229();
	virtual void Function230();
	virtual void reloadLootTable(void);
	virtual void Function232();
	virtual void kill(void);
	virtual void die(void);
	virtual bool shouldTick(void);
	virtual void createMovementProxy(void);
	virtual void Function237();
	virtual void shouldTryMakeStepSound(void);
	virtual float getNextStep(float);
	virtual void Function240();
	virtual bool outOfWorld(void);
	virtual void Function242();
	virtual void markHurt(void);
	virtual void Function244();
	virtual void Function245();
	virtual void Function246();
	virtual void Function247();
	virtual void Function248();
	virtual void checkInsideBlocks(float);
	virtual void pushOutOfBlocks(Vec3 const&);
	virtual void updateWaterState(void);
	virtual void doWaterSplashEffect(void);
	virtual void spawnTrailBubbles(void);
	virtual void updateInsideBlock(void);
	virtual struct LootTable getLootTable(void);
	virtual void Function256();
	virtual void Function257();
	virtual void Function258();
	virtual void Function259();
	virtual void knockback(Actor*, int, float, float, float, float, float);
};