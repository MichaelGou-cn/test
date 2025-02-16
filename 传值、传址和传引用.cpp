#include<iostream>

void changeAge(int* age,int newAge); 
int main()
{
    int age = 24;//定义一个age,占一处地址 
    std::cout << "My age is " << age <<"\n";
    
    changeAge(&age,age + 1);
    
    std::cout << "Now my age is " << age << "\n";
    
    return 0;
}

void changeAge(int* age,int newAge)//再定义一个age,占另一处地址 
{
    *age = newAge;
    std::cout << "In this, my age is " << *age << "\n"; 
}
