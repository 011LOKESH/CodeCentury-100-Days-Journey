#include <stdio.h>

int main(void) {
    int t,x;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d",&x);
        if(x<7)
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

