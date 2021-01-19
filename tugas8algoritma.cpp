#include<iostream>
using namespace std;
void batas(){
	cout<<"--------------------------------"<<endl;
}
int main()
{
cout<<"\t\t\t\tTUGAS 8 MEMBUAT SETENGAH SEGITIGA"<<endl;
batas();
cout<<"Nama	: Mochamad Sopain Hidayat"<<endl;
cout<<"NPM	: 20.14.1.0033"<<endl;
cout<<"Kelas: C"<<endl;
batas();
system ("color 6");
	int n;
	cout<<"Masukan Jumlah Setengah pyramid : ";
	cin>>n;	
	{
		cout<<"pyramid\n";
	}
batas();	
	for(int i = 1; i <= n; i++){
	for (int j = 1; j<= i; j++){
			cout<<"#";
		}
		
		cout<<endl;
		
	}
	
	return 0;	
}
