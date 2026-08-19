#include <stdio.h>
int i, j;

int main()
{
    int dong, cot;
    scanf("%d %d", &dong, &cot);
    int a[dong][cot];
    
    for(i = 0; i < dong; i++) {
        for(j = 0; j < cot; j++) {
            scanf("%d", &a[dong][cot]);
        }
    }
    
    for(i = 0; i < cot; i++) {
    	for(j = 0; j < dong; j++) {
		    printf("%d ", a[cot][dong]);
		}
    }
    return 0;
}
