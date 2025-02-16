#include <iostream>
using namespace std;

class ClxBase
{
public:
    ClxBase();
    virtual ~ClxBase();
    virtual void doSomething();
};

ClxBase::ClxBase()
{
    cout << "ClxBase begin!\n";
}

ClxBase::~ClxBase()
{
    cout << "ClxBase end!\n"; 

}
void ClxBase::doSomething()
{
    cout << "Do something in class ClxBase!\n"; 
}

class ClxDerived:public ClxBase
{
public:
    ClxDerived();
    ~ClxDerived();
    void doSomething();
};

ClxDerived::ClxDerived()
{
    cout << "ClxDerived begin!\n";
}

ClxDerived::~ClxDerived()
{
    cout<<"Output from the destructor of class ClxDerived!\n";
}
void ClxDerived::doSomething()
{
    cout << "Do something in class ClxDerived!\n";
}

int main()
{
    ClxBase *pTest=new ClxDerived;
    pTest->doSomething();
    delete pTest;
    return 0;
}