#include <iostream>
#include <cstdio>
#include <cstring>
#include <stack>
#define INF 510

using namespace std;

int n, a, b, k, bu, step;
char str[100010];
char str2[100010];
int top;

int main(){
    while(~scanf("%d", &n)){
        while(n--){
            scanf("%s", str);
            scanf("%d", &k);
            a = k;
            top = 0;
            str2[top++] = str[0];
            int len = strlen(str);
            for(int i = 0; i < str; i++){
                while(top > 0 && str[i] < str2[top-1] && a){
                    top--;
                    a--;
                }
                str2[top++] = str[i];
            }

            while(a){
                top--;
                a--;
            }

            str2[top] = '\0';
            printf("%s\n", str2);
			
			a = k;
            top = 0;
            str2[top++] = str[0];
            int len = strlen(str);
            for(int i = 0; i < str; i++){
                while(top > 0 && str[i] > str2[top-1] && a){
                    top--;
                    a--;
                }
                str2[top++] = str[i];
            }

            while(a){
                top--;
                a--;
            }

            str2[top] = '\0';
            printf("%s\n", str2);
        }
    }

    return 0;
}

//#include <stdio.h>
//#include <algorithm>
//#include <string.h>
//
//using namespace std;
//
//char str[100005];
//char st[100005];
//int top = 0;
//
//int main()
//{
//    int ca;
//    scanf("%d", &ca);
//    int num, num2;
//    while(ca--)
//    {
//        scanf("%s", str);
//        scanf("%d", &num);
//        num2 = num;
//        int len = strlen(str);
//        top = 0;
//        st[top++] = str[0];
//        for(int i = 1; i < len; i++)
//        {
//            while(num > 0 && top > 0 && str[i] > st[top-1])
//            {
//                top--;
//                num--;
//            }
//            st[top++] = str[i];
//        }
//        while(num)
//        {
//            top--;
//            num--;
//        }
//        st[top] = '\0';
//        printf("%s\n", st);
//
//        num = num2;
//        top = 0;
//        st[top++] = str[0];
//        for(int i = 1; i < len; i++)
//        {
//            while(num > 0 && top > 0 && str[i] < st[top-1])
//            {
//                top--;
//                num--;
//            }
//            st[top++] = str[i];
//        }
//        while(num)
//        {
//            top--;
//            num--;
//        }
//        st[top] = '\0';
//        printf("%s\n", st);
//    }
//
//}
