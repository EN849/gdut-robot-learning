#include <iostream>
#include <string>
using namespace std;

// 函数重载：三个
void print(int x) {
    cout << "int    : " << x << endl;
}

void print(double x) {
    cout << "double : " << x << endl;
}

void print(const string& s) {
    cout << "string : " << s << endl;
}

// 默认参数
void greet(string name, string greeting = "你好") {
    cout << greeting << "，" << name << "！" << endl;
}

int main() {
    // 调用三个重载版本
    print(42);                    // 匹配 int
    print(3.14);                  // 匹配 double
    print(string("hello"));       // 匹配 string

    // 调用带默认参数的函数
    greet("小明");                 // greeting 用默认值 "你好"
    greet("Tom", "Hello");        // 显式传入 greeting
    greet("李华", "早上好");        // 显式传入 greeting

    return 0;
}