#include <iostream>
#include <string>

using namespace std;
int *newInt(int value);
int main()
{
    int *x=newInt(20);
    cout<<*x;
    delete x;
    x=NULL;
    return 0;
}

int *newInt(int value)
{
    int *myint=new int;
    *myint=value;
    return myint;
}