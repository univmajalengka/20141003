#include <iostream>

using namespace std;
int main()
{
	int j1,m1,d1,td1;
	int j2,m2,d2,td2;
	int j3,m3,d3,td3;
	int sm;
	cout<<"===================================="<<endl;
	//masukan waktu awal//
	cout<<"Masukan Jam :";
	cin>>j1;
	cout<<"Masukan Menit :";
	cin>>m1;
	cout<<"Masukan Detik :";
	cin>>d1;
	cout<<"===================================="<<endl;
	cout<<"===================================="<<endl;
		//masukan waktu akhir//
	cout<<"Masukan Jam :";
	cin>>j2;
	cout<<"Masukan Menit :";
	cin>>m2;
	cout<<"Masukan Detik :";
	cin>>d2;
	cout<<"===================================="<<endl;
	//proses konversi waktu//
	td1=(j1*3600)+(m1*60)+d1;
	td2=(j2*3600)+(m2*60)+d2;
	cout<<"===================================="<<endl;
	//operasi pengurangan//
	td3=td1-td2;
	cout<<"===================================="<<endl;
	//konversi total detik ke j3,m3,d3//
	j3=td3/3600;
	sm=td3%3600;
	m3=sm/60;
	d3=sm%60;
	cout<<"===================================="<<endl;
	cout<<"Lama Bermain ="<<j3<<":"<<m3<<":"<<d3<<endl;
}
