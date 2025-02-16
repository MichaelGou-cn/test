#include <iostream>
#include <string>
#include <climits>
class Factorial
{
private:
    unsigned short num;
public:
    Factorial(unsigned short num);
    unsigned long getFactorial();
    bool inRange();
};

Factorial::Factorial(unsigned short num)
{
    this->num=num;
}

unsigned long Factorial:: getFactorial()
{
    unsigned long sum=1;
    for(int i=1;i<=num;i++)
    {
        sum*=i;
    }
    return sum;
}

bool Factorial::inRange()
{
    unsigned long max = ULONG_MAX;//ULONG_MAX在头文件climits中 
    for(int i = num; i >= 1; --i)//将最大值ULONG_MAX除以输入的num阶乘 
    {
        max /= i;
    }
    if(max < 1)
    return false;
    else 
    return true;
}
using namespace std;
int main()
{
        unsigned short num = 0;
    cout << "请输入一个整数：";
    cin >> num;
    
    Factorial fac(num);
    
    if(fac.inRange())
    {
        cout << num << "的阶乘值是" << fac.getFactorial() << "\n\n";
     } 
     else
     {
         cout <<ULONG_MAX<< "您所输入的值太大！\n\n";
     }
    return 0;
}