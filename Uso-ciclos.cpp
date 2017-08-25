# include <stdio.h>
# include <conio.h>
# include <iostream>


using namespace std;

int main() {

    int opc = 0,i,factorial,numero, a=0,b,numeroprimo,calificacion=0,suma=0, contador = 0;
	float promedio;


 while(opc>=0)
 {
    system("cls");


   cout<<"Que desea hacer? ";
   cout<<endl<<"========================";
   cout<<endl<<"= Numero primo    1    =";
   cout<<endl<<"= Factorial       2    =";
   cout<<endl<<"= Calificaciones  3    =";
   cout<<endl<<"= Salir           0    =";
   cout<<endl<<"========================";
   cout<<endl<<"====> ";
   cin>>opc;


    switch(opc)
    {
        case 1:
		 	cout<<"Ingrese numero"<<endl;
         	cin>>numeroprimo;
         	for(b=1;b<(numeroprimo+1);b++)
		 	{
         		if(numeroprimo%b==0)
				{
            		a++;
        		}
         	}
        	if(a!=2)
			{
        		cout<<"No es Primo";
        	}
			else
			{
        		cout<<"Si es Primo";
        	}
        	a=0;
        	b=0;
        	numeroprimo=0;
        break;
        case 2:
        	cout<<"Sacar el factorial"<<endl;
         	cout<<"Ingresa un numero: ";
         	cin>>numero;
         		for(i=1;i<=numero;i++)
				{
     				factorial*=i;
     				cout<<i<<"x";
				}
			cout<<"\nEl factorial de numero es : "<<factorial;
        break;
        case 3:
        	cout<<"Ingresa las calificaciones y coloca un -1 para terminar y calcular promedio\n";
			while(calificacion !=-1)
  			{	
    			cout<<"Ingrese la calificacion: ";
    			cin>>calificacion;
    			if(calificacion != -1)
    			{
      				suma+=calificacion;
      				contador+=1;
    			}
    			else
    			{
    				promedio=suma/contador;
      				cout<<"Promedio: "<<promedio<<endl;
    			}

  			}			
        break;

        case 0:
        return 0;
        break;


        default:
            cout<<"Error! ";
   }
	getch();
 }

}
