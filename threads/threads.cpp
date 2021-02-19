#include <iostream>
#include <vector>
#include <string>
#include <filesystem>


void get_file_names(std::string path)
{
    for (const auto & entry : std::filesystem::directory_iterator(path))
	std::cout << entry.path() << std::endl;
}


uint32_t get_file_amount(std::string path)
{
    uint32_t counter = 0;
    for (const auto & entry : std::filesystem::directory_iterator(path))
	counter++;
    return counter;
}


int main (int argc, char *argv[])
{
    std::string path_to_directory;
    std::vector<std::string> cmdLineArgs(argv, argv + argc);
    for (auto& arg : cmdLineArgs)
    {
	if (arg == "--help" || arg == "-h")
	{
	    std::cout << "This programm count and print file names in some folder." << std::endl;
	    return 0;
	}
	else
	{
	    path_to_directory = arg;
	}
    }
    
    get_file_names(path_to_directory);
    std::cout << "Number of files = " << get_file_amount(path_to_directory) << std::endl;


    return 0;
}
