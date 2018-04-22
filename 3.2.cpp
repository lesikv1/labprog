/*
* Author: Onufriev Alexey
* varik 5
* laba 3.2
* Created on 22 April 2018 y., 21:41
*/

#include <fstream>
#include <iostream>
#include <string>
#include <locale>

using namespace std;

class Car {
  private:
    char mark[20];
		char model[20];
    int numberDAI;
    int numberPlace;
    char startRoad[20];
    char finishRoad[20];
  public:
    void setFile () {
      std::ofstream fout("db2.txt", ios::out|ios::app);
      // INPUT MARK CAR
      cout << "select mark car" << endl;
      cin >> mark;
      fout << mark << " ";
      // INPUT MODEL CAR
      cout << "select model car" << endl;
      cin >> model;
      fout << model << " ";
      // INPUT NUMBER DAI
      cout << "select number dai" << endl;
      cin >> numberDAI;
      fout << numberDAI << " ";
      // INPUT NUMBER PLACE
      cout << "write number place" << endl;
      cin >> numberPlace;
      fout << numberPlace << " ";
      // INPUT ROAD
      cout << "write start road" << endl;
      cin >> startRoad;
      fout << startRoad << "-";
      cout << "write finish road" << endl;
      cin >> finishRoad;
      fout << finishRoad << endl;
      fout.close();
    }
    void getFile () {
      char buff[50];
      ifstream fin ("db2.txt");
      while(!fin.eof()) {
        fin.getline(buff, 500);
        cout << buff << endl;
      }
      fin.close();
    }
    void searchFile () {
      string s;
      ifstream file("db2.txt");
        int i = 0;
        char world[10];
        cin >> world;
        while(getline(file, s)){
          for(int q = 0; s[q] != ' '; q++) {
            if(world[q] == s[q]) {
              if(world[0] == s[0] && world[1] == s[1] && world[2] == s[2]) {
                cout << s << endl;
                break;
              }
            }
          }
        }
      file.close();
    }
};

int main () {
  Car newCar;
  int a;
  cout << "(1) select add to database" << endl;
  cout << "(2) select read from database" << endl;
  cout << "(3) search to database" << endl;
  cin >> a;
  switch(a) {
    case 1:
      newCar.setFile();
      break;
    case 2:
      newCar.getFile();
      break;
    case 3:
      newCar.searchFile();
      break;
    default:
      cout << "wrong";
  }
}