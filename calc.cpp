#include <iostream>
int cale(int x);
int cale(int x,int y);
int cale(int x,int y,int z);
int main()
{
    int x,y,z;
    int reslut;
    int numbers;
    std::cin>>numbers;

    switch (numbers)
    {
    case 1:
        std::cin>>x;
        reslut=cale(x);
        break;
    case 2:
        std::cin>>x>>y;
        reslut=cale(x,y);
        break;
    case 3:
        std::cin>>x>>y>>z;
        reslut=cale(x,y,z);
        break;
    default:
        break;
    }
    std::cout<<reslut<<std::endl;
    return 0;
}

int cale(int x)
{
    return x*x;
}

int cale(int x,int y)
{
    return x*y;
}
int cale(int x,int y,int z)
{
    return x+y+z;
}
