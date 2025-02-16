#include <iostream>  //
#include <math.h> 

using namespace std;//名字空间 

int main()
{
      int width = 4;
      char str[20];
      
      cout<<"请输入一段文本：\n";
      cin.width(5);//一次提取4个字符，因为最后有一个回车 

      while(cin >> str)
      {
              cout.width(width++);//设置不同的右对齐输出宽度 
              cout<<str<<endl;
              cin.width(5);
       } 
      return 0;
}
