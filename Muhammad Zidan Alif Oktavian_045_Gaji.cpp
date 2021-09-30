#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
	char Nama[100], NIK[13];
	int jk, sp, k;
	long int gp, um, tunj, trans, gk, p, gb;
	
	//Input
	cout<<"\n Program Gaji Karyawan"<<endl;
	cout<<"\nNama: "; cin>>Nama;
	cout<<"NIK: "; cin>>NIK;
	cout<<"Jenis Kelamin? [0= Perempuan; 1= Laki-Laki] "; cin>>jk;
	cout<<"Status Pernikahan? [0= Single; 1= Menikah] "; cin>>sp;
	cout<<"Kendaraan? [0= Motor; 1= Mobil] "; cin>>k;
	cout<<"Gaji Pokok= "; cin>>gp;
	cout<<"Uang Makan= "; cin>>um;
	
	//Tunjangan
	if(jk==1 && sp==1){
		tunj=500;
	}
	else{
		tunj=0;
	}
	
	//Transport
	if(k==1){
		trans=1000;
	}
	else if(k=0){
		trans=500;
	}
	
	//Gaji Kotor
	gk=gp+tunj+um+trans;
	
	//Pajak
	p=(0.05*gk);
	
	//Gaji
	gb=gk-p;
	
	//Output
	cout<<"\nNama: "<<Nama<<endl;
	cout<<"NIK: "<<NIK<<endl;
	cout<<endl<<"Perhitungan Gaji Karyawan";
	cout<<"1. Tunjangan= "<<tunj<<endl;
	cout<<"2. Uang Transport= "<<trans<<endl;
	cout<<"3. Gaji Pokok= "<<gk<<endl;
	cout<<"4. Pajak= "<<p<<endl;
	cout<<"5. Gaji Bersih= "<<gb<<endl;
	
	getch();
}
