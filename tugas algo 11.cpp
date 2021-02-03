#include<iostream>

using namespace std;
void batas();
void peringatan();
void ucapan();

int list(int belanja, int diskon, int bayar);


const float dc1=0; 
const float dc2=0.10;
const float dc3=0.125;
const float dc4= 0.15;

int main()
{
	system ("color A");
	int t_pembelian, discont, bayar;
	char kembali;
	cout<<"\tTUGAS ALGORITMA"<<endl;

	batas();
	
	cout << "Total Belanja (minimal 5000 okeh!!): Rp. ";
	cin >> t_pembelian;
	
	batas();
	{
	}
	if (t_pembelian <= 25000 && t_pembelian >= 5000){
		discont = t_pembelian * dc1;
		bayar = t_pembelian - discont;
		
		cout<<"Discount 0%"<<endl;
		list(t_pembelian, discont, bayar);
	
	}else if (t_pembelian <= 50000 && t_pembelian >=25000){
		discont = t_pembelian * dc2;
		bayar = t_pembelian - discont;
		
		cout<<"Discount 10%"<<endl;
		list(t_pembelian, discont, bayar);
		
	}else if (t_pembelian <= 100000 && t_pembelian >=50000){
		discont = t_pembelian * dc3;
		bayar = t_pembelian - discont;
		
		cout<<"Discount 12.5%"<<endl;
		list(t_pembelian, discont, bayar);
		
	}else if (t_pembelian >= 100000){
		discont = t_pembelian * dc4;
		bayar = t_pembelian - discont;
		
		cout<<"Discount 15%"<<endl;
		list(t_pembelian, discont, bayar);
		
	}else{
		peringatan();
	}
	ucapan();
	
	return 0;
		
}
int list(int belanja, int diskon, int pembayar)
{
	cout<<"\nTotal Belanja		\t: Rp. "<<belanja<<endl;
	cout<<"Diskon				: Rp. "<<diskon<<endl;
	cout<<"Total Harus Bayar	\t: Rp. "<<pembayar<<endl;
	batas();
	cout<<"Bayar				: Rp. "<<belanja<<endl;
	cout<<"Kembalian			: Rp. "<<belanja-pembayar<<endl;
	batas();
}
void batas()
{
	cout<<"-----------------------------------------"<<endl;
}
void peringatan()
{
	cout<<"HEI ITU TIDAK SESUAI!!!!!!!!!"<<endl;
}
void ucapan()
{
	cout<<"Terima kasih sudah berbelanja (>~<)"<<endl;
}
