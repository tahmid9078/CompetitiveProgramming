#include <bits/stdc++.h>
using namespace std;

int calc(int n){
	int now=1;
	int dig=1;
	while(now % n !=0){
		now=(now*10+1)%n;
		dig++;
	}
	return dig;
}

int main() {
	int n;
	while(scanf("%d", &n)==1){
		printf("%d\n", calc(n));
	}
	return 0;
}