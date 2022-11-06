// Created by @amirmohammadzarif
// Thursday, Oct 20, 2022
#include <iostream>

using namespace std;
int C(int k, int n){
    if(k == n || k == 0){
        return 1;
    }else{

        return C(k, n - 1 ) + C(k - 1, n - 1);
    }
}

int main() {
    cout << C(3, 8) ;
    return 0;
}
