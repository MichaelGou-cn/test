#include <iostream>
#include <climits>

using namespace std;
unsigned long returnFactorial(unsigned short num) throw(const char*);

int main()
{
    unsigned short num = 0;
    cout << "请输入一个整数：";
    while( !(cin>>num) || (num < 1) )
    {
        cin.clear();//清楚状态
        cin.ignore(100,'\n'); //清除缓存区
        cout << "请输入一个整数："; 
    }
    cin.ignore(100,'\n');
    try
    {
        unsigned long factorial = returnFactorial(num);//如果异常，则抛出字符型的*e异常
                                                       //直接跳转到catch继续执行 
        cout << num << "的阶乘值是：" << factorial;
    }
    catch(const char *e)//如果正常则不执行,抛出异常则执行 
    {
        cout << "error";
    }
    return 0;
}

unsigned long returnFactorial(unsigned short num) throw(const char*)
{
    unsigned long sum = 1;
    unsigned long max = ULONG_MAX;
    
    for(int i = 1;i <= num; i++)
    {
        sum *= i;
        max /= i;
    }
    if(max < 1)
    {
        throw"悲催。。。该基数太大，无法在该计算机计算求出阶乘值。\n";
    }
    else
    {
        return sum;
    }
}
