#include <cstdio>
using namespace std;

int fibonacci(int n){
	int preResults[n];
	preResults[0] = 0;
	preResults[1] = 1;
	for(int i = 2; i <= n; i++){
		preResults[i] = preResults[i - 1] + preResults[i - 2];
	}
	return preResults[n];
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d \n", fibonacci(n));
}