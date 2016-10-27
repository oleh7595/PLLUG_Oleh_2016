#include <iostream>
#include <string>

//Delagates
//Pooling
//Callback
//Encapsulation (PIMPL & Bridge)


class IFoobar
{
public:
    virtual void foo() = 0;
    virtual void bar() = 0;
    ~IFoobar();
};

class Foobar : public IFoobar
{
public:
    virtual void foo () override
    {
            std::cout << "something foo" << std::endl;
    }
    virtual void bar () override
    {
            std::cout << "something bar" << std::endl;
    }
};

using namespace std;


int main()
{
    IFoobar *inst = new Foobar;
    inst->foo();
    inst->bar();

    return 0;
}



