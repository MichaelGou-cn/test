#include <iostream>

union mima
{
    unsigned long birthday;
    unsigned short ssn;
    const char *pet;
};

int main()
{
    mima mima_1;
    mima_1.birthday=1992959;
    std::cout << mima_1.birthday << "\n";

    mima_1.pet = "Chaozai";//为字符串指针内的数据赋值 
    std::cout << mima_1.pet << "\n";
    std::cout << mima_1.birthday << "\n";
    return 0;
}
