#include <iostream>
using namespace std;

class Node
{
    public :
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }
};

class Stack
{
    Node *top;
    public:
    Stack()
    {
        top = NULL;
    }
    
    int push(int value)
    {

    }
}