/*
 * @Descripttion: new 开辟内存空间
 * @Author: tom-z(spirit108@foxmail.com)
 * @Date: 2021-11-02 22:09:48
 * @LastEditors: tom-z(spirit108@foxmail.com)
 * @LastEditTime: 2021-11-02 22:14:08
 */
#include<iostream>
using namespace std;

int * fn () {
  // 利用 new 开辟堆区，并且用指针指代堆区的数据 
  int * p = new int(10);
  return p;
}

int main () {
  int *p = fn();
  cout << *p << endl;
  return 0;
}