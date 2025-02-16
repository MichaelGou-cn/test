#include <iostream>
#include <string>
#define FULL_GAS 85
class Car
{
public:
    std::string color;
    std::string engine;
    unsigned int gas_tank;
    unsigned int wheel;

    Car(void);
    ~Car();

    void setColor(std::string col);
    void setEngine(std::string eng);
    void setWheel(unsigned int whe); 
    void filltank(int liter);
    int running(void);
    void warning(void);

};

Car::Car(void)
{
    color="White";
    engine="V8";
    wheel=4;
    gas_tank=FULL_GAS;
}
Car::~Car()
{
}
void Car::setColor(std::string col)
{
    color=col;
}
void Car::setEngine(std::string eng)
{
    engine=eng;
}
void Car::setWheel(unsigned int whe)
{
    wheel = whe;
} 
void Car::filltank(int liter)
{
    gas_tank+=liter;
}
int Car::running(void)
{
    char i;

    std::cout << "我正在以120的时速往前移动。。。\n";
    gas_tank--;
    std::cout << "当前还剩 " << 100*gas_tank/FULL_GAS << "%" << "油量！\n";

    if(gas_tank<10)
    {
        warning();
        std::cout << "请问是否需要加满油再行驶？(Y/N)\n";
        std::cin>>i;
        if(i=='Y'||i=='y')
        {
            gas_tank=FULL_GAS;
        }
        if(gas_tank == 0)
        {
            std::cout << "抛瞄中。。。。。";
            return 0;
        }
    }
    return gas_tank;
    
}
void Car::warning(void)
{
    std::cout << "WARNING!!" << "\n还剩 " <<  100*gas_tank/FULL_GAS << "%" << "油量！\n";
} 
int main()
{
    Car mycar;
    mycar.gas_tank=1;
    while (mycar.running())
    {
        /* code */
    }
    
    return 0;
}