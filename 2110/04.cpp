/*
 * @Descripttion: 查看数据类型占用内存
 * @Author: tom-z(spirit108@foxmail.com)
 * @Date: 2021-10-30 12:45:23
 * @LastEditors: tom-z(spirit108@foxmail.com)
 * @LastEditTime: 2021-10-30 16:59:34
 */
#include<iostream>
using namespace std;

int main () {
  short a = 1250;
  int b = 32678;
  long c = 32679;
  long long d = 34569788;
  char e = 'b';
  float f = 3.14f;
  double g = 3.1415926;

  cout << a << ":short a 占用空间" <<  sizeof(a) << endl;
  cout << b << ":int b 占用空间" << sizeof(b) <<endl;
  cout << c << ":long c 占用空间" << sizeof(c) <<endl;
  cout << d << ":long long d 占用空间" << sizeof(d) << endl;
  cout << e << ":char e 占用空间" << sizeof(e) << endl;
  cout << f << ":float f 占用空间" << sizeof(f) << endl;
  cout << g << ":double g 占用空间" << sizeof(g) << endl;
}