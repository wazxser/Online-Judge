#include <iostream>
#include <cstdio>
#include <memory.h>
using namespace std;

int t, a, n, num1, num2;
int c[100010];
char cmd[20];

int lowbit(int x){
	return x & (-x);
}

void add(int i, int a){
	for (; i <= n; i += lowbit(i))
		c[i] += a;
}

//求和是从这个数往前加，1到这个数本身位置的和
int sum(int a){
	int res = 0;
	for (; a > 0; a -= lowbit(a))
		res += c[a];
	return res;
}

int main() {
	scanf("%d", &t);
	int cas = 1;
	while (t--) {
		memset(c, 0, sizeof(c));
		scanf("%d", &n);
		//注意一定从1开始
		for (int i = 1; i <= n; i++) {
			scanf("%d", &a);
			add(i, a);
		}
		printf("Case %d:\n", cas++);
		while (scanf("%s", cmd)) {
			if (cmd[0] == 'E')
				break;
			scanf("%d%d", &num1, &num2);
			if (cmd[0] == 'Q') {
				printf("%d\n", sum(num2) - sum(num1 - 1));
			}
			else if (cmd[0] == 'A') {
				add(num1, num2);
			}
			else if (cmd[0] == 'S') {
				add(num1, -num2);
			}
		}
	}
	return 0;
}