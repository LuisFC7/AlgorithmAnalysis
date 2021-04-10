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
int perfectnumber(int);
void MostrarPerfectos(int);
int main(void)
{
	principal();
	system("pause");
	return 0;
}

void principal()
{
	int n;
	//first we have to get divisors
	printf("Perfect Number\n");
	printf("Enter: ");
	scanf("%d",&n);
	
	MostrarPerfectos(n);
}

int perfectnumber(int n)
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

void MostrarPerfectos(int n)
{
	int flag=0;
	int aux,j;
	int i=5;
	while(flag<n)//now means the quantity of numbers
	{	
		i++;
		aux=perfectnumber(i);
		if(aux!=0)
		{
			printf("%d\n",aux);
			flag++;
		}
		else
		{
			flag=0;
		}
	}
}
