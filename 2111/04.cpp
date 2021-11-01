/*
 * @Descripttion: 结构体与函数
 * @Author: tom-z(spirit108@foxmail.com)
 * @Date: 2021-11-02 07:41:27
 * @LastEditors: tom-z(spirit108@foxmail.com)
 * @LastEditTime: 2021-11-02 07:51:05
 */
#include<iostream>
#include<string>

using namespace std;

struct Teacher {
  string name;
  int age;
};

void showTeacherFn (Teacher t) {
  t.age = 30;
  cout << t.name << "的年龄为：" << t.age << endl;
}

void showTeacherPointFn (Teacher *t) {
  t->age = 30;
  cout << t->name << "的年龄为：" << t->age << endl;
}

int main () {
  Teacher t = {"张三", 25};
  showTeacherFn(t);
  cout << t.age << endl;
  showTeacherPointFn(&t);
  cout << t.age << endl;
  return 0;
}