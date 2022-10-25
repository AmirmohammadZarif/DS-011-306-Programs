// Created by @amirmohammadzarif
// Thursday, Oct 20, 2022
#include <iostream>
using namespace std;
int F(int n){
    if(n <= 1) return n + 1;
    else return F(n - 1) + F(n - 2);
}

int main() {
    cout << F(6);
//    for(int i = 0; i < 10; i++){
//        cout << F(i)  << endl;
//    }
    return 0;
}
