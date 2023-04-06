#include <stdio.h>

int main(void) {
	int t,x,y;
	scanf("%d",&t);
	while (t--)
	{
	    scanf("%d %d",&x,&y);
	    if (x>y){
	        printf("LOSS\n");
	    }
	    else if (x==y){
	        printf("NEUTRAL\n");
	    }
	    else {
	        printf("PROFIT\n");
	    }
	}
	return 0;
}

