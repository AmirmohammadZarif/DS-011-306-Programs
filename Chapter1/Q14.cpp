// Created by @amirmohammadzarif
// Thursday, Oct 20, 2022
#include <iostream>
using namespace std;
int f(int n){
    if(n == 0) return 1;
    else  return f((int)n / 2) + 1;
}

int main() {
    for(int i = 0; i < 100; i++){
        cout << i << " "  << f(i) << endl;
    }
    return 0;
}
