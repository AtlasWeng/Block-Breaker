#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// Ball
struct Ball_t3972794301;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Paddle
struct  Paddle_t763152128  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Paddle::autoPlay
	bool ___autoPlay_2;
	// System.Single Paddle::minX
	float ___minX_3;
	// System.Single Paddle::maxX
	float ___maxX_4;
	// Ball Paddle::ball
	Ball_t3972794301 * ___ball_5;

public:
	inline static int32_t get_offset_of_autoPlay_2() { return static_cast<int32_t>(offsetof(Paddle_t763152128, ___autoPlay_2)); }
	inline bool get_autoPlay_2() const { return ___autoPlay_2; }
	inline bool* get_address_of_autoPlay_2() { return &___autoPlay_2; }
	inline void set_autoPlay_2(bool value)
	{
		___autoPlay_2 = value;
	}

	inline static int32_t get_offset_of_minX_3() { return static_cast<int32_t>(offsetof(Paddle_t763152128, ___minX_3)); }
	inline float get_minX_3() const { return ___minX_3; }
	inline float* get_address_of_minX_3() { return &___minX_3; }
	inline void set_minX_3(float value)
	{
		___minX_3 = value;
	}

	inline static int32_t get_offset_of_maxX_4() { return static_cast<int32_t>(offsetof(Paddle_t763152128, ___maxX_4)); }
	inline float get_maxX_4() const { return ___maxX_4; }
	inline float* get_address_of_maxX_4() { return &___maxX_4; }
	inline void set_maxX_4(float value)
	{
		___maxX_4 = value;
	}

	inline static int32_t get_offset_of_ball_5() { return static_cast<int32_t>(offsetof(Paddle_t763152128, ___ball_5)); }
	inline Ball_t3972794301 * get_ball_5() const { return ___ball_5; }
	inline Ball_t3972794301 ** get_address_of_ball_5() { return &___ball_5; }
	inline void set_ball_5(Ball_t3972794301 * value)
	{
		___ball_5 = value;
		Il2CppCodeGenWriteBarrier(&___ball_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
