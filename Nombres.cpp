#include<iostream>
using namespace std;
void Nombre(string x, string y, string z);
int main (int argc, char * arg[]){
	string x,y,z;
	cout<<"Nombre ";
	cin>>x;
	cout<<"Primer apellido ";
	cin>>y;
	cout<<"Segundo apelllido ";
	cin>>z;
	Nombre(x,y,z);
}
void Nombre(string x, string y, string z){
	string a=x+" "+y+" "+z;
	cout<<"El nombre completo es: "<<a<<endl;
}
