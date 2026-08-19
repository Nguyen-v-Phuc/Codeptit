#include <stdio.h>
#include <math.h>

int perfect_square(long long x)
{
	if(x < 0) return 0;
	long long s = (long long)(sqrt(x) + 0.5);
	return (s * s == x);
}
int fib(long long n)
{
	if(n < 0) return 0;
	return perfect_square(5 * n * n + 4);
}	
int main()
{
	long long n;
	scanf("%lld", &n);
	
	if(fib(n)) printf("1");
	else printf("0");
	return 0;
}	
