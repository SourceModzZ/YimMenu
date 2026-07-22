#include "hooking/hooking.hpp"

namespace big
{
	int hooks::get_pool_type()
	{
		if (g.session.cheater_pool)
		{
			return 1;
		}

		return 0;
	}
}