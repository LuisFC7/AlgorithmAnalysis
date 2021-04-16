//Instituto Politécnico Nacional
//Escuela Superior de Cómputo
//Análisis de Algoritmos
//3CV11
//Práctica 3
//Flores Castro Luis Antonio
//Profesor: Luna Benoso Benjamín.
#include<stdio.h>
#include<stdlib.h>

void principal();
int Perfecto(int);
void MostrarPerfectos(int,int*);
int main(void)
{
	principal();
	system("pause");
	return 0;
}

void principal()
{
	int *cont=(int*)malloc(sizeof(int));
	*cont=0;
	

	int n;
	//first we have to get divisors
	printf("Perfect Number\n");
	printf("n: ");
	scanf("%d",&n);
	
	MostrarPerfectos(n,cont);
	printf("\nPasos: %d", *cont);
	printf("\n");
}


int Perfecto(int n)
{
	//well this part we have to find the divisors
	int current=0;
	int i;
	for(i=1; i<=n; i++)
	{
		if(n % i ==0)
		current=current+i;
	}
	current=current-n;
	if(current==n)
		return current;
	else
		return 0;
}

void MostrarPerfectos(int n, int *cont)
{
	int flag=0;(*cont)++;
	int aux,j;(*cont)++;
	int i=5;(*cont)++;
	while(flag<n)//now means the quantity of numbers
	{		
		(*cont)++;//condition of while
		i++;(*cont)++;
		aux=Perfecto(i);(*cont)++;
		if(aux!=0)
		{
			(*cont)++;//condition of if
			printf("%d\n",aux);(*cont)++;
			flag++;(*cont)++;
		}
	}
	(*cont)++;//last condition of while
}
