#include <iostream>
#include <vector>
#include <string>
#include <filesystem>
#include <thread>


void get_file_names(std::string path)
{
    for (const auto & entry : std::filesystem::directory_iterator(path))
	std::cout << entry.path() << std::endl;
}


void get_file_amount(std::string path)
{
    uint32_t counter = 0;
    for (const auto & entry : std::filesystem::directory_iterator(path))
	counter++;
    std::cout << counter << std::endl;
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

    std::thread thread1(get_file_names, path_to_directory);
    //get_file_names(path_to_directory);

    std::thread thread2(get_file_amount, path_to_directory);
    //get_file_amount(path_to_directory);

    thread1.join();
    thread2.join();

    return 0;
}
