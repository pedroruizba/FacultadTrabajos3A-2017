#include <iostream>

using namespace std;
void vectoren1(int v[],int t);
void mostrar(int v[],int t);
int main()
{
	int vec[1000]={0},i,j,limite=1000;
	vectoren1(vec,limite);
	for(i=2;i<limite;i++)
	for(j=2;j<(limite)/i;j++)
		vec[j*i]=0;
	for(int x=2;x<limite;x++)
		if(x%3==0)
			vec[x]=0;
		
	mostrar(vec,limite);
}
void vectoren1(int v[],int t)
{
	for(int y=1;y<t;y++)
		v[y]=1;
}
void mostrar(int v[],int t)
{
	for(int x=2;x<t;x++)
	{
		if(v[x]==1)
		{
			cout<<x<<endl;
		}
	}
}
