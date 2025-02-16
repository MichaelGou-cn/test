#include <iostream>
#include <string>

using namespace std;
class Company
{
public:
    Company(string theName,string product);
    virtual void printInfo();
    
protected:
    string name;
    string product;
};
Company::Company(string theName,string product)
{
    name = theName;
    this->product = product; 
} 
void Company::printInfo()
{
    cout << "这个公司的名字叫：" << name << "正在生产" << product << "\n";
}

class TechCompany:public Company
{
public:
    TechCompany(string theName,string product);
    virtual void printInfo();
};
TechCompany::TechCompany(string theName,string product):Company(theName,product)
{
}
void TechCompany::printInfo()
{
    cout << name << "公司大量生产了 " << product << "这款产品!\n";
}

int main()
{
    Company* company=new TechCompany("APPLE","IPHOHE");
    TechCompany *techCompany=dynamic_cast<TechCompany*>(company);
    if (techCompany!=NULL){cout<<"成功\n";}
    else{cout<<"悲催\n";}
    techCompany->printInfo();
    delete techCompany;
    techCompany=NULL;
    company=NULL;
    return 0;
}