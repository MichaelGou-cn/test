#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
int main()
{
    std::vector<std::string> names;
    names.push_back("亦我飞也");//往里面添加东西 
    names.push_back("helloworld");
    names.push_back("adfadfa");
    std::sort(names.begin(),names.end());
    std::vector<std::string>::iterator iter=names.begin();
    
    while (iter!=names.end())
    {
        std::cout<<*iter<<std::endl;
        iter++;
    }
    
    return 0;
}