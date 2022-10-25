// Created by @amirmohammadzarif
// Thursday, Oct 20, 2022
#include <iostream>
using namespace std;
int fib(int n){

    if(n <= 1) return 1;
    else return fib(n - 1) + fib(n - 2);
}

int main() {
    cout << fib(5);
    return 0;
}
