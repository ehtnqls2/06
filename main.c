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
	printf("n�� ���� �Է��ϼ���");
	scanf("%i",&n);
	printf("r�� ���� �Է��ϼ���");
	scanf("%i",&r);
	
	a=combination(n,r);
	printf("����� %i �Դϴ�",a);
	
	return 0;
}
