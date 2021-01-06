#include <iostream>
//functions
using namespace std;

	void line();
	void sertakan(int show);
	int total_detik(int j, int m, int d);
	int functions_time(int td);

int main(){
cout<<"TUGAS 7 FUNCTIONS";
line();
	int td,waktu,a,b,c,d;
	td=total_detik(a,b,c);
	sertakan(td);
	line();
	waktu=functions_time(d);
	line();
	return td;
}
int total_detik(int j, int m, int d){
	//Function konversi jam, menit, detik, ke total detik
	cout<<"HARAP MASUKAN KETERANGAN WAKTU";
	line();
	int td;
	cout<<"Masukan Jam    : ";
	cin>>j;
	cout<<"Masukan Menit  : ";
	cin>>m;
	cout<<"Masukan Detik  : ";
	cin>>d;
	cout<<"<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>"<<endl;
	cout<<"Hasil Konversi : ";
	td=(j*3600)+(m*60)+d;
	return td;
}
int functions_time(int td){
	//Function konversi dari total detik ke jam, menit, detik
	int j,m,sm,d;
	cout<<"Masukan Total Detik : ";
	cin>>td;
	j=td/3600;
	sm=td%3600;
	m=sm/60;
	d=sm%60; 
	cout<<"<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>"<<endl;
	cout<<"Result = " << j << " jam " << " : " << m << " menit " << " : " << d << " detik ";
	return td;
}

void line()
{
	cout<<endl;cout<<"<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>"<<endl;
}

void sertakan(int show)
{
 	cout<<show;
}

