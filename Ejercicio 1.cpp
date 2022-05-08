#include <iostream>

using namespace std;
 
int main(){
	
	int n,a,i,j,k,s,m;
	float p;
	
	cout<<"Digite la cantidad de elementos que desea tener: ";
	cin>>n;
	
	int arreglo[n],mnrigl[n],myrs[n];
	
	i=0;
	j=0;
	k=0;
	
	for(i=0;i<n;i++){
		cout<<"Digite el "<<i+1<<" numero: ";
		cin>>arreglo[i];
		a+=arreglo[i];
		
	}
	p=a/n;
	
	for(i=0;i<n;i++){
		
		if(arreglo[i]<=p){
			
			mnrigl[j]=arreglo[i];
			j++;
			s=j;
			}
		
		else{
			
			myrs[k]=arreglo[i];
			k++;
			m=k;
		}
	}
	
	cout<<endl<<"El promedio de los numeros es: "<<p<<endl<<endl;
	
	cout<<"Los numeros menores o iguales al promedio son: "<<endl<<endl;
		for(i=0;i<s;i++){
			cout<<"->"<<mnrigl[i]<<endl;
		}
		
	cout<<endl<<"---------------------------------------"<<endl<<endl;
	
	cout<<"Los numeros mayores al promedio son: "<<endl<<endl;
			for(i=0;i<m;i++){
			cout<<"->"<<myrs[i]<<endl;
		}
	
	return 0;
}
