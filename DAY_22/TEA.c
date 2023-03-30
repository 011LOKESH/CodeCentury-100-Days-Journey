https://www.codechef.com/problems/TEA?tab=statement

#include <stdio.h>

int main(void) {
	int t,x,y,z;
	scanf("%d",&t);
	while (t--)
	{
	    scanf("%d %d %d",&x,&y,&z);
	    if (y>=x){
	        printf("%d\n",z);
	    }
	    else if (x%y==0){
	        printf("%d\n",(x/y)*z);
	    }
	    else {
	        printf("%d\n",((x/y)+1)*z);
	    }
	}
	return 0;
}

