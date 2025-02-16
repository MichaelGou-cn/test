#include <iostream>
using namespace std;
class Complex
{
public:
    Complex()
    {
        real = 0;
        imag = 0;
    }
    Complex(double r,double i)
    {
        real = r;
        imag = i;
    }
    void print()
    {
    cout << "(" << real << ", " << imag << "i)\n";
    } 
private:
    double real;
    double imag;
    friend Complex operator+(Complex &c,Complex &d)
    {
        return Complex(c.real + d.real,c.imag + d.imag);
    }
};
int main()
{       
    Complex c1(3,4),c2(5,-10),c3;//定义三个对象c1、c2、c3及其重载函数参数值 
    c3 = c1+c2;
    
    cout << "c1 = ";
    c1.print();
    cout << "c2 = ";
    c2.print();
    cout << "c1 + c2 = ";
    c3.print();

    return 0;
}