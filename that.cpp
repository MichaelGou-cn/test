#include "header.h"
unsigned short thatNum = 8;//定义全局变量 
bool printMe = true;//定义全局变量 

unsigned long returnFactorial(unsigned short num)
{
    unsigned long sum = 1;
    
    for(int i = 1;i<=num;i++)
    {
        sum *= i;
    }
    if(printMe)
    {
        return sum;
    }
    else
    {
        return 0;
    }
}
