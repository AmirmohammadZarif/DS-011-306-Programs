// Created by @amirmohammadzarif
// Thursday, Oct 20, 2022
#include <iostream>
using namespace std;
int fn(int x){
    if (x < 0) return fn(-x);
    else if(x < 10) return x;
    else return fn(x%10);
}

int main() {
//    cout << fn(12345);
    cout << 256 % 10;
    return 0;
}
