#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main () {

    int a , b, c, d, e;
    int count;
    scanf ("%d %d %d %d %d", &a, &b, &c, &d, &e);
    while (a){
        int maxx;
        int minn;
        int i[] = {a, b, c};
        vector<int> v (i, i+3);
        sort (v.begin(), v.end());

        if (d < e){
            maxx = e;
            minn = d;
        }
        else {
            maxx = d;
            minn = e;
        }

        int index = -1;
        bool check = false;

        for (int j = 0; j < 3; j++){
            if (minn < v.at(j)){
                index = j;
                break;
            }
        }

        if (index == -1){
            int k = 1;
            for (int s = k; s<= 52; s++){
                if (k != a && k!= b && k!= c && k!=d && k!=e){
                    break;
                }
                k++;
            }
            if (k>= 52) k = -1;
            printf ("%d\n", k);
        } else {

            for (int k = index+1; k<3; k++){
                if (maxx < v.at(k)){
                    check = true;
                    break;
                }
            }
            if (check) {
                printf ("-1\n");
            } else {
                int k;
                if (index == 0 || index == 1)
                    k = v.at(2) + 1;
                else
                    k = v.at(index-1) +1;

                for (int s = k; s<= 52; s++){
                    if (k != a && k!= b && k!= c && k!=d && k!=e){
                        break;
                    }
                    k++;
                }
                if (k > 52) k = -1;
                printf ("%d\n",k );
            }
        }
        scanf ("%d %d %d %d %d", &a, &b, &c, &d, &e);
    }
}


