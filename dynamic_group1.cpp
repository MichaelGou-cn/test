#include <iostream>
#include <vector>

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    // 创建一个大小为 size 的 vector
    std::vector<int> arr(size);

    // 初始化数组
    for (int i = 0; i < size; ++i) {
        arr[i] = i * 2;
    }

    // 输出数组内容
    std::cout << "Array elements: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // 不需要手动释放内存，vector 会自动处理

    return 0;
}