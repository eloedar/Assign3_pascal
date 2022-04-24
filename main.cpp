#include "pascal.h"
#include <iostream>
using namespace std;

int main(){
    for (int i = 0; i < 20; ++i) {
        for (int j = 0; j <= i; ++j) {
            cout << pascal(i,j) << " ";
        }
        cout << endl;
    }
    cout << pascal(0,0);
}