#include<iostream>
using namespace std;
int main()
{

	cout<<"TUGAS KALKULATOR SEDERHANA"<<endl;

	cout<<"Pilih Menu : "<<endl;
	cout<<"1. Pertambahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<"5. Sisa Hasil Bagi"<<endl;
	int a,b,c, menu;
	float d,e,f;
	cin>>menu;
	if(menu==1){
		cout<<"penjumlahan(+)"<<endl;
		//penguragan//
		cout<<"Masukan Nilai : ";
		cin>>a;
		cout<<"Masukan Nilai : ";
		cin>>b;
		c=a+b;
		cout<<"Jumlah Nilai : "<<a<< "+" <<b<<"\t: ";
		cout<<c;
		}else if(menu==2){
		cout<<"pengurangan(-)"<<endl;
		//pengurangan//
		cout<<"Masukan Nilai : ";
		cin>>a;
		cout<<"Masukan Nilai : ";
		cin>>b;
		c=a-b;
		cout<<"Jumlah Nilai : "<<a<< "-" <<b<<"\t: ";
		cout<<c;
	}else if(menu==3){
		cout<<"perkalian(*)"<<endl;
		//perkalian//
		cout<<"Masukan Nilai : ";
		cin>>a;
		cout<<"Masukan Nilai : ";
		cin>>b;
		c=a*b;
		cout<<"Jumlah Nilai : "<<a<< "*" <<b<<"\t: ";
		cout<<c;
	}else if(menu==4){
		cout<<"pembagian(/)"<<endl;
		//pembagian//
		cout<<"Masukan Nilai : ";
		cin>>d;
		cout<<"Masukan Nilai : ";
		cin>>e;
		f=d/e;
		cout<<"Jumlah Nilai : "<<d<< "/" <<e<<"\t: ";
		cout<<f;
	}else if(menu==5){
		cout<<"sisa hasil bagi(%)"<<endl;
		//sisahasilbagi//
		cout<<"Masukan Nilai : ";
		cin>>a;
		cout<<"Masukan Nilai : ";
		cin>>b;
		c=a%b;
		cout<<"Jumlah Nilai : "<<a<< "%" <<b<<"\t: ";
		cout<<c;
		
	}else{
		cout<<"Menu Tidak Ada";
	}
	return false;
}
