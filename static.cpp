#include <iostream>
#include <string>
using namespace std; 

class Pet
{
private:
    static int count;
protected:
    string name;
public:
    Pet(string theName);
    ~Pet();
    void sleep();
    virtual void play()=0;
    void eat();
    static int getCount();
};

Pet::Pet(string theName)
{
    name=theName;
    count++;
    cout << "一只宠物出生了，名字叫做：" << name << "\n"; 
}

Pet::~Pet()
{
    count--;
    cout << "\n" << name << "挂掉444了\n";
}

int Pet::getCount()
{
    return count;
}
void Pet::sleep()
{
    cout << name << "正在睡大觉！\n";
}
// void Pet::play()
// {
//     cout << name << "正在玩儿！\n";
// }
void Pet::eat()
{
    cout << name << "正在吃东西！\n";
}
class Dog:public Pet
{
public:
    Dog(string theName);
    void play();
};
Dog::Dog(string theName): Pet(theName)
{
     //cout << "this:" << this << "\n";
}
void Dog::play()
{
    //Pet::play();
    cout << name << "正在追赶那只该死的猫！\n";
}

class Cat:public Pet
{
public:
    Cat(string theName);
    void play();
};

Cat::Cat(string theName): Pet(theName)
{

}
void Cat::play()
{
    cout << name << "玩毛绒球！\n";
}
int Pet::count = 0;
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

    // Dog dog("Tom");
    // Cat cat("Jerry");
    // dog.play();
    // cat.play();
    //cout << "dog:" << &dog << "\n"; 
    //cout << "\n已经诞生了" << Pet::getCount()  << "只宠物！\n\n";

   
    //Dog dog_2("Tom_2");
    //Cat cat_2("Jerry_2");
    
    //cout << "\n现在呢，已经诞生了" << Pet::getCount() << "只宠物！";
   

   //cout << "\n现在还剩下" << Pet::getCount() << "只宠物！";
    
    
}