#include <iostream>
#include <string>
using namespace std;
class Lovers
{
private:
    std::string name;
    friend class Others; 
public:
    Lovers(std::string theName);
    ~Lovers();

    void kiss(Lovers *lover);
    void ask(Lovers *lover, std::string something);
};

class Boyfriend:public Lovers
{
public:
    Boyfriend(std::string theName);
};
class Girlfriend:public Lovers//girlfriend子类，继承Lovers基类 
{
public:
    Girlfriend(std::string theName);
};
class Others//Others类 ,并没继承Lovers基类 
{
public:
    Others(std::string theName);
    void kiss(Lovers *lover);
    
protected:
    std::string name;
     
};
Lovers::Lovers(std::string theName)
{
    name=theName;
}

Lovers::~Lovers()
{
}
void Lovers::kiss(Lovers *lover)//Lovers *lover表示定义Lovers类的一个对象*lover 
{
    cout << name << "亲亲我们家的" << lover->name << endl;
} 
void Lovers::ask(Lovers *lover,string something)
{
    cout << "宝贝儿" << lover->name << "帮我" << something << endl;
}
Boyfriend::Boyfriend(string theName):Lovers(theName)
{
}
Girlfriend::Girlfriend(string theName):Lovers(theName)
{
}
Others::Others(string theName)
{
    name=theName;
}
void Others::kiss(Lovers *lover)
{
    cout << name << "亲一下" << lover->name << endl;
}
int main()
{
    Boyfriend boyfriend("dfafd");
    Girlfriend girlfriend("B妞");

    Others others("路人甲");
    boyfriend.ask(&girlfriend,"chi");

    others.kiss(&boyfriend);
    return 0;
}