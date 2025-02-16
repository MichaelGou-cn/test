#include <iostream>
#include <string>

using namespace std;
class Myclass
{
private:
    int *prt;
    int xx;
public:
    Myclass(int *p,int x);
    Myclass(const Myclass &rhs);
    Myclass& operator=(const Myclass &rhs);
    ~Myclass();
    void print();
};

Myclass::Myclass(int *p,int x)
{
    cout << "进入主构造器\n"; 
    prt = p;
    xx=x;
    cout << "离开主构造器\n";
}
Myclass::Myclass(const Myclass &rhs)
{
    cout << "进入副本构造器\n"; 
    *this = rhs; //等号赋值重载 
    cout << "离开副本构造器\n";
}
Myclass::~Myclass()
{
    cout << "进入析构器\n";
    delete prt;
    cout << "离开析构器\n"; 
}
Myclass& Myclass::operator=(const Myclass &rhs)
{
    cout << "进入赋值语句重载\n";
    if(this !=&rhs)
    {
        delete prt;
        prt=new int;
        *prt=*rhs.prt;
        xx=rhs.xx;
        //cout << "复制指针！\n";
    }
    else
    {
        cout << "赋值号两边为同个对象，不做处理！\n";//obj1 = obj2时 
    }
    return *this;//返回第一个MyClass对象 
}
void Myclass::print()//打印*ptr的值 
{
    cout << prt << endl;
    cout<<xx<<endl;
}
int main()
{
    Myclass obj1(new int(1),11);//创建对象obj1 
    Myclass obj2(new int(2),22);//创建对象obj2
    obj2 = obj1;//obj1通过等号重载给obj2
    obj1.print();//打印对象obj1中指针指向的地址的储存值 
    obj2.print();//打印对象obj2中指针指向的地址的储存值 
    
    cout << "---------------------------------------------\n"; 
    
    Myclass obj3(new int(3),33);//创建对象obj3
    Myclass obj4 = obj3;//副本构造器 
    obj3.print();//打印对象obj3中指针指向的地址的储存值 
    obj4.print();//打印对象obj4中指针指向的地址的储存值 
    
    cout << "---------------------------------------------\n"; 
    
    Myclass obj5(new int(5),44);//创建对象obj5
    obj5 = obj5;
    obj5.print();//打印对象obj5中指针指向的地址的储存值 

    
    return 0;
}
