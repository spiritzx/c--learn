/*
 * @Descripttion: 对象
 * @Author: tom-z(spirit108@foxmail.com)
 * @Date: 2021-11-04 20:30:18
 * @LastEditors: tom-z(spirit108@foxmail.com)
 * @LastEditTime: 2021-11-04 20:56:27
 */
#include<iostream>
#include<string>

using namespace std;

class Parent {
  private: 
    string name;
  protected: 
    int rich;
  public: 
    void setNameFn (string str) {
      name = str;
    }
    string getNameFn () {
      return name;
    }
    void setRichFn (int r) {
      rich = r;
    }
    int getRichFn () {
      return rich;
    }
    void showFn () {
      cout << name << endl;
      cout << rich << endl;
    }
};

int main () {
  Parent p;
  p.setNameFn("张三");
  string res1 = p.getNameFn();
  p.setRichFn(30000);
  int res2 = p.getRichFn();
  p.showFn();
  cout << res1 << endl;
  cout << res2 << endl;
  return 0;
}