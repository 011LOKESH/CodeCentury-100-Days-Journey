#include <stdio.h>

int main(void) {
    int t,x,y,z;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d %d %d",&x,&y,&z);
        if (x>y && x>z)
        {
            printf("alice\n");
        }
        else if (y>z)
        {
            printf("bob\n");
        }
        else
        {
            printf("charlie\n");
        }
    }
	return 0;
}

