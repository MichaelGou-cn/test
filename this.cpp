#include "header.h"
#include "iostream"
using namespace std;
extern unsigned short thatNum;//声明全局变量 
static bool printMe = false;//定义静态全局变量 
int main()
{
    unsigned short thisNum = 10;
    cout << thisNum << "! is equal to " << returnFactorial(thisNum) << "\n\n";
    cout << thatNum << "! is equal to " << returnFactorial(thatNum) << "\n\n";
    cout << headerNum << "! is equal to " << returnFactorial(headerNum) << "\n\n";
    if(printMe)
    {
        cout << "小甲鱼真帅！\n\n";
    }
    return 0;
}
