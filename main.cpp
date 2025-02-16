#include <iostream>
#include "Rational.h"//系统级别用单尖括号，自定义级别用双引号 
#include <string>
#include <math.h> 


using namespace std;

int main()
{
    myMath:: call_love_fishc();//输出爱心 
    
    myMath::Rational f1(2,16);//定义f1对象，且传入(2,16)参数 
    myMath::Rational f2(7,8);
    
    //测试有理数加法运算 
    cout << f1 << " + " << f2 << " == " << (f1+f2) << "\n"; // 左移操作符<<已经被重载了 
    
    //测试有理数减法运算 
     cout << f1 << " - " << f2 << " == " << (f1-f2) << "\n"; //<< f1中由于f1属于Rational类型，将自动转到打印分数形式输出 
    
    //测试有理数乘法运算 
     cout << f1 << " * " << f2 << " == " << (f1*f2) << "\n";//<< "+"中由于<<后面参数是字符串，所以使用系统默认的打印 
    
    //测试有理数除法运算 
    cout << f1 << " / " << f2 << " == " << (f1/f2) << "\n";
    
    return 0;
}
