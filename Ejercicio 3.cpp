#include<iostream>
using namespace std;
int main()
{
	int prms[50],acm;
	
	for(int i=1;i<=50;i++)
	{
		acm=0;

		for(int k=1;k<=i;k++)
		{
			if(i%k==0)
			{
				acm++;
			}				
		}
		if(acm==2)
		{
			prms[i]=i;
			
		}
		else
		{
			prms[i]=0;	
		}
	}
	
	cout<<"Los numeros primos entre 1 y 50 son: "<<endl;

	for(int i=1;i<=50;i++)
	{
		if(prms[i]>0)
		{
			cout<<"-> "<<prms[i]<<" "<<endl;
		}
	}
	return 0;//
}
