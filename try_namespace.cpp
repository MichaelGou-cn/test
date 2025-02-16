namespace MyNamespace {
    class MyClass {
    public:
        int value;
        MyClass(int v) : value(v) {}
    };

    // 重载 + 操作符
    MyClass operator+(const MyClass& lhs, const MyClass& rhs) {
        return MyClass(lhs.value + rhs.value);
    }
}

int main() {
    // 方法 1：使用 using namespace


    // 方法 2：显式使用作用域解析符
    MyNamespace::MyClass a(3), b(4);
    MyNamespace::MyClass c = a + b;

    return 0;
}