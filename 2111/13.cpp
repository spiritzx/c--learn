/*
 * @Descripttion: 深拷贝
 * @Author: tom-z(spirit108@foxmail.com)
 * @Date: 2021-11-05 08:01:08
 * @LastEditors: tom-z(spirit108@foxmail.com)
 * @LastEditTime: 2021-11-06 09:29:20
 */
#include<iostream>

using namespace std;

class Person {
  public:
    int age;
    int * height;
    Person (int a, int b) {
      age = a;
      height = new int(b);
    }
    Person (const Person & p) {
      age = p.age;
      // height = p.height; // 只赋值堆区地址，浅拷贝
      height = new int(*p.height + 50); // 将值取出重新在堆区开辟内存，深拷贝
    }
    ~Person () {
      delete height;
      height = NULL;
       cout << "结束" << endl;
    }
};

void fn () {
  Person p(28, 170);
  Person p1(p);
  cout << p.age << endl;
  cout << *p.height << endl;
  cout << p1.age << endl;
  cout << *p1.height << endl;
}

int main () {
  fn();
  return 0;
}