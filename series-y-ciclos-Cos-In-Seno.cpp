#include<iostream>
#include<math.h>
#include<stdio.h>
#include<conio.h>

using namespace std;
int menu();
int cos(int vcoseno, int finaliza);
int in(int vin, int finaliza);
int seno(int vseno, int finaliza);
int factorial(int limite);
int main(){
	int mopc;
	do{
		mopc=menu();
	}
	while(mopc>0);
	return 0;
}
int menu()
{	int valor=0,num,termina;
	system("cls");
	cout<<"Que desea hacer? "<<endl;
	cout<<"===================="<<endl;
	cout<<"=  Coseno   1      ="<<endl;
	cout<<"=  Ln       2      ="<<endl;
	cout<<"=  Seno     3      ="<<endl;
	cout<<"=  Salir    0      ="<<endl;
	cout<<"===================="<<endl;
	cout<<"--->";
	cin>>num;
	if(num==1)
	{
		cout<<"Escribe el valor de x: ";
		cin>>valor;
		cout<<"Valor para finalizar: ";
		cin>>termina;
		cos(valor,termina);
	}
	else
	{
	
		if(num==2)
		{
			cout<<"Escribe el valor: ";
			cin>>valor;
			cout<<"Ingrese la base: ";
			cin>>termina;
			in(valor,termina);
		}
		else
		{
			if(num==3)
			{
				cout<<"Escribe el valor de x: ";
				cin>>valor;
				cout<<"Valor a finalizar: ";
				cin>>termina;
				seno(valor,termina);
			}
			else
			{
				return 0;
			
			}
		}
	}
	
}
int cos(int vcoseno, int finaliza)
{	
	double final=1,a=2,b=-1;
	for(int contador=1;contador<=finaliza;contador++)
	{
		final+=(pow(vcoseno,a)/factorial(a));
		a+=2;
		b*=-b;
	}
	cout<<"="<<final-b;
	cout<<endl;
	system("pause");
	return 1;
}
int in(int vin, int finaliza)
{
	double final=1;
	for(int contador=1;contador<=finaliza;contador++)
	{	
		cout<<contador<<",";
		if(contador==1)
			final+=(vin-1/vin);
		else
			final+=(1/contador)*pow((vin-1/vin),contador);
	}
	cout<<final;
	cout<<endl;
	system("pause");
	return 1;
}
int seno(int vseno, int finaliza)
{
	double final=1;
	int a=3;
	for(int contador=1;contador<=finaliza;contador++)
	{
		final+=(pow(vseno,a)/factorial(a));
		a+=2;
	}
	cout<<" ="<<final-vseno;
	cout<<endl;
	system("pause");
	return 1;
}
int factorial(int limite)
{	
	int factorial=1, inicial;
    for(inicial=1;inicial<=limite;inicial++)
	{	
     	factorial*=inicial;
	}
	return factorial;
}



