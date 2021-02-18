#include <iostream>
#include <vector>
#include <string>

static int32_t buff[100] = {0};

int32_t fibonacci(int32_t n)
{
    if (n <= 1) {buff[0] = 0; buff[1] = 1;}
    else {buff[n] = fibonacci(n-1) + fibonacci(n-2);}
    return buff[n];
}

int32_t sum_of_fibonacci(int32_t counter)
{
    int32_t sum = 0;
    for (int32_t i = 0; i <= counter; i++)
	{
	    sum += buff[i];
	}

    return sum;

}

int main (int argc, char *argv[])
{
    std::vector<std::string> cmdLineArgs(argv, argv + argc);
    for (auto& arg : cmdLineArgs)
    {
	if (arg == "--help" || arg == "-h")
	{
	    std::cout << "This programm calculate sum of n elements of Fibonacci number. After programms run You have to enter how many first members of Fibonacci numbers must be summed." << std::endl;
	    return 0;
	}
    }
    int32_t num = 0;
    std::cout << "Enter number of element of Fibonacci number" << std::endl;
    std::cin >> num;
    fibonacci(num);
    std::cout << "Sum of " << num << " elements of Fibonacci number equals " << sum_of_fibonacci(num) << std::endl;

    return 0;
}
