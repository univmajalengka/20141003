#include<iostream>
#include<string>

using namespace std;
void batas(){
	cout<<"---------------------------------------------------|"<<endl;
}

const float persentunjangan = 0.2;
const float persenpajak = 0.15;
int main()
{
	
	cout<<"\t\t\tTUGAS 10 MENGHITUNG GAJI BERSIH KARYAWAN"<<endl;
	cout<<"\t\t\t\~Nama	: Mochamad sopian Hidayat"<<endl;
	cout<<"\t\t\t\~NPM	: 20.14.1.0033"<<endl;
	cout<<"\t\t\t\~Kelas	: IC\n"<<endl;
	
	system ("color 10");
	string namakaryawan;
	int tunjangan, pajak, gaji, gajibersih;
	cout<<"Masukan Nama Karyawan: ";
	getline (cin,namakaryawan);
	batas();
	cout<<"Masukan Gaji Pokok: Rp. ";
	cin>>gaji;
	batas();
	//proses penghitungan
	tunjangan = persentunjangan * gaji;
	pajak = persenpajak * gaji;
	gajibersih = gaji + tunjangan - pajak;
	batas();
	cout<<"Gaji bersih yang diterima Bpk/Ibu. "<<namakaryawan<<endl;
	cout<<"Senilai: Rp. "<<gajibersih<<endl;
	batas();
 
 return 0;
}
