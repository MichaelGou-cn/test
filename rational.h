#ifndef RATIONAL_H//如果没有定义rational.h

#define RATIONAL_H//定义rational.h 
 
#include <iostream> 
namespace myMath
{
class Rational//定义基类
{
public:
    Rational(int num,int denom); //构造器 num = 分子，denom = 分母 
    
    Rational operator+(Rational rhs);// rhs == right hand side(右手边参数) 
    Rational operator-(Rational rhs);
    Rational operator*(Rational rhs);
    Rational operator/(Rational rhs);
    
private:
    void normalize();//负责对分数的简化处理
    
    int numerator; //分子
    int denominator; //分母 
    
    friend std::ostream& operator<<(std::ostream& os,Rational f);//传递给它的是哪一个流，它返回的就是那个流的一个引用
}; 
void call_love_fishc();
}

#endif//如果已经定义rational.h,则结束 
