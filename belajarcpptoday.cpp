#include <iostream>
using namespace std;
#include <string>
int main(){
	
	
	while(true){
		system("cls");
		int jumlah;
		cout<<"Masukkan jumlah siswa : ";
		cin>>jumlah;
		string nama[jumlah];
		string kelas[jumlah];
		int nilai[jumlah];
		int nilai1[jumlah];
		int nilai2[jumlah];
		int nilai3[jumlah];
		int rata[jumlah];
		int umur[jumlah];
		string ternary[jumlah];
		for (int i = 0; i < jumlah; i++) {
			cout<<"Masukkan Nama Siswa-"<<i+1<<": ";
			cin>>nama[i];
			cout<<"Masukkan Umur Siswa-"<<i+1<<": ";
			cin>>nilai[i];
			cout<<"Masukkan Kelas Siswa-"<<i+1<<": ";
			cin>>kelas[i];
			cout<<"Nilai Sejarah "<<nama[i]<<" adalah : ";
			cin>>nilai1[i];
			cout<<"Nilai Kimia "<<nama[i]<<" adalah : ";
			cin>>nilai2[i];
			cout<<"Nilai Mat "<<nama[i]<<" adalah : ";
			cin>>nilai3[i];
		}
		for (int i = 0; i < jumlah; i++) {
			rata[i] = (nilai1[i]+nilai2[i]+nilai3[i])/3;
			ternary[i] = (rata[i]>=70) ? "Lulus!" : "Tidak Lulus!";
			cout<<"Siswa ke "<<i+1<<endl;
			cout<<"Nama : "<<nama[i]<<endl;
			cout<<"Kelas : "<<kelas[i]<<endl;
			cout<<"Rata-Rata Nilai : "<<rata[i]<<endl;
			cout<<"Status Kelulusan : "<<ternary[i]<<endl;
		}
		string lanjut;
		cout<<"Lanjut?(y/n): ";
		cin>>lanjut;
		if(lanjut=="Y"||lanjut=="y"){
			continue;
		}
		else{
			break;
		}
	}
}
