#include <iostream>
#include <fstream>

int main()
{
    std::ifstream in;
    std::ofstream out;

    in.open("text1.txt");
    out.open("text2.txt");
    
    char x;
    while(in>>x)
    {
        out<<x;
    }
    out<<std::endl;
    
    in.close();
    out.close();

    return 0;
}