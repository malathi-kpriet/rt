# r
t#include <stdio.h>
int main(void) {
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
     printf("%d is the greatest numbers among  %d %d %d ",(a>b)?((a>c)?a:c):(b>c)?:c,a,b,c);
	return 0;
}
