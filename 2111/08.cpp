/*
 * @Descripttion: new
 * @Author: tom-z(spirit108@foxmail.com)
 * @Date: 2021-11-03 20:35:50
 * @LastEditors: tom-z(spirit108@foxmail.com)
 * @LastEditTime: 2021-11-03 20:43:56
 */
#include <iostream>
#include <string>
using namespace std;

int main () {
  int * a = new int(10);
  float * b = new float(10.2);
  string * s = new string("abc");
  int * c = new int[2];
  c[0] = 1;
  c[1] = 2;

  cout << *a << endl;
  cout << *b << endl;
  cout << *s << endl;
  cout << c[0] << endl;
  cout << c[1] << endl;

  delete a;
  delete b;
  delete[] c;
  delete s;
  cout << *a << endl;
  return 0;
}
