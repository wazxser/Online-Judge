#include <iostream>
#include <cstdio>
#include <vector>
 
using namespace std;
 
int main(){
    int a1, b1, c1, a2, b2, c2;
    for(int i = 0; i <= 532; i++){
        for(int j = 0; j <= 532; j++){
            a1 = i / 100;
            b1 = (i % 100) / 10;
            c1 = i % 10;
 
            a2 = j / 100;
            b2 = (j % 100) / 10;
            c2 = j % 10;
 
            if( (i+j) == 532 && b1 == a2 && b2 == c2 && c1 == c2 && a1 != 0 && a2 != 0){
                printf("%d %d %d\n", a1, b1, c1);
//                cout << i << " " << j << endl;
            }
        }
    }
 
    return 0;
}