#include <iostream>
using namespace std;
int main()
{
	float sueldo;
	cout<<"Ingresa tu sueldo actual: ";
	cin>>sueldo;
	
	if (sueldo > 1300)
	{
		sueldo=(sueldo*8)/100+sueldo;
	}
	else
	{
		if ((sueldo <= 1300)&&(sueldo >= 1201))
		{
			sueldo=(sueldo*10)/100+sueldo;	
		}
		else
		{
			if ((sueldo <= 1200)&&(sueldo >= 1101))
			{
				sueldo=(sueldo*12)/100+sueldo;
			}
			else
			{
				if ((sueldo <= 1100)&&(sueldo >= 1001))
				{
					sueldo=(sueldo*15)/100+sueldo;
				}
				else
				{
					if ((sueldo <= 1000)&&(sueldo >= 0))
					{
						sueldo=(sueldo*18)/100+sueldo;
					}
				}
			}
		}
	}

	cout<<"\nTu nuevo sueldo es $"<<sueldo;
	return 0;
}
