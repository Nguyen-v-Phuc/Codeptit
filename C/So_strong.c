#include <stdio.h>
#include <math.h>
#include <stdlib.h>
	
long long fact(int x)
{
	long long fact = 1;
	int i;
	for(i = 1; i <= x; i++) {
		fact *= i;
	}	
	return fact;
}	
int strong(long long n)
{
	if(n <= 0) return 0;
	
	long long original =  n;
	long long sum = 0;
	
	while(n > 0) {
		int digit = n % 10;
		sum += fact(digit);
		n = n / 10;
	}	
	return (sum == original);
}	
int main()
{
	long long a, b;
	scanf("%lld %lld", &a, &b);
	
	if(a < b) {
		int count = 0;
		long long i;
		for(i = a; i <= b; i++) {
			if(strong(i)) {
				printf("%lld ", i);
				count++;
			}	
		}	
	}
	else {
		int count = 0;
		long long i;
		for(i = b; i <= a; i++) {
			if(strong(i)) {
				printf("%lld", i);
				count++;
			}	
		}	
	}	
	return 0;	
}	
