#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main (){
	int n,p,d,e;
	char c,h[4];
	c=',';
	fgets(h,4,stdin);
	n=atoi(h);
	scanf("%d",&p);
	scanf("%d",&d);
	if (d != 0 and p!=0 and d<10 and p<10){
		for (e=1;e<=n;++e)
		{
			itoa(e,h,10);
			if (e==n)
				c='.';
			if (e % p == 0 or e % d == 0 or p == h[strlen(h)-1] -48 or d == h[strlen(h)-1] -48 )
				printf("Cafufa%c",c);
			if (e % p != 0 and e % d != 0 and p != h[strlen(h)-1] -48 and d != h[strlen(h)-1] -48 )
				printf("%d%c",e,c);

		}
	}	
	system("pause");
	return 0;
}
