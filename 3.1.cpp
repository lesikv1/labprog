
/*
* Author: Onufriev Alexey
* varik 5
* laba 3.1
* Created on 21 April 2018 y., 14:41
*/

#include <fstream>
#include <iostream>
#include <string>
#include <locale>

struct car {
		char mark[20];
		char model[20];
    int numberDAI;
    int numberPlace;
    char startRoad[20];
    char finishRoad[20];
	};
struct car avt[10];
 
using namespace std;

void functionWrite() {
  FILE *file;

	struct car avt[10];
  file = fopen("db.txt", "w");
  ofstream fout ("db.txt");

  // INPUT MARK CAR
  cout << "select mark car" << endl;
  cin >> avt[0].mark;
  fout << avt[0].mark << " ";
  // INPUT MODEL CAR
  cout << "select model car" << endl;
  cin >> avt[0].model;
  fout << avt[0].model << " ";
  // INPUT NUMBER DAI
  cout << "select number dai" << endl;
  cin >> avt[0].numberDAI;
  fout << avt[0].numberDAI << " ";
  // INPUT NUMBER PLACE
  cout << "write number place" << endl;
  cin >> avt[0].numberPlace;
  fout << avt[0].numberPlace << " ";
  // INPUT ROAD
  cout << "write start road" << endl;
  cin >> avt[0].startRoad;
  fout << avt[0].startRoad << "-";
  cout << "write finish road" << endl;
  cin >> avt[0].finishRoad;
  fout << avt[0].finishRoad << endl;

  fclose(file);
}

void functionRead() {
  FILE *file;
  struct    car avt[10];
  char buff[50];
  ifstream fin ("db.txt");
  while(!fin.eof()) {
    fin.getline(buff, 500);
    cout << buff << endl;
  }
  fin.close();
}

void functionAdd(int lengthUser) {
  struct car avt[10];
  std::ofstream fout("db.txt", ios::out|ios::app);

  int i;
  for(i=1; i<lengthUser; i++) {
    // INPUT MARK CAR
    cout << "select mark car" << endl;
    cin >> avt[i].mark;
    fout << avt[i].mark << " ";
    // INPUT MODEL CAR
    cout << "select model car" << endl;
    cin >> avt[i].model;
    fout << avt[i].model << " ";
    // INPUT NUMBER DAI
    cout << "select number dai" << endl;
    cin >> avt[i].numberDAI;
    fout << avt[i].numberDAI << " ";
    // INPUT NUMBER PLACE
    cout << "write number place" << endl;
    cin >> avt[i].numberPlace;
    fout << avt[i].numberPlace << " ";
    // INPUT ROAD
    cout << "write start road" << endl;
    cin >> avt[i].startRoad;
    fout << avt[i].startRoad << "-";
    cout << "write finish road" << endl;
    cin >> avt[i].finishRoad;
    fout << avt[i].finishRoad << endl;
  }
    fout.close();
}

void functionSearth() {
  string s;
  ifstream file("db.txt");
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

void binaryFile() {
  ifstream infile;
  infile.open("db.txt",ios::binary|ios::in);

  ofstream outfile;
  outfile.open("bin.dat",ios::binary|ios::out);

  int buffer[2];
  while(infile.read((char *)&buffer,sizeof(buffer))) {
      outfile.write((char *)&buffer,sizeof(buffer));
      cout << infile;
  }

  infile.close();
  outfile.close();
}

int main() {
  setlocale(LC_ALL,"rus");
  int a;
  cout << "(1) select write to database" << endl;
  cout << "(2) select read from database" << endl;
  cout << "(3) select add to database" << endl;
  cout << "(4) search to database" << endl;
  cout << "(5) read/write binary file" << endl;
  cin >> a;
  int lengthUser = 1;
  switch(a) {
    case 1:
      functionWrite();
      break;
    case 2:
      functionRead();
      break;
    case 3:
      lengthUser +=1;
      functionAdd(lengthUser);
      break;
    case 4:
      functionSearth();
      break;
    case 5:
      binaryFile();
      break;
    default:
      cout << "wrong";
  }
};

// for run code
// need install compilator g++
// and run next step
// $ g++ 3.1.cpp
// $ ./a.out
