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
    int N, B, H, W;
    int PpP, freeBeds;
    int minCost;
    int found, never;


    while (scanf ("%d %d %d %d", &N, &B, &H, &W) != EOF){
        minCost = 0x7FFFFFFF;
        found = 0;

        for (int i = 0; i < H; i++){
            scanf ("%d", &PpP);

            for (int j = 0; j < W; j++) {
                never = 0;
                char line[512];
                cin >> line;
                int curBeds = atoi(line);

                if (curBeds < N)
                    never = 1;
                if (N*PpP < minCost && !never){

                    minCost = N*PpP;
                    found = 1;
                }
            }
        }


        if (found && minCost <= B) {
            printf("%d\n", minCost);
        } else {
            printf ("stay home\n");
        }
    }
}
