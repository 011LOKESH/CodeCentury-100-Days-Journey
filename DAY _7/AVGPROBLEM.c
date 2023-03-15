#include <stdio.h>

int main(void) {
    int t,a,b,c,d;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d %d %d ",&a,&b,&c);
        
        if (a+b>c*2)
        {
             printf("yes\n");
        }
        else 
        {
            printf("NO\n");
        }
       
    }
	return 0;
}

