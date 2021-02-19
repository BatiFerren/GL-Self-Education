#include <iostream>
#include <vector>
#include <string>

class MyStack
{
private:
    uint32_t size_stack;
    uint32_t *array;

public:
    uint32_t top;
    MyStack()
    {
	uint32_t top = 0;
    }

    ~MyStack()
    {
	delete[] array;
    }

    void create(uint32_t size_stack_)
    {
	size_stack = size_stack_;
	array = new uint32_t[size_stack];
    }

    void print_stack()
    {
	uint32_t i = top;
	while (i > 0) {
	    std::cout << array[--i] << std::endl;
	}
    }

    void push(uint32_t element)
    {
	array[top++] = element;
    }

    uint32_t capacity()
    {
	return top;
    }

};

int main (int argc, char *argv[])
{
    std::vector<std::string> cmdLineArgs(argv, argv + argc);
    for (auto& arg : cmdLineArgs)
    {
	if (arg == "--help" || arg == "-h")
	{
	    std::cout << "This programm create stack based on array." << std::endl;
	    return 0;
	}
    }

    MyStack mystack;
    mystack.create(10);
    mystack.push(5);
    mystack.push(10);
    mystack.push(2);
    mystack.print_stack();
    uint32_t cap = mystack.capacity();
    std::cout << "Cap = " << cap << std::endl;

    return 0;
}
