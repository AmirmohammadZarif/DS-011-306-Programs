// Created by @amirmohammadzarif
// Thursday, Oct 20, 2022
#include <iostream>
using namespace std;
int F(int m, int n){
    cout << m << ' ' << n << endl;
    if(m==1 || n == 0 || m == n)
    {
        cout << "=== 1 " << endl;
        return 1;
    }
    else{
        return F(m - 1, n) + F(m - 1, n - 1);
    }
}

int main() {
    cout << F(5 , 2);

    return 0;
}
