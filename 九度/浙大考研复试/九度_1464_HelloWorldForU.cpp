#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
 
using namespace std;
 
string str;
int N, n1, n2;
 
int main(){
    while(cin >> str){
        N = str.length();
        if((N+2) % 3 == 0){
            n2 = (N + 2) / 3;
        }
        else{
            n2 = (N + 2) / 3 + 1;
        }
 
        if((N+2-n2) % 2 == 0){
            n1 = (N+2-n2) / 2;
        }
        else{
            n2++;
            n1 = (N+2-n2) / 2;
        }
 
        for(int i = 0; i < n1; i++){
            cout << str[i];
            if(i == n1-1){
                for(int k = 1; k < n2-1; k++)
                    cout << str[i+k];
            }
            else{
                for(int j = 2; j < n2; j++){
                    cout << " ";
                }
            }
            cout << str[N-1-i] << endl;
        }
    }
}