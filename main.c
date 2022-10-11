#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int factorial(int x)
{
	int res=1;
	int i;
	for(i=1;i<=x;i++)
		res=res*i;
	return res;	
}
int combination(int n, int r)
{
	int comb;
	comb=factorial(n)/(factorial(n-r)*factorial(r));
	return comb;
}



int main(int argc, char *argv[]) {
	int a,n,r;
	printf("n의 값을 입력하세요");
	scanf("%i",&n);
	printf("r의 값을 입력하세요");
	scanf("%i",&r);
	
	a=combination(n,r);
	printf("결과는 %i 입니다",a);
	
	return 0;
}
