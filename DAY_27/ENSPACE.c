#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while (t--)
	{
	    int a,x,y,n;
	    scanf("%d %d %d ",&n,&x,&y);
	    a=(x*1)+(y*2);
	    if(n>=a){
	        printf("yes\n");
	    }
	    else {
	        printf("no\n");
	    }
	}
	return 0;
}

