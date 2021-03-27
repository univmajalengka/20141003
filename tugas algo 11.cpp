#include<iostream>

using namespace std;
void batas(){
	cout<<"-----------------------------------------"<<endl;
}
void peringatan(){
	cout<<"HEI ITU TIDAK SESUAI!!!!!!!!!"<<endl;
}
void ucapan(){
	cout<<"Terima kasih sudah berbelanja (>~<)"<<endl;
}

const float dc1=0; 
const float dc2=0.10;
const float dc3=0.125;
const float dc4= 0.15;

int main()
{
	system ("color A");
	int t_pembelian, discont, bayar;
	
	cout<<"\tTUGAS ALGORITMA"<<endl;

	batas();
	
	cout << "Total Belanja (minimal 5000 okeh!!): Rp. ";
	cin >> t_pembelian;

		if (t_pembelian <= 25000 && t_pembelian >= 5000){
		discont = t_pembelian * dc1;
		bayar = t_pembelian - discont;
		
		cout<<"Discount 0%"<<endl;
		cout<<"\nTotal Belanja		\t: Rp. "<<t_pembelian<<endl;
		cout<<"Diskon				: Rp. "<<discont<<endl;
		cout<<"Total Harus Bayar	\t: Rp. "<<bayar<<endl;
		batas();
		cout<<"Bayar				: Rp. "<<t_pembelian<<endl;
		cout<<"Kembalian			: Rp. "<<t_pembelian-bayar<<endl;
		batas();
	
	}else if (t_pembelian <= 50000 && t_pembelian >=25000){
		discont = t_pembelian * dc2;
		bayar = t_pembelian - discont;
		
		cout<<"Discount 10%"<<endl;
		cout<<"\nTotal Belanja		\t: Rp. "<<t_pembelian<<endl;
		cout<<"Diskon				: Rp. "<<discont<<endl;
		cout<<"Total Harus Bayar	\t: Rp. "<<bayar<<endl;
		batas();
		cout<<"Bayar				: Rp. "<<t_pembelian<<endl;
		cout<<"Kembalian			: Rp. "<<t_pembelian-bayar<<endl;
		batas();
		
	}else if (t_pembelian <= 100000 && t_pembelian >=50000){
		discont = t_pembelian * dc3;
		bayar = t_pembelian - discont;
		
		cout<<"Discount 12.5%"<<endl;
		cout<<"\nTotal Belanja		\t: Rp. "<<t_pembelian<<endl;
		cout<<"Diskon				: Rp. "<<discont<<endl;
		cout<<"Total Harus Bayar	\t: Rp. "<<bayar<<endl;
		batas();
		cout<<"Bayar				: Rp. "<<t_pembelian<<endl;
		cout<<"Kembalian			: Rp. "<<t_pembelian-bayar<<endl;
		batas();
		
	}else if (t_pembelian >= 100000){
		discont = t_pembelian * dc4;
		bayar = t_pembelian - discont;
		
		cout<<"Discount 15%"<<endl;
		cout<<"\nTotal Belanja		\t: Rp. "<<t_pembelian<<endl;
		cout<<"Diskon				: Rp. "<<discont<<endl;
		cout<<"Total Harus Bayar	\t: Rp. "<<bayar<<endl;
		batas();
		cout<<"Bayar				: Rp. "<<t_pembelian<<endl;
		cout<<"Kembalian			: Rp. "<<t_pembelian-bayar<<endl;
		batas();
		
	}else
		peringatan();
	
	
	ucapan();
	
	return 0;
}




	


