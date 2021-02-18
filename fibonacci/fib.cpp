#include <iostream>

static int32_t buff[100] = {0};

int32_t fibonacci(int32_t n)
{
    if (n <= 1) return n;
    if (buff[n] == 0) buff[n] = fibonacci(n-1) + fibonacci(n-2);
    return buff[n];
}

int main (int argc, char *argv[])
{
    int32_t num = 0;
    std::cout << "Enter number of element of Fibonacci number" << std::endl;
    std::cin >> num;
    std::cout << num << " element of Fibonacci number equals " << fibonacci(num) << std::endl;

    return 0;
}