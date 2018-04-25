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
    int v1x, v1y, v2x, v2y, re[6];
  public:

    void inputV () {
      try {
      int vv1x, vv1y, vv2x, vv2y;
        vv1x = 0;
        vv1y = 0;
        vv2x = 0;
        vv2y = 0;
        bool i;
        cout << "v1x => ";
        cin >> vv1x;
        if (!cin) {
          cin >> vv1x;
          cout << "v1x error" << endl;
          throw 1;
        }

        cout << "v1y => ";
        cin >> vv1y;
        if (!cin) {
          cin >> vv1y;
          cout << "v1y error" << endl;
          throw 1;
        }

        cout << "v2x => ";
        cin >> vv2x;
        if (!cin) {
          cin >> vv2x;
          cout << "v2x error" << endl;
          throw 1;
        }

        cout << "v2y => ";
        cin >> vv2y;
        if (!cin) {
          cin >> vv2y;
          cout << "v2y error" << endl;
          throw 1;
        }
        sum(vv1x, vv1y, vv2x, vv2y);
      } catch (...) {
        sum(3, 4, 6, 5);
      }
    }
    void sum (int v1x, int v1y, int  v2x, int v2y) {
      this->v1x = v1x;
      this->v1y = v1y;
      this->v2x = v2x;
      this->v2x = v2x;
      re[0] = v1x + v2x;
      re[1] = v1y + v2y;
      cout << "vector summ = {" << re[0] << ", " << re[1] << "}" << endl;
      scalar();
    }
  void scalar () {
    re[2] = this->v1x * this->v2x + this->v1y * this->v2y;
    cout << "vector scalar = {" << re[2] << "}" << endl;
    addPi();
  }
  void addPi () {
    const float pi = 3.14;
    re[3] = pi * this->v1x;
    re[4] = pi * this->v1y;
    cout << "add const to vector = {" << re[3] << ", " << re[4] << "}" << endl;
    re[5] = this->v1x * pi;
    re[6] = this->v1y * pi;
    cout << "add vector to const = {" << re[5] << ", " << re[6] << "}" << endl;
  }
};

int main () {
  Vectora start;
  start.inputV();
}