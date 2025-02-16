#include <iostream>
#include <string>
using namespace std;
class Person
{
protected:
    string name;
public:
    Person(string theName);
    void introduce();
};

Person::Person(string theName)
{
    name=theName;
}
void Person::introduce()//introduce()函数实现 
{
    cout << "大家好，我是" << name << "。\n\n";
}

class Teacher:virtual public Person
{
protected:
    string classes;
public:
    Teacher(string theName,string theClass);
    void introduce();
    void teach();
};

Teacher::Teacher(string theName,string theClass):Person(theName)
{
    classes=theClass;
}
void Teacher::teach()
{
    cout<< name << " 教 "<< classes << "。\n\n";
}
void Teacher::introduce()
{
    cout<<"大家好，我是 "<< name <<" ，我教 "<< classes << "。\n\n";
}

class Student:virtual public Person
{
protected:
    string classes;
public:
    Student(string theName,string theClass);
    void attendClass();//要上课 
    void introduce();
};

Student::Student(string theName,string theClass): Person(theName)
{
    classes=theClass;
}
void Student::attendClass()
{
    cout<< name <<"加入"<< classes << "学习。\n\n";
}
void Student::introduce()
{
    cout<< "大家好，我是" << name << "，我在" << classes << "学习。\n\n";
}

class Assistant:public Student,public Teacher
{
public:
    Assistant(string theName,string classTeaching,string classAttending);
    
    void introduce();
};

Assistant::Assistant(string theName,string classTeaching,string classAttending):Student(theName,classAttending),Teacher(theName,classTeaching),Person(theName)
{
//多继承 助教既继承老师类，又继承学生类 
}
void Assistant::introduce()
{
    cout << "大家好，我是" << Student::name << ".我教" << Teacher::classes << "，";
    cout << "同时我在" << Student::classes << "学习。\n\n"; 
}


int main()
{
    Teacher teacher("小甲鱼","C++入门班");
    Student student("迷途羔羊","C++入门班");
    Assistant assistant("丁丁","C++入门班","C++进阶班");
    
    teacher.introduce();
    teacher.teach();
    
    student.introduce();
    student.attendClass();
    
    assistant.introduce();
    assistant.teach();
    assistant.attendClass();

    return 0;
}