#include <stdio.h>

int main(void) {
	int t,x,y,m,n;
	scanf("%d",&t);
	while (t--){
	    scanf("%d %d %d %d",&x,&y,&m,&n);
	    if (x*y<=m*n)
	    printf("yes\n");
	    else 
	    printf("no\n");
	}
	return 0;
}

