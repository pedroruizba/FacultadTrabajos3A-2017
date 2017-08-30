# include <conio.h>
# include <iostream>
#include <math.h>

using namespace std;

int main() {

 int opc = 0; 
 int long numero, i, factorial, numero2,factorial2,x, constante, valore;
    
 while(opc>=0)
 {
    system("cls");


   cout<<"Que desea hacer? ";
   cout<<endl<<"================================";
   cout<<endl<<"= Valor de la constante   1    =";
   cout<<endl<<"= Valor de e a la x       2    =";
   cout<<endl<<"= Salir                   0    =";
   cout<<endl<<"================================";
   cout<<endl<<"====> ";
   cin>>opc;


    switch(opc)
    {
        case 1:
         	cout<<"Ingresa un numero: ";
         	cin>>numero;
         	for(i=1;i<=numero;i++)
			{
     			factorial*=i;
				constante+=i/factorial;
			}
			constante+=numero;
			cout<<"La constante es: "<<constante;
			numero=0;
			constante=0;
			i=0;
        break;
        case 2:
		 	cout<<"Ingrese numero: ";
		 	cin>>numero2;
		 	    for(x=1;x<=numero;x++)
				{
     				factorial2*=x;
					valore=pow(numero2,x);
					valore+=valore/factorial2;
				}
			valore+=numero2;
			cout<<"El valor de ex es: "<<valore;
			numero2=0;
			valore=0;
			x=0;
			factorial2=0;

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
