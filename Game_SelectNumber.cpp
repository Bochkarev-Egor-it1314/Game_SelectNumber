#include <iostream>
#include "windows.h"

using namespace std;

int RandNumber(int a, int b){
    int c;
    c = b - a;
    return rand() % c + a;
}

int main()
{
    
}