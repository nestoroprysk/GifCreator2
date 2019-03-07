#pragma once

#include <string>

namespace GifCreatorUtils
{
	namespace Detail
	{
		inline const char* getPathToSourceDir()
		{
			return PATH_TO_SOURCE_DIR;
		}
	}

	inline std::string getJsonFileFullPath(std::string const& name)
	{
		auto const prefix = std::string(Detail::getPathToSourceDir());
		auto const suffix = ".json";
		return prefix + '/' + name + suffix;
	}
}
