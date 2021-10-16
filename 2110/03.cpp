/*
 * @Descripttion: 常量 define const
 * @Author: tom-z(spirit108@foxmail.com)
 * @Date: 2021-10-16 22:24:16
 * @LastEditors: tom-z(spirit108@foxmail.com)
 * @LastEditTime: 2021-10-16 22:57:49
 */
#include<iostream>
//定义了一个宏，将A，B进行连接
#define Append(A,B) A+B;
#define test2 2;
using namespace std;
int main(int argc, char *argv[]) {   
  const int test1 = 3;
  cout << test1 << endl;
  cout << Append(test1, test2);
  return 0;
}