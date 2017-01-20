#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main () {

    int H, U, D, F;
    H = 1;
    int days;
    float dist, dd;

    while (H != 0){
        days = 1;
        dist = 0;

        scanf("%d %d %d %d", &H, &U, &D, &F);
        dd = U;
        if (H == 0){
            break;
        }
        while (dist <= H && dist>=0){

            dist += dd;
            if (dist > H) break;
            dd = dd - U*(F/100.0);
            //printf ("%f", dd);
            if (dd < 0) dd = 0;
            dist = dist - D;
            if (dist < 0) break;
            days++;
        }
        if (H != 0){
            if (dist < 0){
                printf ("failure on day %d\n", days);
            } else {
                printf ("success on day %d\n", days);
            }
        }
    }



}
