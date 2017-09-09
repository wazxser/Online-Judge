#include <stdio.h>  
    
long long root (long long x, long long y, long long k){  
    long long ans = 1;  
    
    while (y != 0){  
        if ((y & 1) == 1)  
            ans = (ans * x) % k;  
        x = (x * x) % k;  
        y = y >> 1;  
    }  
    return ans;  
}  
    
int main(void){  
    long long x, y, k;  
    long long ans;  
    
    while (scanf ("%lld %lld %lld", &x, &y, &k) != EOF){  
        ans = root (x, y, k-1);  
        if (ans == 0)  
            ans = k-1;  
        printf ("%lld\n", ans);  
    }  
    
    return 0;  
}  