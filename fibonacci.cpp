#include <cstdio>
using namespace std;

int fibonacci(int n){
	int preResults[n];
	for(int i = 0; i <= 5; i++){
		preResults[i] = i;
	}
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