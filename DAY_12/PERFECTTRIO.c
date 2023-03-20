#include <stdio.h>

int main(void) {
    int t,a,b,c,x,y,z;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d %d %d ",&a,&b,&c);
        if (a+b==c||a+c==b||b+c==a)
        {
            printf("YES\n");
        }
        else 
        {
            printf("NO\n");
        }
    }
	return 0;
}

