LINK : https://www.codechef.com/problems/TLG?tab=ide

#include <stdio.h>

int main(void) {
	int t,i;
	int a[t],b[t],lead[t],win[t];
	scanf("%d",&t);
    for (int i=0;i<t;i++)
    {
        scanf("%d %d ",&a[i],&b[i]);
    }
    int c=0;
    int d=0;
    for (int i=0;i<t;i++)
    {
        c+=a[i];
        d+=b[i];
        if (c>d)
        {
            lead[i]=c-d;
            win[i]=1;
        }
        else 
        {
            lead[i]=d-c;
            win[i]=2;
        }
    }
    int l=0;
    int w=0;
    for (int i=0;i<t;i++)
    {
        if (l<=lead[i])
        {
            l=lead[i];
            w=win[i];
        }
    }
    printf("%d %d",w,l);
    
	return 0;
}

