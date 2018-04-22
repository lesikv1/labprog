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
    Type v1x, v1y, v2x, v2y, re[4];
  public:
    Type sum (Type v1x, Type v1y, Type v2x, Type v2y) {
      this->v1x = v1x;
      this->v1y = v1y;
      this->v2x = v2x;
      this->v2x = v2x;
      re[0] = v1x + v2x;
      re[1] = v1y + v2y;
      cout << "vector summ = {" << re[0] << ", " << re[1] << "}" << endl;
    }
    Type scalar () {
      re[2] = this->v1x * this->v2x + this->v1y * this->v2y;
      cout << "vector scalar = {" << re[2] << "}" << endl;
    }
    Type addPi () {
      const float pi = 3.14;
      re[3] = pi * this->v1x;
      re[4] = pi * this->v1y;
      cout << "add const to vector = {" << re[3] << ", " << re[4] << "}" << endl;
    }
};


int main () {
  Vectora<double> obj;
  double v1x, v1y, v2x, v2y;
  cout << "v1x => ";
  cin >> v1x;

  cout << "v1y => ";
  cin >> v1y;

  cout << "v2x => ";
  cin >> v2x;

  cout << "v2y => ";
  cin >> v2y;

  obj.sum(v1x, v1y, v2x, v2y);
  obj.scalar();
  obj.addPi();
}