/*
 * @Descripttion: 函数
 * @Author: tom-z(spirit108@foxmail.com)
 * @Date: 2021-11-04 07:17:17
 * @LastEditors: tom-z(spirit108@foxmail.com)
 * @LastEditTime: 2021-11-04 07:25:38
 */
#include <iostream>

using namespace std;

// 默认参数
void fn1 (int a = 10, int b = 20) {
  cout << a + b << endl;
}

// 占位参数
void fn2 (int a = 10, int b = 20, int = 30) {
  cout << a + b << endl;
}

// 函数重载
void fn3 (int a, int b) {
  cout << a + b << endl;
}

void fn3 (int a) {
  cout << a + 20 << endl;
}

int main () {
  fn1();
  fn2(20);
  fn3(20);
  fn3(20, 10);
  return 0;
}