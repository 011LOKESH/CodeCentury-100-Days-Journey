https://www.codechef.com/problems/EZSPEAK?tab=ide

#include <stdio.h>
#include <string.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        int a=0;
        int b=0;
        int i=0;
        scanf("%d",&n);
        char str [100];
        scanf("%s",str);
        while (i<n)
        {
           
            
                int ch = str[i];
                if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                    a=0;
                }
                else{
                    a++;
                    if (a>=4){
                        b=1;
                        break;
                    }
                    else{
                        b=0;
                    }
                }
                i++;
        }
            
            if (b==1){
                printf("NO\n");
            }
            else {
                printf("YES\n");
            }
        
        }
    
	
	return 0;
}

