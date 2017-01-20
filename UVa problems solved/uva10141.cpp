#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>
#include <iostream>
#include <string>
#include <cstdio>
#include <limits>
using namespace std;

int main(){
    int R, N;
    float minCost;
    float curCost;
    int cou;
    string req;
    string company;
    string bestComp;
    int bestRat;
    int cou2 = 0;

    while (true){


        minCost = numeric_limits<float>::max();
        bestRat = 0;
        cou2 ++;
        scanf("%d %d\n", &R, &N);

        if (R == 0 && N == 0) break;

        for (int i = 0; i < R; i++){
            getline (cin,req);
        }


        for (int j = 0; j < N; j++){

            getline(cin, company);
            scanf("%f %d\n", &curCost, &cou);

            for (int k = 0; k < cou; k++){
                getline(cin, req);
            }

            if (cou > bestRat) {
                bestComp = company;
                bestRat = cou;
                minCost = curCost;
            }

            if (cou == bestRat && curCost < minCost){
                bestComp = company;
                curCost = bestRat;
            }


        }
        if (cou2 > 1) cout << endl;
        cout << "RFP #"<< cou2 << endl;
        cout << bestComp << endl;


    }
    return 0;

}
