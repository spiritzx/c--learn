/*
 * @Descripttion: 结构体指针
 * @Author: tom-z(spirit108@foxmail.com)
 * @Date: 2021-11-01 21:55:37
 * @LastEditors: tom-z(spirit108@foxmail.com)
 * @LastEditTime: 2021-11-01 22:01:41
 */
#include<iostream>
#include<string>
using namespace std;

struct Teacher {
  string name;
  int age;
};

int main () {
  // 定义结构体
  Teacher t = {"张三", 29};
  // 指针绑定结构体地址
  Teacher * p = &t;
  // 通过指针访问结构体内的值
  cout << "姓名：" << p->name << endl;
  cout << "年纪：" << p->age << endl;
  return 0;
}