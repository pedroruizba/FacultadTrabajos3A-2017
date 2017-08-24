#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int hrsE,hrsS,minE,minS,SegE,SegS,restaHRS,restaMIN,restaS;
	
	cout<<"*El formato debe de estar en 24 horas\n\n";
	cout<<"\n=======Hora de entrada=======\n";
	cout<<"Hr: ";
	cin>>hrsE;
	cout<<"Minutos: ";
	cin>>minE;
	cout<<"Segundos: ";
	cin>>SegE;
	cout<<"\n=======Hora de salida=======\n";
	cout<<"Hrs: ";
	cin>>hrsS;
	cout<<"Minutos: ";
	cin>>minS;
	cout<<"Segundos: ";
	cin>>SegS;
	
	restaHRS=hrsE-hrsS;
	restaMIN=minE-minS;
	restaS=SegE-SegS;
		
	if(restaMIN>=60)
	{
		restaHRS=abs(restaHRS);
		restaHRS+=1;
		restaMIN=abs(restaMIN);
		restaMIN-=60;	
	}
	if(restaS>=60)
	{
		restaMIN=abs(restaMIN);
		restaMIN+=1;
		restaS=abs(restaS);
		restaS-=60;	
	}
	restaHRS=abs(restaHRS);
	restaMIN=abs(restaMIN);
	restaS=abs(restaS);
	
	cout<<"\n Se Trabajo----> "<<restaHRS<<" Horas "<<restaMIN<<" Minutos "<<restaS<<" Segundos\n";


	system("pause");
	return 0;
}
