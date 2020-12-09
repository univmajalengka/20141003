#include <iostream>

using namespace std;
int main()
{
	int j1,m1,d1,td1;
	int j2,m2,d2,td2;
	int j3,m3,d3,td3,sm3;
	cout<<"-----------------------"<<endl;
	cout<<"-PROGRAM WAKTU BILLING-"<<endl;
	cout<<"-----------------------"<<endl;
	
	cout<<"===Waktu Awal==="<<endl;
	//masukan waktu awal//
	cout<<"Masukan Jam :";
	cin>>j1;
	cout<<"Masukan Menit :";
	cin>>m1;
	cout<<"Masukan Detik :";
	cin>>d1;
	cout<<"===Waktu Akhir==="<<endl;
	//masukan waktu akhir//
	cout<<"Masukan Jam :";
	cin>>j2;
	cout<<"Masukan Menit :";
	cin>>m2;
	cout<<"Masukan Detik :";
	cin>>d2;
	cout<<"================="<<endl;
	//proses konversi waktu//
	td1=(j1*3600)+(m1*60)+d1;
	td2=(j2*3600)+(m2*60)+d2;

	//operasi pengurangan//
	td3=td2-td1;

	//konversi total detik ke j3,m3,d3//
	j3=td3/3600;
	sm3=td3%3600;
	m3=sm3/60;
	d3=sm3%60;
	cout<<"================="<<endl;
	cout<<"Waktu Yang Digunakan ";
	cout<<j3<<":"<<m3<<":"<<d3;
	
	return 0;
}
