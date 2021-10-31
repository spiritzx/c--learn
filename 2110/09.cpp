/*
 * @Descripttion: 函数
 * @Author: tom-z(spirit108@foxmail.com)
 * @Date: 2021-10-31 15:38:46
 * @LastEditors: tom-z(spirit108@foxmail.com)
 * @LastEditTime: 2021-10-31 15:43:37
 */
#include<iostream>
using namespace std;

int addFn (int num1, int num2) {
  int res = 0;
  res = num1 + num2;
  return res;
}

int main () {
  int res = 0;
  int num1 = 0;
  int num2 = 0;
  cout << "输入第一个整数" << endl;
  cin >> num1;
  cout << "输入第二个整数" << endl;
  cin >> num2;
  res = addFn(num1, num2);
  cout << res << endl;
  return res;
}