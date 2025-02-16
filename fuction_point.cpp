#include <iostream>
using namespace std;

// 声明函数 fun，返回两个整数中的较大值
int fun(int x, int y);

int main()
{
    int i, a = 0, b;  // 初始化 a 为 0
    int (*p)(int, int) = fun;  // 声明并初始化函数指针 p

    cout << "请输入十个数字：" << endl;

    for (i = 0; i < 10; i++)
    {
        cin >> b;
        a = p(a, b);  // 调用函数指针 p，更新 a 为当前最大值
    }

    cout << "最大的数字是：" << a << endl;

    return 0;
}

// 定义函数 fun，返回两个整数中的较大值
int fun(int x, int y)
{
    return (x > y) ? x : y;
}