/*
 * @Descripttion: 指针的定义于使用
 * @Author: tom-z(spirit108@foxmail.com)
 * @Date: 2021-11-01 20:07:43
 * @LastEditors: tom-z(spirit108@foxmail.com)
 * @LastEditTime: 2021-11-01 20:25:04
 */
#include<iostream>
using namespace std;

int main () {
  int a = 10;
  int * p;
  p = &a;
  cout << "a的地址为：" << &a << endl;
  cout << "指针 p 的地址为: " << p << endl;
  cout << "指针 p 的值: " << *p << endl;
  *p = 1000;
  cout << "指针 a 的值: " << a << endl;
  cout << "指针 p 的值: " << *p << endl;

  cout << "指针所占内存值: " << sizeof(int *) << endl;
  cout << "指针所占内存值: " << sizeof(*p) << endl;
}
