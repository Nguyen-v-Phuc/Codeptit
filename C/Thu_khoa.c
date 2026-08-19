#include <stdio.h>
#include <string.h>
#include <math.h>

struct Students {
	int number;
	char name[100];
	char date[100];
	double d1, d2, d3;
	double sum; 
};

int main()
{
	int n;
	scanf("%d", &n);
	double max = 0;
	struct Students ds[n + 1];
int i;
	for(i = 1; i <= n; i++) {
	    scanf("\n");
	    ds[i].number = i;
	    
	    fgets(ds[i].name, sizeof(ds[i].name), stdin);
	    ds[i].name[strcspn(ds[i].name, "\n")] = 0;
	    
	    fgets(ds[i].date, sizeof(ds[i].date), stdin);
	    ds[i].date[strcspn(ds[i].date, "\n")] = 0;
	    
	    scanf("%lf%lf%lf", &ds[i].d1, &ds[i].d2, &ds[i].d3);
	    ds[i].sum = ds[i].d1 + ds[i].d2 + ds[i].d3;
	    
	    if(ds[i].sum > max) {
	        max = ds[i].sum;
	    }
	}
	
	for(i = 1; i <= n; i++) {
		if(ds[i].sum == max) {
			printf("%d %s %s %.1f\n", ds[i].number, ds[i].name, ds[i].date, ds[i].sum);
		}	
	}	

	return 0;
}
