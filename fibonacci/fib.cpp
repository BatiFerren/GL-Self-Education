#include <iostream>

int fibonacci(int n)
{

    return n <= 1 ? n : fibonacci(n-1) + fibonacci(n-2);
}

int main (int argc, char *argv[])
{
    int num = 0;
    std::cout << "Enter number of element of Fibonacci number" << std::endl;
    std::cin >> num;
    std::cout << num << " element of Fibonacci number equals " << fibonacci(num) << std::endl;

    return 0;
}