#include<iostream>
using namespace std;
int productos(int p1, int p2, int p3);
int main (int argc, char * arg[]){
	int P1,P2,P3;
	cout<<"Introduce los 3 productos a sumar "<<endl;
      cin>>P1;
	cin>>P2;
	cin>>P3;
	productos(P1,P2,P3);
}
int productos(int p1,int p2,int p3){
      float descuento,totpag;
	int total;
	total=p1+p2+p3;
	if(total>=100 && total<200){
		cout<<"DESCUENTO DEL 5% "<<endl;
		descuento=(total*0.05);
		cout<<"el descuento es de : $"<<descuento<<endl;
		totpag=total-descuento;
		cout<<"El total a pagar de los 3 productos es : $"<<totpag<<endl;
	}
	else if(total>=200){
		cout<<"DESCUENTO DEL 8% "<<endl;
		descuento=(total*0.08);
		cout<<"el descuento es de : $"<<descuento<<endl;
		totpag=total-descuento;
		cout<<"El total a pagar de los 3 productos es : $"<<totpag<<endl;
	}
	else{
		cout<<"No se tiene descuento, el total es : $"<<total<<endl;
	}
}
