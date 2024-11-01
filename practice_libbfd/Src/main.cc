#include <iostream>
#include <fmt/core.h>
#include <bfd.h>
#include <string>

int main(int argc, char *argv[])
{
	Binary bin;
	std::string fileName;

	if (argc < 2)
	{
		std::cerr << "Usage: ./BFD_Parser <input_binary>" << std::endl;
		return 0;
	}

	fileName.assign(argv[1]);

	if (load_binary(fileName, &bin, Binary::BIN_TYPE_AUTO) < 0)
	{
		std::cerr << "Input binary is NOT loaded" << std::endl;
		return 0;
	}

	return 1;
}
