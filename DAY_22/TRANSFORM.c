https://www.codechef.com/problems/TRANSFORM?tab=statement

#include <stdio.h>

int main(void) {
	int t,x,a;
	scanf("%d",&t);
	while (t--){
	    scanf("%d",&x);
	    a=(x%3);
	    if (a==2){
	        printf("SMALL\n");
	    }
	    else if (a==0){
	        printf("NORMAL\n");
	    }
	    else{
	        printf("HUGE\n");
	    }
	    
	}
	return 0;
}

