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
	if (top <= size_stack) {array[top++] = element;}
	else {std::cout << "You reached the end of the stack. Resize your stack" << std::endl;}
    }

    uint32_t pop()
    {
	uint32_t index_of_top_element = top - 1;
	return array[index_of_top_element];
    }

    uint32_t capacity()
    {
	return top;
    }

    uint32_t size()
    {
	return size_stack;
    }

    void resize(uint32_t new_size_stack)
    {
	uint32_t *buff;
	buff = new uint32_t[top];
	for (uint32_t i = 0; i <= top; i++)
	{
	    buff[i] = array[i];
	}
	size_stack = new_size_stack;
	delete[] array;
	array = new uint32_t[size_stack];
	for (uint32_t i = 0; i <= top; i++)
	{
	    array[i] = buff[i];
	}
	delete[] buff;
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
    uint32_t siz = mystack.size();
    std::cout << "Size = " << siz << std::endl;
    mystack.resize(15);
    mystack.push(1);
    uint32_t new_cap = mystack.capacity();
    std::cout << "New_Cap = " << new_cap << std::endl;
    uint32_t new_siz = mystack.size();
    std::cout << "New_Size = " << new_siz << std::endl;
    mystack.print_stack();
    std::cout << "Top element = " << mystack.pop() << std::endl;

    return 0;
}
