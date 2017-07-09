#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#define MAX 1001

using namespace std;

//最长上升子序列，nlogn算法，求序列的个数
//lmns的代码
//dp维护在遍历数组中，当前位置最长上升序列的元素（元素不一定相同，但个数一定相同）
//最后dp访问过的长度就是最长上升子序列的长度
//dp数组内的元素肯定是已经排好序的，对dp二分遍历，查找比当前元素大的第一个数，如果没有，则加入
//dp的下一个元素，如果有，则用当前元素替换它
//算法复杂度：遍历数组*二分查找dp是nlogn的

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int dp[10009];
int num[1005];
int n;

//longest increasing sequence
//nlogn
int main()
{
    while(~scanf("%d", &n)){
        for (int i = 0; i < n; i++){
            scanf("%d", num+i);
        }
        int len = 0;
        //dp[0] = 0;
        for (int i = 0; i < n; i++){
            int low = 0, high = len-1;
            while(low <= high){
                int mid = (low + high)/2;
                if(dp[mid] < num[i])
                    low = mid+1;
                else
                    high = mid-1;
            }

            if(low >= len) len++;

            dp[low] = num[i];
        }
        printf("%d\n", len);
    }
    return 0;
}