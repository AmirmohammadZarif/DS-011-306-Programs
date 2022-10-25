// Created by @amirmohammadzarif
// Thursday, Oct 20, 2022
#include <iostream>
using namespace std;
int fun(int a){
   if(a <= 1)
       return (a * a - 5);
   else return (3 * fun(a - 2) + 4);

}

int main() {
    cout << fun(8);
    return 0;
}
