#include <stdlib.h>
#include <stdio.h>

int mmc(int n1, int n2){
	int a,b,c,mmc;
	b=n2;
	a=n1;
	do{
		c=(a % b);
		a=b;
		b=c;
	}while(c!=0);
	mmc =(n1*n2)/a;
	return mmc;
}
int main (){
	int i,e,n1,obs[50];
	scanf("%d", & i);
	n1=1;
	for (e=0;e<i;++e){
		scanf("%d",& obs[e]);
		n1= mmc (obs[e],n1);
	}
	if (i!=0)
	printf("\n%d",n1);
	system("pause");
	return 0;
}
