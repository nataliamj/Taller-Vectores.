#include <iostream>

using namespace std;
 int main(){
 	int i,k,j;
 	
 	cout<<"Por favor digite 20 numeros, que seran divididos en dos grupos de 10: "<<endl<<endl;
 	
 	float arreglo1[10]; 
	 float arreglo2[10];
	 float arreglo3[10];

 	cout<<"1 Grupo: "<<endl;
 	 for(i=0;i<10;i++){
 	 	cout<<"Digite el "<<i+1<<" numero: ";
		cin>>arreglo1[i];
	  }
	cout<<"----------------------------------------------------------------------";
	  cout<<endl<<"2 Grupo: "<<endl;
 	 for(i=0;i<10;i++){
 	 	cout<<"Digite el "<<i+1<<" numero: ";
		cin>>arreglo2[i];
	  }  
	cout<<"----------------------------------------------------------------------"<<endl;
	
	cout<<"Los numeros del grupo 1 son: "<<endl;
	for(i=0;i<10;i++){
		cout<<"->"<<arreglo1[i]<<endl;
	}
 	cout<<"----------------------------------------------------------------------"<<endl;
 	cout<<"Los numeros del grupo 2 son: "<<endl;
	for(i=0;i<10;i++){
		cout<<"->"<<arreglo2[i]<<endl;
	}
	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"Los productos de los elementos del grupo 1 por los del grupo 2 en orden invertido son: "<<endl;
	
 	k=0;
 	j=1;
 	for(i=9;i>=0;i--){
 		arreglo3[k]=arreglo2[i]*arreglo1[k];
 		cout<<"El producto "<<j++<<" es: "<<arreglo3[k]<<endl;
 		k++;
	 }
	 
 	
 	return 0;
 }
