#include <stdio.h>

int main()
{
	int T;
	scanf("%d", &T);
	
	while(T--) {
		int n;
		scanf("%d", &n);
		int a[100];
		int i;
		for(i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}	
		int max = a[0];
		for(i = 1; i < n; i++) {
			if(a[i] > max) max = a[i];
		}	
		printf("%d\n", max);
		for(i = 0; i < n; i++) {
			if(a[i] == max) {
				printf("%d ", i);
			}	
		}	
		printf("\n");
	}	
	return 0;
}	
