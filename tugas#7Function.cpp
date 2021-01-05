#include <iostream>
using namespace std;

	void tampil(int show);
	int functions_td(int j, int m, int d);
	int functions_time(int td);
	void line();

int main(){
cout<<"TUGAS 7 FUNCTIONS";
line();
	int td,waktu,a,b,c,d;
	td=functions_td(a,b,c);
	tampil(td);
	line();
	waktu=functions_time(d);
	line();
	return 0;
}
int functions_td(int j, int m, int d){
	cout<<"HARAP MASUKAN KETERANGAN WAKTU";
	line();
	int td;
	cout<<"Jam : ";
	cin>>j;
	cout<<"Menit : ";
	cin>>m;
	cout<<"Detik : ";
	cin>>d;
	cout<<"Result = ";
	td=(j*3600)+(m*60)+d;
	return td;
}
int functions_time(int td){
	int j,m,sm,d;
	cout<<"Total Detik : ";
	cin>>td;
	j=td/3600;
	sm=td%3600;
	m=sm/60;
	d=sm%60;
	cout<<"Result = "<<j<<":"<<m<<":"<<d;
	return 0;
}

void line()
{
	cout<<endl;
 	cout<<"<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>"<<endl;
}

void tampil(int show)
{
 	cout<<show;
}

