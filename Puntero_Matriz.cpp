#include<iostream>
using namespace std;
main(){
	
	int fil=0, col=0,**pm_notas;
	cout<<"Ingrese la cantidad de estudiantes: ";
	cin>>fil;
	cout<<"Ingrese la cantidad de notas por estudiantes: ";
	cin>>col;
	
	pm_notas=new int*[fil];
	for(int i=0; i<fil; i++){
		pm_notas[i]=new int[col];
	}
	
	for(int i=0; i<fil; i++){
		cout<<"________Estudiante______"<<i<<endl;
		for(int ii=0; ii<col; ii++){
			cout<<"Nota: "<<ii<<": ";
			cin>>*(*(pm_notas+i)+ii);
		}
	}
	cout<<"_________Motrar Notas_________"<<endl;
	for(int i=0; i<fil; i++){
		for(int ii=0; ii<col; ii++){
			cout<<*(*(pm_notas+i)+ii)<<endl;
		}
		cout<<"__________________"<<endl;
	}
	
		for(int i=0; i<fil; i++){
		delete[] pm_notas[i];	
	}
	delete [] pm_notas;
	system("pause");
}
