#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main(){
	awal:
	int n, i, nilai, maks,b;
	int *ptr_maks;
	ptr_maks=&maks;
	
	cout<<"Program Menentukan Nilai Maksimum"<<endl<<endl;
	cout<<"Masukkan data Di Bawah Ini"<<endl;
	cout<<" Banyak nilai yang ingin diinput : "; cin>>n;
	
	for(i=1; i<=n; i++){
		cout<<" Masukkan nilai ke-"<<i<<" : "; cin>>nilai;
		if(nilai>maks){
			maks=nilai;
		}
	}
	system("cls");
	cout<<" Nilai Maksimum = "<<maks<<" dengan alamat = "<<&maks<<endl;
	cout<<"Press Any Key To Continue...."; getch();
}
