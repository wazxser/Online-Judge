#include <stdio.h>  
#include <limits.h>  
    
int main(void){  
    long long input;  
    int N, i;  
    long long max, tmp;  
    
    while (scanf ("%d", &N) != EOF){  
        max = LLONG_MIN;  
        tmp = 0;  
        for (i=0; i<N; ++i){  
            scanf ("%lld", &input);  
            if (tmp > 0)  
                tmp = tmp + input;  
            else 
                tmp = input;  
            if (tmp > max)  
                max = tmp;  
        }  
        printf ("%lld\n", max);  
    }  
    
    return 0;  
}  