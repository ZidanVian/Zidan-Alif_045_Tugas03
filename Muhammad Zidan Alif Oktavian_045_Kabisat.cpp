#include <iostream>
#include <conio.h>
using namespace std;

main(){
	int T;
	
	//input
	cout<<" Program Menentukan Tahun Kabisat"<<endl;
	cout<<"----------------------------------"<<endl<<endl;
	cout<<" Masukkan Tahun= "; cin>>T;
	
	//output
	if(T%4==0){
		cout<<" Tahun tersebut termasuk Tahun Kabisat";
	}
	else {
		cout<<" Tahun tersebut bukan Tahun Kabisat";
	}
	getch ();
}
