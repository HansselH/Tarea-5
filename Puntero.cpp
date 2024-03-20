#include<iostream>
using namespace std;
main(){
	
	int edad=25,*p_edad;
	p_edad=&edad;
	
	cout<<"Variable edad: "<<edad<<endl;
	cout<<"Puntero Edad: "<<*p_edad<<endl;
	
	
	cout<<"_________Cambiar Valores_______"<<endl;
	
	*p_edad=40;
	
	cout<<"Variable edad: "<<edad<<endl;
	cout<<"Puntero edad: "<<*p_edad<<endl;
	
	cout<<"_________Otra variable a P_edad_______"<<endl;
	int edad2=100;
	p_edad=&edad2;
	edad=400;
	cout<<"Variable edad: "<<edad<<endl;
	cout<<"Puntero edad: "<<*p_edad<<endl;
	cout<<"Variable edad2: "<<edad2<<endl;
	system("pause");
}
