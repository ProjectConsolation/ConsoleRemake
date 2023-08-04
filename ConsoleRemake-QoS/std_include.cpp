#include "pch.h"

#pragma comment(linker, "/stack:0x1000000")

extern "C"
{
	int s_read_arc4random(void*, size_t)
	{
		return -1;
	}

	int s_read_getrandom(void*, size_t)
	{
		return -1;
	}

	int s_read_urandom(void*, size_t)
	{
		return -1;
	}

	int s_read_ltm_rng(void*, size_t)
	{
		return -1;
	}
}
