#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int nilai_matkul,matkul,a;
	char nama[30],nim[30],prodi[30],nama_matkul[30],grade[30]="Grade Nilai Mata Kuliah Anda";
	char *Pmatkul,*Pgrade,*Pnama,*Pnim,*Pprodi;
	Pmatkul=nama_matkul;
	Pgrade=grade;
	Pnama=nama;
	Pnim=nim;
	Pprodi=prodi;
	string grd;
	
	cout<<"============================================================"<<endl;
	cout<<"|                Progam Nilai Mata Kuliah                  |"<<endl;
	cout<<"============================================================"<<endl;
	cout<<"\n";
	
	cout<<"| Masukkan Nama                    : "; cin>>Pnama;
	cout<<"| Masukkan NIM                     : "; cin>>Pnim;
	cout<<"| Masukkan Progam Studi            : "; cin>>Pprodi;
	cout<<"| Masukkan Jumlah Data Mata Kuliah : "; cin>>matkul;
	
	cout<<"------------------------------------------------------------"<<endl;
	cout<<"\n";
	
	for (int i=1;i<=matkul;i++)
	{
		cout<<"              Data Mata Kuliah ke-"<<i<<"                   "<<endl;
		cout<<"============================================================"<<endl;
		cout<<"| Masukkan Nama Mata Kuliah  : "; cin>>Pmatkul;
		cout<<"| Masukkan Nilai Mata Kuliah : "; cin>>nilai_matkul;
		
		if ((nilai_matkul>=90)&&(nilai_matkul<=100))
		{
			grd="A";
		}
		else if ((nilai_matkul>=80)&&(nilai_matkul<90))
		{
			grd="B";
		}
		else if ((nilai_matkul>=70)&&(nilai_matkul<80))
		{
			grd="C";
		}
		else if ((nilai_matkul>=60)&&(nilai_matkul<70))
		{
			grd="D";
		}
		else if ((nilai_matkul>=50)&&(nilai_matkul<60))
		{
			grd="E";
		}
		else
		{
			grd="Tidak Lulus";
		}
		cout<<"| "<<Pgrade<<"    : "<<grd<<endl;
		cout<<"============================================================"<<endl;
		cout<<"\n";
	}
	
	cout<<"\n";
	cout<<"              TABEL NILAI                "<<endl;
	cout<<"========================================="<<endl;
	cout<<"|     NILAI MATKUL           GRADE      |"<<endl;
	cout<<"|      >= 90-100               A        |"<<endl;
	cout<<"|      >= 80-<90               B        |"<<endl;
	cout<<"|      >= 70-<80               C        |"<<endl;
	cout<<"|      >= 60-<70               D        |"<<endl;
	cout<<"|      >= 50-<60               E        |"<<endl;
	cout<<"|          <50            Tidak Lulus   |"<<endl;
	cout<<"========================================="<<endl;
	cout<<"\n";
	
	cout<<"Press Any Key To Continue...."; getch();
	system("cls");
	
	cout<<"Terima Kasih Telah Menggunakan Program Ini"<<endl;
	cout<<"Press Any Key To End The Program...."; getch();
}
