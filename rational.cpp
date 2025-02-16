#include <iostream>
#include <string>
#include <math.h> 
#include "Rational.h"//系统级别用单尖括号，自定义级别用双引号 

using namespace std;
namespace myMath{
Rational::Rational(int num,int denom)//构造函数实现 
{
    numerator = num;
    denominator = denom;
    
    normalize(); 
} 
//normalize()对分数进行简化操作包括：
//1.只允许分子为负数，如果分母为负数则把负数挪到分子部分，如1/-2==-1/2 
//2.利用欧几里德算法(辗转求余原理)将分数进行简化:2/10 => 1/5 

void Rational::normalize()
{
    //确保分母为正
    if( denominator < 0) 
    {
        numerator = -numerator;
        denominator = -denominator;
    }
    //欧几里德算法 
    int a = abs(numerator);
    int b = abs(denominator);
    
    //求出最大公约数
    while(b>0)
    {
        int t = a % b;//取余 
        a = b;
        b = t;
    }
     
     //分子、分母分别除以最大公约数得到最简化分数
     numerator /= a;
     denominator /= a; 
}
//a   c   a*d   c*b   a*d + c*d
//- + - = --- + --- = ----------
//b   d   b*d   b*d      b*d
Rational Rational::operator+(Rational rhs)//分数的加运算 
{
    int a = numerator;
    int b = denominator;
    int c = rhs.numerator;
    int d = rhs.denominator;
    
    int e = a*b + c*d;
    int f = b*d;
    
    return Rational(e,f);
}
//a   c   a   -c
//- - - = - + -- 
//b   d   b   d 
Rational Rational::operator-(Rational rhs)//分数的减运算 
{
    rhs.numerator = -rhs.numerator; //被减数分子取负数 
    return operator+(rhs);
}
//a   c   a*c
//- * - = --- 
//b   d   b*d 
Rational Rational::operator*(Rational rhs)//分数的乘运算
{
    int a = numerator;
    int b = denominator;
    int c = rhs.numerator;
    int d = rhs.denominator;
    
    int e = a*c;
    int f = b*d;
    
    return Rational(e,f);
}
//a   c   a   d
//- / - = - * - 
//b   d   b   c
Rational Rational::operator/(Rational rhs)//分数的除运算
{
    //rhs的分子分母互换 
    int t = rhs.numerator;
    rhs.numerator = rhs.denominator;
    rhs.denominator = t;
    
    return operator*(rhs);
}

ostream& operator<<(ostream& os,Rational f)//并不属于Rational类，是一个独立的函数 
{
    if(f.numerator % f.denominator == 0)
    os << f.numerator / f.denominator;
    else 
    os << f.numerator << "/" << f.denominator;//打印分数 
    return os; 
}

void call_love_fishc()//输出爱心 
{
    int i,j;
    int n = 10;
    
    for(i=1-(n>>1);i<=n;i++)//>>右移,右移一位除以2，左移一位乘以2 
    {
        cout << "Hello World!"; 
            if(i>=0)
        {
            for(j=0;j<i;j++)
            cout << "  ";
            for(j=1;j<=2*(n-i)+1;j++)
            cout << " *";
            cout << endl; 
        }
        else
        {
            for(j=i;j<0;j++)
            cout << "  ";
            for(j=1;j<=n+2*i+1;j++)
            cout << " *";
            for(j=1;j<=-1-2*i;j++)
            cout << "  ";
            for(j=1;j<=n+2*i+1;j++)
            cout << " *";
            cout << endl;
        }
    }
    
}
}