#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>
#include <iostream>
#include <string>
#include <cstdio>
#include <sstream>
#include <string>

using namespace std;

bool isDigit(char a) {
    return (a >= '2' && a <= '9');
}

 int main () {

    int n;
    int X, Y, top, forget;

    char deck[52][3];
    char num[128];

    scanf ("%d", &n);
    for (int i =0; i<n; i++){
        Y = 0;
        top = 24;

        for (int j = 0; j < 52; j++){
            cin >> deck[51 - j];
        }


        for (int k = 0; k<3; k++) {

            if (isDigit(deck[top][0])){

              X = deck[top][0]  - '0';

            } else {
              X = 10;
            }
            Y += X;
            top = top + 1 + (10-X);
        }

        if (Y < 51-top ){
            cout << deck[51-Y] << endl ;
        } else {
            cout << "Case " << i+1 << ": " << deck[25-(Y-(51-top))] << endl;
        }

    }

}
