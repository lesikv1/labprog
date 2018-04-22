/*
* Author: Onufriev Alexey
* laba 4.1
* Created on 22 April 2018 y., 22:59
*/

#include <fstream>
#include <iostream>
#include <string>
#include <locale>

using namespace std;

class Vectora {
  private:
    int v1x, v1y, v2x, v2y, re[4];
  public:
    void sum (int v1x, int v1y, int  v2x, int v2y) {
      this->v1x = v1x;
      this->v1y = v1y;
      this->v2x = v2x;
      this->v2x = v2x;
      re[0] = v1x + v2x;
      re[1] = v1y + v2y;
      cout << "vector summ = {" << re[0] << ", " << re[1] << "}" << endl;
    }
  void scalar () {
    re[2] = this->v1x * this->v2x + this->v1y * this->v2y;
    cout << "vector scalar = {" << re[2] << "}" << endl;
  }
  void addPi () {
    const float pi = 3.14;
    re[3] = pi * this->v1x;
    re[4] = pi * this->v1y;
    cout << "add const to vector = {" << re[3] << ", " << re[4] << "}" << endl;
  }
};

int main () {
  Vectora start;
  int v1x, v1y, v2x, v2y;
  cout << "v1x => ";
  cin >> v1x;

  cout << "v1y => ";
  cin >> v1y;

  cout << "v2x => ";
  cin >> v2x;

  cout << "v2y => ";
  cin >> v2y;

  start.sum(v1x, v1y, v2x, v2y);
  start.scalar();
  start.addPi();
}