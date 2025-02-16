#include <iostream>
int main()
{   
    enum weekdays{monday,tuesday,wednesday,thursday,friday};
    weekdays today;
    today =monday;
    std::cout << today << "\n";
    switch (today)
    {
    case monday:
        std::cout << "hello545";
        break;
        
    default:
        std::cout << "Goodbye";
        break;
    }
    return 0;
}