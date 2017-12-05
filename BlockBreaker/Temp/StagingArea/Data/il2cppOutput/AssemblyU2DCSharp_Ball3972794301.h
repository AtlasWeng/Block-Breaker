#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// Paddle
struct Paddle_t763152128;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ball
struct  Ball_t3972794301  : public MonoBehaviour_t1158329972
{
public:
	// Paddle Ball::paddle
	Paddle_t763152128 * ___paddle_2;
	// System.Boolean Ball::gameStart
	bool ___gameStart_3;
	// UnityEngine.Vector3 Ball::PaddleToBallPos
	Vector3_t2243707580  ___PaddleToBallPos_4;

public:
	inline static int32_t get_offset_of_paddle_2() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___paddle_2)); }
	inline Paddle_t763152128 * get_paddle_2() const { return ___paddle_2; }
	inline Paddle_t763152128 ** get_address_of_paddle_2() { return &___paddle_2; }
	inline void set_paddle_2(Paddle_t763152128 * value)
	{
		___paddle_2 = value;
		Il2CppCodeGenWriteBarrier(&___paddle_2, value);
	}

	inline static int32_t get_offset_of_gameStart_3() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___gameStart_3)); }
	inline bool get_gameStart_3() const { return ___gameStart_3; }
	inline bool* get_address_of_gameStart_3() { return &___gameStart_3; }
	inline void set_gameStart_3(bool value)
	{
		___gameStart_3 = value;
	}

	inline static int32_t get_offset_of_PaddleToBallPos_4() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___PaddleToBallPos_4)); }
	inline Vector3_t2243707580  get_PaddleToBallPos_4() const { return ___PaddleToBallPos_4; }
	inline Vector3_t2243707580 * get_address_of_PaddleToBallPos_4() { return &___PaddleToBallPos_4; }
	inline void set_PaddleToBallPos_4(Vector3_t2243707580  value)
	{
		___PaddleToBallPos_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
