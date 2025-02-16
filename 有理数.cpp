#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class Rational
{
private:
    
    int numerator; //分子
    int denominator; //分母
    void normalize();
    friend ostream &operator<<(ostream& os ,Rational f);
public:
    Rational(int num,int denum);
    ~Rational();

    Rational operator+(Rational rhs);
    Rational operator-(Rational rhs);
    Rational operator*(Rational rhs);
    Rational operator/(Rational rhs);
};

Rational::Rational(int num,int denum)
{
    numerator=num;
    denominator=denum;
    normalize();
}

Rational::~Rational()
{
}

void Rational::normalize()
{
    if (denominator<0)
    {
        numerator=-numerator;
        denominator=-denominator;

    }

    int a=abs(numerator);
    int b=abs(denominator);

    while(b>0)
    {
        int t = a % b;//取余 
        a = b;
        b = t;
    }
    numerator/=a;
    denominator/=a;

}

Rational Rational::operator+(Rational rhs)
{
    int a=numerator;
    int b=denominator;
    int c=rhs.numerator;
    int d=rhs.denominator;
    
    int e=a*b+c*d;
    int f=b*d;

    return Rational(e,f);
}

Rational Rational::operator-(Rational rhs)
{
    return(operator+(Rational(-rhs.numerator,rhs.denominator)));
}

Rational Rational::operator*(Rational rhs)
{
    int a=numerator;
    int b=denominator;
    int c=rhs.numerator;
    int d=rhs.denominator;
    
    int e=a*c;
    int f=b*d;

    return Rational(e,f);
}

Rational Rational::operator/(Rational rhs)
{
    return(operator*(Rational(rhs.denominator,rhs.numerator)));
}

ostream &operator<<(ostream &os ,Rational f)
{
    if(f.numerator%f.denominator==0)
    os<<f.numerator/f.denominator;
    else
    os<<f.numerator<<"/"<<f.denominator<<endl;
    return os;
}

int main()
{   
    cout<<"dasfa\n";
    Rational f1(2,16);//定义f1对象，且传入(2,16)参数 
    Rational f2(7,8);
    
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