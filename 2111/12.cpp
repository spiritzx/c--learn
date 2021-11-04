/*
 * @Descripttion: 构造函数与析构函数
 * @Author: tom-z(spirit108@foxmail.com)
 * @Date: 2021-11-04 21:44:20
 * @LastEditors: tom-z(spirit108@foxmail.com)
 * @LastEditTime: 2021-11-04 21:55:31
 */
#include<iostream>
using namespace std;

class Parent {
  public:
    int a;
    // 默认构造函数
    Parent () {
      cout << "生命周期开始" << endl;
    }
    // 有参构造函数
    Parent (int n) {
      a = n;
    }
    // 深拷贝构造函数
    Parent (const Parent & P) {
      a = P.a;
    }
    // 析构函数
    ~Parent () {
      cout << "生命周期结束" << endl;
    }
};

int main () {
  Parent P;
  Parent P1(10);
  Parent P2(P1);
  cout << P1.a << endl;
  cout << P2.a << endl;
  return 0;
}
