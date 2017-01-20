#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main () {

    float x, y;
    //freopen ("myfile.txt","w",stdout);
    //freopen("input.txt","r",stdin);

    scanf ("%f %f", &x, &y);
    while (static_cast<int>(x) || static_cast<int>(y)){
       int r = static_cast<int>(ceil(x*y/2));
       int xx = static_cast<int>(x);
       int yy = static_cast<int>(y);
       if ( xx == 1 || yy == 1){
            r = xx*yy;
        }
       else if (xx == 0 || yy == 0){
           r = 0;
       }
       else if (xx == 2){
            if (yy%2 == 0 && ((yy/2)%2) == 0)
                r = yy;
            else
                r = static_cast<int>(ceil(((y+1)/2.0))*2.0);
       }
       else if (yy == 2){
            if (xx%2 == 0 && ((xx/2)%2) == 0)
               r = xx;
            else
                r = static_cast<int>(ceil(((x+1)/2.0))*2.0);
       }

       printf ("%d knights may be placed on a %d row %d column board.\n", r, xx, yy);

       scanf ("%f %f", &x, &y);
    }
    //fclose (stdout);
}


