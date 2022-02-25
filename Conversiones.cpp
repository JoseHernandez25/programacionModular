#include "Potencia1.h"
#include<iostream>
using namespace std;
int main (int argc, char * arg[])
{
	int opc=1,x=0,na;
	int i=0;
	float Litgal(int Litros);
	float Pime(int Pie);
	float Pulcen(int pul);

	
	do
	{  
	   system("cls");
	   cout<<"\n ||| E L I G E   U N A   O P C I O N |||"<<endl;
	   cout<<"\n -------------------------"<<endl;
	   cout<<"\n1. LITROS A GALONES "<<endl;
	   cout<<"\n2. PIES A METROS "<<endl;
	   cout<<"\n3. PULGADAS A CENTIMETROS "<<endl;
	   cout<<"\n -------------------------"<<endl;
	   cout<<"\n Ingrese una de opcion"<<endl;
	   do
	   {   
	       cin>>x;
	       if(x<1|| x>3) 
	       {
	   	 cout<<"no existe la opcion,ingresa nuevamente"<<endl;
	       }
       }while(x<1 || x>3);
	    switch(x)
	    {
	    	case 1:
		system("cls");
		{
			int lit;
	            cout<<"Litros a convertir: "<<endl;
                  cin>>lit;
                  cout<<"La conversion equivale a: "<<Litgal(lit)<<endl;
		}
		      break;
	    	case 2:
	    	system("cls");
	    	{
		    
                  int pie;
	            cout<<" Pies a convertir: "<<endl;
                  cin>>pie;
                  cout<<"La conversion equivale a: "<<Pime(pie)<<endl;
                  
            }      
	    		break;
		case 3:
		system("cls");
		{
			int pul;
	            cout<<"Pulgadas a convertir: "<<endl;
                  cin>>pul;
                  cout<<"La conversion equivale a: "<<Pulcen(pul)<<endl;
		}
		      break;
	    	default:cout<<"no existe la opcion"<<endl;
		}
		
		cout<<"si deseas regresar al menu presiona 1, para salir presiona cualquier otro numero"<<endl;
		cin>>opc;
		system("cls");
	}while(opc==1);
	system("pause");

}

float Litgal(int Litros){
	float conv=Litros*0.264172;
	return conv;
}

float Pime(int Pie){
	float conv=Pie*0.3048;
	return conv;
}
float Pulcen(int pul){
	float conv=pul*2.54;
	return conv;
}

