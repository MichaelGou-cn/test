#include <iostream>

class Parent {
public:
    virtual void show() {
        std::cout << "Parent Show" << std::endl;
    }
};

class Child : public Parent {
public:
    void show()  {
        std::cout << "Child Show" << std::endl;
    }
};

int main() {
    Parent* ptr = new Child();
    ptr->show(); // 输出 Child Show（多态）
    delete ptr;
    return 0;
}