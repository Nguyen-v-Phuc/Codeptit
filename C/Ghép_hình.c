#include <stdio.h>
#include <math.h>

int check(int w1, int h1, int w2, int h2, int w3, int h3)
{
	int area = w1*h1 + w2*h2 + w3*h3;
	int side = (int)sqrt(area);
	if(side*side != area) return 0;
	if(h1 == side && h2 == side && h3 == side && h1+h2+h3 == side) return 1;
	if(w1 == side) {
		int rem = side - h1;
		if(h2 == rem && h3 == rem && w2 + w3 == side) {
			return 1;
		}	
	}	
	if(w2 == side) {
		int rem = side - h2;
		if(h1 == rem && h3 == rem && w1+w3 == side) {
			return 1;
		}	
	}	
	if(w3 == side) {
		int rem = side - h3;
		if(h1 == rem && h2 == rem && w1+w2 == side) {
			return 1;
		}	
	}	
	return 0;
}	
int main()
{
	int a[3][2];
	int i;
	for(i = 0; i < 3; i++) {
		scanf("%d %d", &a[i][0], &a[i][1]);
	}	
	int m;
	for(m = 0; m < 8; m++) {
		int w1 = a[0][0], h1 = a[0][1];
		int w2 = a[1][0], h2 = a[1][1];
		int w3 = a[2][0], h3 = a[2][1];
		if(m & 1) {int t = w1; w1 = h1; h1 = t;}
		if(m & 2) {int t = w2; w2 = h2; h2 = t;}
		if(m & 4) {int t = w3; w3 = h3; h3 = t;}
		if(check(w1,h1,w2,h2,w3,h3)) {
			printf("YES");
			return 0;
		}	
	}	
	printf("NO");
	return 0;
}	
