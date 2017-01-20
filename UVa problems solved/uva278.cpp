#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main () {

    int n;
    char piece [2];
    float x, y;

    scanf("%d", &n);
    while (n){
        scanf ("%s %f %f", &piece, &x, &y);

        if (piece[0] == 'r'){
            printf ("%d\n", static_cast<int>(min(x,y)));

        } else if (piece[0] == 'k'){
            printf ("%d\n", static_cast<int>(x*y/2));

        } else if (piece[0] == 'Q'){
            printf ("%d\n", static_cast<int>(min(x,y)));
        } else {
            printf ("%d\n", static_cast<int>(ceil(x/2) * ceil(y/2)));
        }
        n--;
    }
}


