#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// LevelManager
struct LevelManager_t3355282079;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Bricks
struct  Bricks_t93471410  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Sprite[] Bricks::hitSprite
	SpriteU5BU5D_t3359083662* ___hitSprite_2;
	// UnityEngine.AudioClip Bricks::crack
	AudioClip_t1932558630 * ___crack_3;
	// UnityEngine.GameObject Bricks::partical
	GameObject_t1756533147 * ___partical_5;
	// System.Int32 Bricks::timesHit
	int32_t ___timesHit_6;
	// LevelManager Bricks::levelManager
	LevelManager_t3355282079 * ___levelManager_7;
	// System.Boolean Bricks::isBreakable
	bool ___isBreakable_8;

public:
	inline static int32_t get_offset_of_hitSprite_2() { return static_cast<int32_t>(offsetof(Bricks_t93471410, ___hitSprite_2)); }
	inline SpriteU5BU5D_t3359083662* get_hitSprite_2() const { return ___hitSprite_2; }
	inline SpriteU5BU5D_t3359083662** get_address_of_hitSprite_2() { return &___hitSprite_2; }
	inline void set_hitSprite_2(SpriteU5BU5D_t3359083662* value)
	{
		___hitSprite_2 = value;
		Il2CppCodeGenWriteBarrier(&___hitSprite_2, value);
	}

	inline static int32_t get_offset_of_crack_3() { return static_cast<int32_t>(offsetof(Bricks_t93471410, ___crack_3)); }
	inline AudioClip_t1932558630 * get_crack_3() const { return ___crack_3; }
	inline AudioClip_t1932558630 ** get_address_of_crack_3() { return &___crack_3; }
	inline void set_crack_3(AudioClip_t1932558630 * value)
	{
		___crack_3 = value;
		Il2CppCodeGenWriteBarrier(&___crack_3, value);
	}

	inline static int32_t get_offset_of_partical_5() { return static_cast<int32_t>(offsetof(Bricks_t93471410, ___partical_5)); }
	inline GameObject_t1756533147 * get_partical_5() const { return ___partical_5; }
	inline GameObject_t1756533147 ** get_address_of_partical_5() { return &___partical_5; }
	inline void set_partical_5(GameObject_t1756533147 * value)
	{
		___partical_5 = value;
		Il2CppCodeGenWriteBarrier(&___partical_5, value);
	}

	inline static int32_t get_offset_of_timesHit_6() { return static_cast<int32_t>(offsetof(Bricks_t93471410, ___timesHit_6)); }
	inline int32_t get_timesHit_6() const { return ___timesHit_6; }
	inline int32_t* get_address_of_timesHit_6() { return &___timesHit_6; }
	inline void set_timesHit_6(int32_t value)
	{
		___timesHit_6 = value;
	}

	inline static int32_t get_offset_of_levelManager_7() { return static_cast<int32_t>(offsetof(Bricks_t93471410, ___levelManager_7)); }
	inline LevelManager_t3355282079 * get_levelManager_7() const { return ___levelManager_7; }
	inline LevelManager_t3355282079 ** get_address_of_levelManager_7() { return &___levelManager_7; }
	inline void set_levelManager_7(LevelManager_t3355282079 * value)
	{
		___levelManager_7 = value;
		Il2CppCodeGenWriteBarrier(&___levelManager_7, value);
	}

	inline static int32_t get_offset_of_isBreakable_8() { return static_cast<int32_t>(offsetof(Bricks_t93471410, ___isBreakable_8)); }
	inline bool get_isBreakable_8() const { return ___isBreakable_8; }
	inline bool* get_address_of_isBreakable_8() { return &___isBreakable_8; }
	inline void set_isBreakable_8(bool value)
	{
		___isBreakable_8 = value;
	}
};

struct Bricks_t93471410_StaticFields
{
public:
	// System.Int32 Bricks::breakableCount
	int32_t ___breakableCount_4;

public:
	inline static int32_t get_offset_of_breakableCount_4() { return static_cast<int32_t>(offsetof(Bricks_t93471410_StaticFields, ___breakableCount_4)); }
	inline int32_t get_breakableCount_4() const { return ___breakableCount_4; }
	inline int32_t* get_address_of_breakableCount_4() { return &___breakableCount_4; }
	inline void set_breakableCount_4(int32_t value)
	{
		___breakableCount_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
