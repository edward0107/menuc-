#include <iostream>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	int saldo=1000,retiro,dept,total=0,opc;
	cout<<"\t-----MENU-----"<<endl;
		cout<<"   Seleccione una opcion"<<endl;
			cout<<"1. Consultar saldo de la cuenta"<<endl;
				cout<<"2. Retiro monetario"<<endl;
					cout<<"3. Hacer un deposito"<<endl;
						cout<<"4. Salir"<<endl;
						cin>>opc;
	switch (opc){
	case 1:
		cout<<"El saldo de su cuenta es:\n"<<saldo<<endl;break;	
	case 2:
		cout<<"Ingrese cantidad a retirar: "<<endl;
			cin>>retiro;
				if(retiro>saldo){
					cout<<"No se puede realizar el retiro su saldo es inferior a la cantidad "<<endl;
				}else{
					total=saldo-retiro;
					cout<<"su retiro fue exitoso!! \n";
					cout<<"Su saldo actual es de: \n"<<total;
				}
				break;
	case 3:
		cout<<"Ingrese la cantidad que decea depositar en su cuenta : "<<endl;
			cin>>dept;
				total=saldo+dept;
					cout<<"su deposito fue exitoso \n"<<"saldo actual \n"<<total;break;
					
	case 4:
		cout<<"Desea salir del programa si=1  No=2"<<endl;	
			cin>>opc;
				if(opc==1){
					return 0;
				}else{
					return main();
				}	break;				
	default : 
	return main();		
		break;
		
	}					
	
	system("PAUSE");
	return 0;
	
}
