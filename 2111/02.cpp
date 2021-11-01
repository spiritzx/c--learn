/*
 * @Descripttion: 结构体
 * @Author: tom-z(spirit108@foxmail.com)
 * @Date: 2021-11-01 21:23:58
 * @LastEditors: tom-z(spirit108@foxmail.com)
 * @LastEditTime: 2021-11-01 21:29:01
 */
#include<iostream>
#include<string>
using namespace std;

struct Student {
  string name;
  int age;
}s3;

int main () {
  Student s1;
  s1.name = "张三";
  s1.age = 24;
  cout << "s1的名字：" << s1.name << endl;
  cout << "s1的年纪：" << s1.age << endl;
  Student s2 = {"李四", 25};
  cout << "s2的名字：" << s2.name << endl;
  cout << "s2的年纪：" << s2.age << endl;
  s3.name = "王五";
  s3.age = 26;
  cout << "s3的名字：" << s3.name << endl;
  cout << "s3的年纪：" << s3.age << endl;
  return 0;
}