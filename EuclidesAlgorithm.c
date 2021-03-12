#include<stdio.h>
#include<stdlib.h>

void principal();
void euclides(int,int);

int main()
{
	principal();
	system("pause");
	return 0;
}

void principal()
{
	int v1,v2,mul,res;
	printf("Enter first number: \n");
	scanf("%d",&v1);
	printf("Enter second number: \n");
	scanf("%d",&v2);
	printf("\n");
	euclides(v1,v2);
}

void euclides(int v1, int v2)
{
	
	int divide,mul;
	int res=1;

	while(res!=0){
		divide=v1/v2;
		if(divide!=0){
			mul=divide;
			res=v1-(v2*mul);
			printf("%d = %d*%d+%d\n",v1,v2,mul,res);
			if(res==0){
				printf("\nMCD = %d\n",v2);
			}else
			v1=v2;
			v2=res;
			}
	}
}
