#include <iostream>
#include <string.h>

using namespace std;


int main(){
	//pedir la cantidad de usuarios y el valor del kw//
	int nusr,vkw;
	cout<<"Digite el numero de usuarios: ";
	cin>>nusr;
	cout<<"Digite el valor del kW: ";
	cin>>vkw;
	cout<<endl;
	
	int lctma[nusr],lctmact[nusr],cns[nusr],vlrpg[nusr];
	string nombre[nusr];
	string apellido[nusr];
	//pedir nombre y lectura del mes anterior del usuario//
	for(int i=0;i<nusr;i++){
		cout<<"Usuario "<<i+1<<endl;
		cout<<"Digite el primer nombre del usuario: ";
		cin>>nombre[i];
		cout<<"Digite el primer apellido del usuario: ";
		cin>>apellido[i];
		cout<<"Digite la lectura del mes anterior del usuario: ";
		cin>>lctma[i];
		cout<<"\n";
	}
	//pedir lectura del mes actual de cada usuario, calcular consumo restando a la lectura del mes actual que es la mayor la lectura del mes anterior y calcular el valor a pagar multiplicando el consumo por el valor kw//
	cout<<"Digite la lectura del mes actual de cada usuario ingresado anteriormente."<<endl;
	for(int i=0;i<nusr;i++){
		cout<<"->Usuario "<<nombre[i]<<" "<<apellido[i]<<". Lectura actual: ";
		cin>>lctmact[i];		
		cns[i]=lctmact[i]-lctma[i];
		vlrpg[i]=cns[i]*vkw;
	}
	cout<<endl;
	//imprimir nombre, consumo y valor a pagar de cada usuario//
	for(int i=0;i<nusr;i++){
		cout<<"Usuario "<<i+1<<endl;
		cout<<"Nombre: "<<nombre[i]<<" "<<apellido[i]<<endl;
		cout<<"Consumo: "<<cns[i]<<endl;
		cout<<"Valor a pagar: "<<vlrpg[i]<<endl<<endl;	
	}
	
	return 0;
}
