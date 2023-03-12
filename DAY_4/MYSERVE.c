https://www.codechef.com/problems/MYSERVE?tab=statement

#include <stdio.h>

int main(void) {
	int t,x,y,a;
	scanf("%d",&t);
	while (t--)
	{
	    scanf("%d %d",&x,&y);
	    a=(x+y)%4;
	    if (a==0||a==1)
	    {
	    printf("alice\n");
	    }
	    else
	    { 
	    printf("bob\n");
	    }
	}
	return 0;
}

