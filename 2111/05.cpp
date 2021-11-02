/*
 * @Descripttion: 结构体排序
 * @Author: tom-z(spirit108@foxmail.com)
 * @Date: 2021-11-02 20:17:25
 * @LastEditors: tom-z(spirit108@foxmail.com)
 * @LastEditTime: 2021-11-02 21:12:08
 */
#include<iostream>
#include<string>

using namespace std;

struct Hero {
  string name;
  int age;
  string sex;
};

void sortFn (Hero h[], int len) {
  for (int i = 0; i < len - 1; i++) {
    for (int j = i + 1; j < len; j++) {
      if (h[i].age > h[j].age) {
        Hero temp = h[i];
        h[i] = h[j];
        h[j] = temp; 
      }
    }
  }
};

void showFn (Hero h[], int len) {
  for (int i = 0; i < len; i++) {
    cout << h[i].name << endl;
  }
}

int main () {
  Hero h[5] = {
    {"赵云", 20, "男"},
    {"黄忠", 30, "男"},
    {"关羽", 22, "男"},
    {"张飞", 21, "男"},
    {"刘备", 23, "男"}
  };
  int len = sizeof(h) / sizeof (h[0]);
  cout << len << endl;
  sortFn(h, len);
  showFn(h, len);
  return 0;
}
