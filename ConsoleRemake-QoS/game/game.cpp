#include "../pch.h"
#include "game.hpp"

#include "../common/utils/flags.hpp"

namespace game
{
	uint32_t base_address;

	void load_base_address()
	{
		const auto module = GetModuleHandleA(0);
		base_address = reinterpret_cast<uint64_t>(module);
	}

	namespace environment
	{
		bool is_dedi()
		{
			static const auto dedicated = utils::flags::has_flag("dedicated");
			return dedicated;
		}
	}

	const char* G_GAME_MODE_STRINGS[] =
	{
		"none",
		"sp",
		"mp",
		"cp",
	};
}