/*
 * @Descripttion: 
 * @Author: tom-z(spirit108@foxmail.com)
 * @Date: 2021-11-03 21:27:52
 * @LastEditors: tom-z(spirit108@foxmail.com)
 * @LastEditTime: 2021-11-03 21:37:43
 */
#include <iostream>

using namespace std;

int main () {
  int a = 10;
  int &b = a;
  const int &c = a;
  b = 20;
  a = 30;
  int * const d = &a;
  *d = 40;
  cout << a << endl;
  cout << b << endl;
  cout << c << endl;
  return 0;
}