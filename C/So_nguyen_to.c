#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool is_prime(int n)
{
	int i;
	if(n <= 1) return false;
	for(i = 2; i <= sqrt(n); i++) {
		if(n % i == 0) return false;
	}	
	return true;
}	
int main()
{
	int T;
	scanf("%d", &T);
	
	while(T--) {
		int n;
		scanf("%d", &n);
		
		if(is_prime(n)) printf("YES\n");
		else printf("NO\n");
	}	
	return 0;
}	
