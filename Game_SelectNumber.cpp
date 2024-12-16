#include <iostream>
#include "windows.h"

using namespace std;

int RandNumber(int a, int b){
    int c;
    c = b - a;
    return rand() % c + a;
}

int Play(int number, int a, int b){
    int cnt = 0, x = MAXINT;
    cout << "Теперь пытайтесь отгадать число в диапозоне от " << a << " до " << b << ":" << endl;
    while (x != number){
        cin >> x;
        cnt++;
        if (number < x) cout << "Число, которое я загадал, меньше " << x << endl;
        if (number > x) cout << "Число, которое я загадал, больше " << x << endl;
    }
    return cnt;
}

int main()
{
    
}