//Instituto Politécnico Nacional
//Escuela Superior de Computo
//Análisis de Algoritmos
//3CV11
//Práctica 3
//Flores Castro Luis Antonio
//Profesor: Luna Benoso Benjamín.
#include<stdio.h>
#include<stdlib.h>
void principal();
void fibonacci(int,int*);
void fibonacci_recursivo(long,long,int,int*);
int main(void)
{
	principal();
	printf("\n");
	system("pause");
	return 0;
}

void principal()
{
	int *cont=(int*)malloc(sizeof(int));
	*cont=0;
	int *cont2=(int*)malloc(sizeof(int));
	*cont2=0;
	int stop;
	printf("Fibonacci's Series\n");
	printf("Enter n: ");
	scanf("%d",&stop);
	fibonacci(stop,cont);
	printf("Pasos: %d", *cont);
	printf("\n\nFibonacci recursivo\n");
	long begin=1;
	long copy=0;
	fibonacci_recursivo(begin,copy,stop,cont2);
	printf("Pasos: %d", *cont2);
}

void fibonacci(int n,int *cont)
{
	int i;(*cont)++;
	long begin=1;(*cont)++;
	long copy=0;(*cont)++;
	
	for(i=0; i<n; i++)
	{
		(*cont)++;
		printf("%ld, ",begin);(*cont)++;
		begin = begin + copy;(*cont)++;
		copy = begin - copy;(*cont)++;
	}
	(*cont)++;//ultima comprobación de for
}

void fibonacci_recursivo(long begin, long copy, int n,int *cont2)
{
	if(n>=1)
	{
		(*cont2)++;
		printf("%ld, ",begin);(*cont2)++;
		begin = begin + copy;(*cont2)++;
		copy = begin - copy;(*cont2)++;
		n--;(*cont2)++;
		fibonacci_recursivo(begin,copy,n,cont2);(*cont2)++;
	}(*cont2)++;//ultima comprobación de if
}
