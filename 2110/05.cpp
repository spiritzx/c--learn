/*
 * @Descripttion: 字符类型char 与 字符串类型 char str[] 或 string
 * @Author: tom-z(spirit108@foxmail.com)
 * @Date: 2021-10-30 16:46:07
 * @LastEditors: tom-z(spirit108@foxmail.com)
 * @LastEditTime: 2021-10-30 17:49:54
 */
#include<iostream>
#include<string>
using namespace std;

int main () {
  // 字符类型 char 不能用双引号，不能时字符串，只能单个字符
  char a = 'a';
  // c 语言的字符串用双引号
  char b1[] = "abc测试字符串12";
  char b2[] = "abc测试字符串12abc测试字符串12";
  // c++ 的字符串,需要引用头文件 string,以及双引号
  string c1 = "a";
  string c2 = "abc测试字符串12";
  string c3 = "abc测试字符串12abc测试字符串12abc测试字符串12abc测试字符串12abc测试字符串12abc测试字符串12abc测试字符串12abc测试字符串12abc测试字符串12abc测试字符串12abc测试字符串12abc测试字符串12abc测试字符串12abc测试字符串12";

  cout << "char 类型" << a << " 占用空间 " << sizeof(a) << endl;
  cout << "char 类型" << a << " ASCII码 " << (int)a << endl;
  cout << "char[] 类型" << b1 << " 占用空间 " << sizeof(b1) << endl;
  cout << "char[] 类型" << b2 << " 占用空间 " << sizeof(b2) << endl;
  cout << "string 类型" << c1 << " 占用空间 " << sizeof(c1) << endl;
  cout << "string 类型" << c2 << " 占用空间 " << sizeof(c2) << endl;
  cout << "string 类型" << c3 << " 占用空间 " << sizeof(c3) << endl;
  return 0;
}
