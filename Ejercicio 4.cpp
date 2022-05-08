#include <iostream>

using namespace std;

int main(){
	
	int arrgl[10], arrglds[10],i;
	
		cout<<"Por favor ingrese 10 numeros"<<endl;
	
		for(int i=0;i<10;i++){
			cout<<"Ingrese el "<<i+1<<" elemento: ";
			cin>>arrgl[i];
		}
		
		for(int i=0;i<10;i++){
			if(arrgl[i]%2==0){
				arrglds[i]=arrgl[i]*arrgl[i];
			}
			else{
				arrglds[i]=arrgl[i]*arrgl[i]*arrgl[i];
			}
		}
		
		cout<<"\n";
		
		cout<<"Numeros del primer arreglo: "<<endl;
		
		for(int i=0;i<10;i++){
			cout<<"->"<<arrgl[i]<<endl;
		}
		
		cout<<"\n";
		
		cout<<"Numeros del segundo arreglo: "<<endl;
		
		for(int i=0;i<10;i++){
			cout<<"->"<<arrglds[i]<<endl;
		}
		
	return 0;
}
