#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

int dado();
int histograma(int tam);
int menu();
int main()
{
	srand(time(NULL));
	int mopc;
	do
	{	int N, caras[6]={0}, suma=0;
		mopc=menu();
		if(mopc==1)
		{
			cout<<"Se lanzo el dado 1 vez"<<endl;
			for(int i=1;i<=100;i++)
			{
				N=dado();
				caras[N-1]++;		
			}
			for(int a=1;a<=6;a++)
			{
				cout<<"Cara "<<a<<"----->";
				cout<<histograma(caras[a-1])<<endl;		
			}
			
		}
		else
		{
			if(mopc==2)
			{
				cout<<"Se lanzo el dado 2 veces"<<endl;
					for(int i=1;i<=100;i++)
					{
						N=dado()+dado();
						caras[N-1]++;		
					}
				for(int i=1;i<=6;i++)
				{
					suma+=caras[i-1];		
				}
				cout<<"Suma de caras: "<<suma<<"--->";
				cout<<histograma(suma)<<endl;
			}
			else
			{
				return 0;
			}
		}
	}
	while(mopc>0);
	return 0;

}

int menu()
{	int valor=0,num,termina;
	//system("cls");
	cout<<"*****El dado*****"<<endl<<endl;
	cout<<"Que desea hacer? "<<endl;
	cout<<"========================="<<endl;
	cout<<"=  Un lanzamiento   1   ="<<endl;
	cout<<"=  Dos lanzamientos 2   ="<<endl;
	cout<<"=  Salir    0           ="<<endl;
	cout<<"========================="<<endl;
	cout<<"--->";
	cin>>num;
	return num;
	
}

int dado()
{
	int n;
	n=rand()%6+1;//del 1 al 6l
	return n;
}
int histograma(int tam)
{
	int i;
	for(i=1;i<=tam;i++)
	cout<<"*";

}
