#include <iostream>
using namespace std;

#define SIZE 100

// This is going to create a class stack.
/*! class Stack
 *  brief Brief class description
 *
 *  Detailed description
 */
class Stack
{

    int stack[SIZE];
    int tos;
public:
    void init();
    void push(int item);
    int pop();

};

void Stack::init()
{
    tos = 0;
}

void Stack:: push(int item)
{
    if (tos == SIZE) {
        std::cout << "Stack is full" << std::endl;
        return ;
    }
    stack[tos] = item;
    tos++;
}

int Stack::pop()
{
    if (tos == 0) {
        std::cout << "Stack underflow " << std::endl;
        return 0;
    }
    tos--;
    return stack[tos];
}

int main(int argc, char *argv[])
{
    Stack stack1, stack2;
    stack1.init();
    stack2.init();

    stack1.push(1);
    stack2.push(2);


    stack1.push(3);
    stack2.push(4);

    std::cout << stack1.pop() << std::endl;
    std::cout << stack1.pop() << std::endl;
    std::cout << stack2.pop() << std::endl;
    std::cout << stack2.pop() << std::endl;
    return 0;
}
