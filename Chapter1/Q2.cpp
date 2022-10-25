// Created by @amirmohammadzarif
// Thursday, Oct 20, 2022
#include <iostream>
using namespace std;
int rec(int n){
    if(n == 1) return 1;
    else return 2 * rec(n - 1);
}

int main() {
    cout << rec(4);
    return 0;
}
