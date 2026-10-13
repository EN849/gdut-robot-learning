#include <iostream>
using namespace std;

// 1. 值传递：只拷贝副本，函数内修改不影响外部原始变量
void passByValue(int a)
{
    a = 100;
    cout << "【值传递函数内部】a = " << a << endl;
}

// 2. 引用传递：a是外部变量的别名，共用同一块内存，可以直接修改原值
void passByReference(int &a)
{
    a = 100;
    cout << "【引用传递函数内部】a = " << a << endl;
}

// 3. 指针传递：接收变量地址，通过解引用修改原值
void passByPointer(int *a)
{
    *a = 100;
    cout << "【指针传递函数内部】*a = " << *a << endl;
}

int main()
{
    cout << "===== 测试 值传递 =====" << endl;
    int num1 = 10;
    passByValue(num1);
    cout << "值传递调用后，外部num1 = " << num1 << endl << endl;

    cout << "===== 测试 引用传递 =====" << endl;
    int num2 = 10;
    passByReference(num2);
    cout << "引用传递调用后，外部num2 = " << num2 << endl << endl;

    cout << "===== 测试 指针传递 =====" << endl;
    int num3 = 10;
    passByPointer(&num3); // & 取变量内存地址
    cout << "指针传递调用后，外部num3 = " << num3 << endl;

    return 0;
}