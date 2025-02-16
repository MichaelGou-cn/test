#include <iostream>
#include <string>

using namespace std;

int main()
{
    unsigned int count=0;
    cout<< "请输入数组的元素个数：\n";
    cin>>count;
    int a[5];
    int *x =new int[count];
        for(int i=0;i<count;i++)
    {
        x[i] = i;
    } 
    for(int i=0;i<count;i++)
    {
        cout << "x[" <<i << "]的值是：" << x[i] << "\n";
     } 
    delete  x;
    return 0;
}