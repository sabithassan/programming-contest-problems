#include <string>
#include <cstdio>
using namespace std;

int main(void)
{

int N, a, b;
int c, d;
scanf("%d", &N);

while (N--){
    scanf("%d %d", &a, &b);

    if ((a-2)%3 > 0){
        c = ((a-2)/3)+1;
    } else {
        c = (a-2)/3;
    }

    if ((b-2)%3 > 0){
        d = ((b-2)/3)+1;
    } else {
        d = (b-2)/3;
    }

    printf("%d\n", c*d);
}
return 0;
}
