#include <conio>
#include <iostream>
#include <iomanip>


using namespace std;
template <typename T>
T filter(T *mass, int size, bool flag) {
    while(!flag) {
        flag = true;

        for(int i = 0; i < size-1; i++)
            if(mass[i] < mass[i+1])
            {
                swap(mass[i],mass[i + 1]);

                flag = false;
            }
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");

    const int size = 4;

    bool flag = false;

    double mass[size];

    cout<<"\nВведите "<< size <<" элементов массива:\n";

    for(int i = 0; i < size; i++)
    {
        cout<<"A [ "<< i <<" ]= ";
        cin>>mass[i];
    }

    cout<<"\n\nВведенный массив:\n\n";

    for(int i = 0; i < size; i++)
        cout<<setw(4)<<mass[i];

    filter(mass, size, flag);

    cout<<"\n\nОтсортированный массив:\n\n";

    for(int i = 0; i < size; i++)
        cout<<setw(4)<<mass[i]<<" ";

    _getch();
    return 0;
}