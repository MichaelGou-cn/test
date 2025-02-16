#include <iostream>
#include <string>
using namespace std;
class Company
{
public:
    Company(string theName);
    virtual void printInfo();//需要打印的一些信息
    
protected:
    string name; 
};
Company::Company(string theName)//基类构造函数实现
{
    name = theName; 
} 
void Company::printInfo()
{
    cout << "这家公司的名字叫：" << name << "。\n";
}

class TechCompany:public Company
{
public:
    TechCompany(string theName,string product);
    void printInfo();
private:
    string product;
};
TechCompany::TechCompany(string theName,string product):Company(theName)//子类构造函数实现
{
    this->product = product;
}
void TechCompany::printInfo()
{
    cout << name << "公司大量生产了 " << product << "这款产品!\n";
}
int main()
{
    Company *company =new Company("APPLE");
    company->printInfo();

    delete company;
    company=NULL;

    company = new TechCompany("APPLE","IPHONE");//指针指向新定义的子类TechCompany 
    company -> printInfo();//调用子类的打印方法
    
    delete company;
    company = NULL; 

    return 0;
}