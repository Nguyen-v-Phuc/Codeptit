#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	int T;
	scanf("%d", &T);
	getchar();
	
	while(T--) {
		char str[1010];
		if(fgets(str, sizeof(str), stdin) == NULL) break;
		int len = strlen(str);
		if(len > 0 && str[len-1] == '\n') {
		    str[len-1] = '\0';
		    len--;
		}	
		if(len == 0) {
			T++;
			continue;
		}	
		
		int valid = 1;
		if(len < 21 || len > 1000) valid = 0;
		if(valid && str[0] == '0') valid = 0;
		int i;
		for(i = 0; i < len && valid; i++) {
			if(!isdigit(str[i])) {
				valid = 0;
			}	
		}
		if(!valid) {
			printf("INVALID\n");
			continue;
		}	
		int count[10] = {0};
		for(i = 0; i < len; i++) {
			count[str[i] - '0'] = 1;
		}	
		int all = 1;
		for(i = 0; i < 10; i++) {
			if(count[i] == 0) {
				all = 0;
				break;
			}	
		}
		if(all) printf("YES\n");
		else printf("NO\n");	
	}
	return 0;
}	
