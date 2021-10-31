/*
 * @Descripttion: 一维数组
 * @Author: tom-z(spirit108@foxmail.com)
 * @Date: 2021-10-31 14:53:24
 * @LastEditors: tom-z(spirit108@foxmail.com)
 * @LastEditTime: 2021-10-31 15:20:36
 */
#include<iostream>
using namespace std;

int main () {
  int arr[10];
  arr[0] = 1;
  arr[2] = 1;

  int arr1[5] = {1, 2, 3, 4, 5};
  int arr2[] = {1, 2, 3, 4};
  string arr3[] = {"0001", "0002", "0003"};
  cout << arr3[0] << endl;
  cout << sizeof(arr3) << endl;
  cout << arr3[2] << endl;

  int totalSize = sizeof(arr1);
  int firstSize = sizeof(arr1[0]);
  int length = totalSize / firstSize;
  cout << "arr1 的数组长度为：" << length << endl;
  return 0;
}