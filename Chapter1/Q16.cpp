// Created by @amirmohammadzarif
// Thursday, Oct 20, 2022
#include <iostream>
using namespace std;
int fun(int b){
    int f;
    if (b <= 0)
        f = 2;
    else
        f = fun(b - 3) + fun(b - 2);
    return f;
}

int main() {
    cout << fun(8);
    return 0;
}
