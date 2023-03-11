https://www.codechef.com/problems/SUMM?tab=statement

#include <stdio.h>

int main(void) {
	int t,a,b,c;
	scanf("%d",&t);
	while (t--)
	{
	    scanf("%d %d %d",&a,&b,&c);
	    if (a+b==c)
	    printf("YES\n");
	    else 
	    printf("NO\n");
	} 
	return 0;
}

