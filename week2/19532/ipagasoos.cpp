#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int a,b,c,d,e,f;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

    for(int x=-999; x< 1000; x++){
        for(int y=-999; y<1000; y++){
            if(a*x + b*y == c && d*x + e*y == f){
                cout << x << " " << y;
                return 0;
            }
        }
    }
    return 0;
}