#include "GifCreatorUtils.hpp"

#include <iostream>

#include <gif.h>
#include <JsonParser.hpp>

int main()
{
	auto const jsonFilePath = GifCreatorUtils::getJsonFileFullPath("Gif");
	auto const opt_object = JsonParser::parsedList<int>(jsonFilePath);
	for (auto e : opt_object.value())
		std::cout << e << std::endl;
}
