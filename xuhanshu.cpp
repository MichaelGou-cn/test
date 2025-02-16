//int *pointer = new int;//声明一个整型指针，并在程序运行时将它指向分配的内存空间 
//delect *pointer;//删除指针，释放内存 
#include <iostream>
#include <string>

using namespace std;

class Pet//定义Pet类 
{
public:
    Pet(string theName);//构造器,对count进行写操作 
    
    void eat();
    void sleep();
    virtual void play();//定义虚方法play,将在编译时为其分配内存 
    
protected://不允许没有继承Pet类的其它类调用 
    string name;
};
Pet::Pet(string theName)
{
    name = theName;
}
void Pet::eat()
{
    cout << name << "正在吃东西！\n";
}
void Pet::sleep()
{
    cout << name << "正在睡大觉！\n";
}
void Pet::play()
{
    cout << name << "正在玩儿！\n";
}

class Cat:public Pet//定义Cat类继承于Pet类 
{
public:
    Cat(string theName);//构造器
    
    void climb();
    void play();
};
Cat::Cat(string theName):Pet(theName)//Cat的构造函数继承于Pet类中的Pet(theName)函数
{
}
void Cat::climb()
{
    cout << name << "正在爬树！\n";
}
void Cat::play()
{
    cout << name << "玩毛绒球！\n";
}

class Dog:public Pet//定义Dog类继承于Pet类 
{
public:
    Dog(string theName);//构造器
    
    void bark();
    void play();
};
Dog::Dog(string theName):Pet(theName)//Dog的构造函数继承于Pet类中的Pet(theName)函数
{
}
void Dog::bark()
{
    cout << name << "汪汪汪！\n";
}
void Dog::play()
{
    Pet::play();
    cout << name << "正在追赶那只该死的猫！\n";
}
int main()
{
    Pet *cat = new Cat("加菲");
    Pet *dog = new Dog("欧迪");
    
    cat -> sleep();
    cat -> eat();
    cat -> play();
    
    dog -> sleep();
    dog -> eat();
    dog -> play();
    
    delete cat;
    delete dog;
    
    return 0;
 }  
