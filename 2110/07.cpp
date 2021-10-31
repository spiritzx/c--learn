/*
 * @Descripttion: 猜数字
 * @Author: tom-z(spirit108@foxmail.com)
 * @Date: 2021-10-31 14:14:02
 * @LastEditors: tom-z(spirit108@foxmail.com)
 * @LastEditTime: 2021-10-31 14:34:48
 */
#include<iostream>
#include<ctime>
using namespace std;

int main () {
  // 添加随机数种子，利用当前时间作为种子
  srand((unsigned int)time(NULL));
  int num = rand() % 100 + 1;
  int val = 0;
  int total = 0;
  int max = 5;
  while (1) {
    cout << "请输入1 - 100 的整数：" << endl;
    cin >> val;
    total++;
    if (total >= max) {
      cout << "猜测次数超过" << max << "此,系统退出！" << endl; 
      break;
    }
    if (val == num) {
      cout << "输入正确" << endl;
      break;
    } else {
      if (val < num) {
        cout << "输入数字小于目标数字,你还有" << max - total << "此机会" << endl;
      } else {
        cout << "输入数字大于目标数字" << max - total << "此机会" << endl;
      }
    }
  }
  return 0;
}