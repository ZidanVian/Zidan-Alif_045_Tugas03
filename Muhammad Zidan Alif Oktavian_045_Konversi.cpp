#include<iostream>
#include<conio.h>
using namespace std;

main(){
	int Nilai;
	string G
	;
	
	//Input Nilai
	cout<<"Program Pengonversi Nilai"<<endl<<endl;
	
	cout<<"Daftar Grade Nilai="<<endl;
	cout<<"A -> 80-100"<<endl;
	cout<<"B -> 65-79"<<endl;
	cout<<"C -> 50-64"<<endl;
	cout<<"D -> 35-49"<<endl;
	cout<<"E -> 0-34"<<endl<<endl;
	cout<<"Masukkan Nilai Anda= "; cin>>Nilai;
	
	//Grading
	switch(Nilai){
		case 80 ... 100: G="A";
		break;
		case 65 ... 79: G="B";
		break;
		case 50 ... 64: G="C";
		break;
		case 35 ... 49: G="D";
		break;
		case 0 ... 34: G="E";
		break;
		default: cout<<"\nNilai yang Anda Masukkan Tidak Tersedia";
	}
	//output
	cout<<"\nGrade Anda Adalah= "<<G;
	
	getch();
}
