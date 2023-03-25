https://www.codechef.com/problems/FCTRL2?tab=statement


#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int a;
        scanf("%d",&a);
        int b=1;
        for (int i=1;i<=a;i++)
        {
            b=b*i;
        }
        printf("%d\n",b);

    }
    return 0;
}



