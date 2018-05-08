#include <iostream>

using namespace std;

int main() {
  int length;
  cout << "Enter the length path ";
  cin >> length;

  int arr[length];
  arr[0] = length;

  for (int i = 1; i <= length; i++) {
    cin >> arr[i];
  }
  cout << "======================================================" << endl;
  for (int i = 0; i <= length; i++) {
    if (i == 0) {
        cout << "length dots = " << arr[i] << endl;
    } else {
        cout << arr[i] << ", ";
    }
  }
  cout << endl;
  cout << "======================================================" << endl;
  int filterArr[length];
  int startDots, FinishDots;
  int f = 1;
  int ff = 0;
  for (int i = 2; i <= length; i++) {
      if(arr[f] < arr[i]) {
        filterArr[ff] = arr[f];
        ff++;
        f++;
        if (i == 2 || i == 3) {
          startDots = i;
        }
      }
      if(arr[f] > arr[i]) {
        f++;
      }

  }
  cout << ff << endl;

  for(int i = 1; i < ff; i++) {
    cout << filterArr[i] << ", ";
  }
  ff += 2;
  cout << arr[ff] << ", ";
  ff += 1;
  cout << arr[ff] << ", ";
  ff += 1;
  cout << arr[ff] << endl;
  FinishDots = ff;
  cout << "======================================================" << endl;
  cout << "start path = " << startDots << endl;
  cout << "finish path = " << FinishDots << endl;
}
