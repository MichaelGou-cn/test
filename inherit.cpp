#include <iostream>
#include <string>

class Animal//定义Animal类，基类 
{
public:
    std::string mouth;
    //std::string name;
    
    Animal(std::string theName);//类Animal的构造器 
    void eat();
    
    void sleep();
    void drool();//流鼻涕
protected:
    std::string name;
};
Animal::Animal(std::string theName)//类Animal构造器函数 
{
    name = theName;
}

class Pig:public Animal//类Pig继承于类Animal，子类 
{
public:
    Pig(std::string theName);//类Pig的构造器
    void climb();
    void eat(int eatCount);//重载 
};
Pig::Pig(std::string theName):Animal(theName)//类Pig的构造函数继承于类Animal的构造函数 
{
    
} 

class Turtle:public Animal//类Turtle继承于类Animal
{
public:
    Turtle(std::string theName);//类Pig的构造器
    void swim();
};
Turtle::Turtle(std::string theName):Animal(theName)//类Turtle的构造函数继承于类Animal的构造函数参数 
{
    
}

void Animal::eat()//Animal类中的方法函数
{
    std::cout << "I'm eatting!" << std::endl;
}

void Animal::sleep()
{
    std::cout << "I'm sleeping!Don't disturb me!" << std::endl;
}
void Animal::drool()
{
    std::cout << "我是公的，看到母的会流口水 流口水。。。" << std::endl;
}

void Pig::climb()//类Pig中的climb方法函数
{
    std::cout << "我是一只漂亮的小母猪猪，我会上树，邱。。。" << std::endl;
}
void Pig::eat(int eatCount)
{
    std::cout << "我吃了" << eatCount << "碗馄饨！\n";
}

void Turtle::swim()//类Turtle中的swim方法函数
{
    std::cout << "我是一只小甲鱼，当母猪抓我，我就游到海里，哈。。。" << std::endl;
}

int main()
{
    Pig pig("小猪猪");//定义一个对象pig,由于其继承于类Animal，
    //且构造函数也继承于类Animal的构造函数，所以参数"小猪猪"将赋值给类pig中的名字属性name 
    Turtle turtle("小甲鱼");//定义一个对象turtle
    
    //pig.name = "小甲鱼"; //由于name被保护起来，所以赋值将报错 
//  std::cout << "这只猪的名字是：" << pig.name << std::endl;        
//    std::cout << "每只乌龟都有个伟大的名字：" << turtle.name << std::endl; 

    // 
    
    turtle.eat();
    
    pig.eat(15);//重载函数 
    pig.climb();
    turtle.swim();

    return 0;
}
