#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main(void)
{

int N, a, b, x, y;
N = -1;
while (N != 0){
    scanf("%d", &N);
    if (N>0){
        scanf("%d %d", &x, &y);
        while (N--){
            scanf("%d %d", &a, &b);
            if (a > x && b > y){
                cout << "NE\n";
            } else if (a > x && b < y){
                cout << "SE\n";
            } else if (a < x && b < y){
                cout << "SO\n";
            } else if (a < x && b > y){
                cout << "NO\n";
            } else {
                cout << "divisa\n";
            }
        }
    }
}
    return 0;
}
