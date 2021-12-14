#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
int main(){
	char nama [30];
	int jumlah,harga,harga_total1,harga_total2,uang,kembali1,kembali2,no_meja,minuman,jumlah_minum;
	cout<<"\t\t ==============================================="<<endl;
	cout<<"\t\t|     	Daftar Minuman AMIKOM COFFE SHOP        |"<<endl;
	cout<<"\t\t ==============================================="<<endl;
	cout<<" 1. Espresso		 :Rp. 15.000,00\n 2. Latte		 :Rp. 19.000,00\n 3. Americano	    	 :Rp. 21.000,00\n 4. Cold Brew		 :Rp. 17.000,00\n 5. Iced Coffee Latte	 :Rp. 23.000,00"<<endl;
	cout<<"\t\t   ==========================================="<<endl;
	cout<<"\t\t  |*   *   *	   Order Menu     *   *   *   |"<<endl;
	cout<<"\t\t   ==========================================="<<endl;
	cout<<"Masukan Nama     : ";gets(nama);
	cout<<"Nomor Minuman    : ";cin>>minuman;
	cout<<"Jumlah Minuman   : ";cin>>jumlah_minum;
	cout<<"Jumlah Uang      : ";cin>>uang;
	cout<<"Nomor Meja       : ";cin>>no_meja;
	cout<<"==============================================================="<<endl;

	if(minuman==1 && uang>=jumlah_minum*15000){
		cout<<"Nama             : "<<nama<<endl;
		cout<<"Jenis Minuman    : Espresso"<<endl;
		cout<<"Jumlah pesanan   : "<<jumlah_minum<<endl;
		cout<<"Nomor Meja       : "<<no_meja<<endl;
		cout<<"Harga            : Rp. 15.000,00"<<endl;
		cout<<"Total            : "<<jumlah_minum*15000<<endl;
		cout<<"Jumlah Uang      :Rp.  "<<uang<<endl;
		cout<<"Jumlah Kembali   : "<<(uang-(jumlah_minum*15000))<<endl;
	}
	else if(minuman==2 && uang>=jumlah_minum*19000){
		cout<<"Nama             : "<<nama<<endl;
		cout<<"Jenis Minuman    : Latte"<<endl;
		cout<<"Jumlah pesanan   : "<<jumlah_minum<<endl;
		cout<<"Nomor Meja       : "<<no_meja<<endl;
		cout<<"Harga            : Rp. 19.000,00"<<endl;
		cout<<"Total            : "<<(jumlah_minum*19000)<<endl;
		cout<<"Jumlah Uang      :Rp. "<<uang<<endl;
		cout<<"Jumlah Kembali   : "<<(uang-(jumlah_minum*19000))<<endl;
	}
	else if(minuman==3 && uang>=jumlah_minum*21000){
		cout<<"Nama             : "<<nama<<endl;
		cout<<"Jenis Minuman    : Americano"<<endl;
		cout<<"Jumlah pesanan   : "<<jumlah_minum<<endl;
		cout<<"Nomor Meja       : "<<no_meja<<endl;
		cout<<"Harga            : Rp. 21.000,00"<<endl;
		cout<<"Total            : "<<(jumlah_minum*21000)<<endl;
		cout<<"Jumlah Uang      :Rp.  "<<uang<<endl;
		cout<<"Jumlah Kembali   : "<<(uang-(jumlah_minum*21000))<<endl;
	}
	else if(minuman==4 && uang>=jumlah_minum*17000){
		cout<<"Nama             : "<<nama<<endl;
		cout<<"Jenis Minuman    : Cold Brew"<<endl;
		cout<<"Jumlah pesanan   : "<<jumlah_minum<<endl;
		cout<<"Nomor Meja       : "<<no_meja<<endl;
		cout<<"Harga            : Rp. 17.000,00"<<endl;
		cout<<"Total            : "<<(jumlah_minum*17000)<<endl;
		cout<<"Jumlah Uang      :Rp. "<<uang<<endl;
		cout<<"Jumlah Kembali   : "<<(uang-(jumlah_minum*17000))<<endl;
	}
	else if(minuman==5 && uang>=jumlah_minum*23000){
		cout<<"Nama             : "<<nama<<endl;
		cout<<"Jenis Minuman    : Iced Coffee Latte"<<endl;
		cout<<"Jumlah pesanan   : "<<jumlah_minum<<endl;
		cout<<"Nomor Meja       : "<<no_meja<<endl;
		cout<<"Harga            : Rp. 23.000,00"<<endl;
		cout<<"Total            : "<<(jumlah_minum*23000)<<endl;
		cout<<"Jumlah Uang      :Rp.  "<<uang<<endl;
		cout<<"Jumlah Kembali   : "<<(uang-(jumlah_minum*23000))<<endl;
	}
	else{
		cout<<"Uang, Tidak mencukupi";
	}

	
	  
}

