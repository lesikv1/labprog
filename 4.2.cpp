/*
* Author: Onufriev Alexey
* laba 4.2
* to template
* Created on 23 April 2018 y., 00:47
*/

#include <fstream>
#include <iostream>
#include <string>
#include <locale>

using namespace std;

template <class Type>
class Vectora {
  private:
    Type v1x, v1y, v2x, v2y, re[6];
  public:
    Type inputV () {
      try {
      double vv1x, vv1y, vv2x, vv2y;
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
    Type sum (Type v1x, Type v1y, Type v2x, Type v2y) {
      this->v1x = v1x;
      this->v1y = v1y;
      this->v2x = v2x;
      this->v2x = v2x;
      re[0] = v1x + v2x;
      re[1] = v1y + v2y;
      cout << "vector summ = {" << re[0] << ", " << re[1] << "}" << endl;
      scalar();
    }
    Type scalar () {
      re[2] = this->v1x * this->v2x + this->v1y * this->v2y;
      cout << "vector scalar = {" << re[2] << "}" << endl;
      addPi();
    }
    Type addPi () {
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
  Vectora<double> obj;

  obj.inputV();
}