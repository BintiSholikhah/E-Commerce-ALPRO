#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;

class Belanja{
	public :
		void Login();
		int Shopee();
		int Pesan();
    	void Struk();
  private:
    int saldo = 150000;
    string name, pass, barang, alamat, nama, tlp;
    int kembali, keranjang, pengiriman, metode, pembayaran, ekspedisi, total;
};

void Belanja::Login(){
	x:
	cout << "____________________\n";
	cout << "       LOGIN\n";
	cout << "____________________\n";
	cout << " User Name : ";
	cin >> name;
	cout << " Password  : ";
	cin >> pass;
	if(name != "Sarahhh" || pass != "Sarah123"){
		cout << endl << endl;
		cout << " Username & Password tidak terdeteksi\n";
		goto x;
	}
	else{
	}
}

int Belanja::Shopee(){
	y:
		cout << "=================================================================\n";
		cout << "                   MARKET PLACE : SHOPEE\n";
		cout << "=================================================================\n";
		cout << " SELAMAT DATANG Sarahhh\t\t\t Saldo : Rp " << saldo << endl;
		cout << " Cari Barang Kebutuhan Anda : ";
		cin >> barang;
		cout << endl;
		if (barang == "CaseHp"){
		}
   else{
    	cout << " Barang tidak ditemukan\n";
			cout << " Kembali tekan 1 : ";
			cin >> kembali;
			if(kembali==1){
				goto y;
			}
			else{
			}
		} 
  return 0;
  }
	
int Belanja::Pesan(){
	cout << "================================================================\n";
	cout << "                   TOKO CASE HP\n";
	cout << "================================================================\n";
	cout << " [1] CASE HP IPhone 6 plus \t Rp 20.000\n";
	cout << " [2] CASE HP IPhone 7 plus \t Rp 24.000\n";
	cout << " [3] CASE HP IPhone XR \t\t Rp 23.000\n";
	cout << " [4] CASE HP IPhone XR MAX \t Rp 20.000\n";
	cout << " [5] CASE HP IPhone 11 \t\t Rp 25.000\n";
	cout << endl << endl;
  string barang[5] = {" CASE HP IPhone 6 plus", " CASE HP IPhone 7 plus", " CASE HP IPhone XR", " CASE HP IPhone XR MAX", " CASE HP IPhone 11"};
	int harga[5] = {20000, 24000, 23000, 20000,25000};
	cout << endl;
	cout << "===============================================================\n";
	cout << "		                 	PEMESANAN\n";
	cout << "===============================================================\n";
z :
	cout << " Masukkan Keranjang : ";
	cin >> keranjang;
	int n;
	char tambah;
	float total;
	switch(keranjang){
		case 1:
			cout << barang[0] << endl;
			cout << " Jumlah Pembelian : ";
			cin >> n;
			total+=harga[0]*n;
			cout << " Tambah Barang? (y/n)  ";
			cin >> tambah;
			if(tambah == 'y'){
        cout << endl;
				goto z;
			}
			else{
			goto end;
			}
		case 2:
			cout << barang[1] << endl;
			cout << " Jumlah Pembelian : ";
			cin >> n;
			total+=harga[1]*n;
			cout << " Tambah Barang? (y/n)  ";
			cin >> tambah;
			if(tambah == 'y'){
				goto z;
			}
			else{
				goto end;
			}
		case 3:
			cout << barang[2] << endl;
			cout << " Jumlah Pembelian : ";
			cin >> n;
			total+=harga[2]*n;
			cout << " Tambah Barang? (y/n)  ";
			cin >> tambah;
			if(tambah == 'y'){
				goto z;
			}
			else{
				goto end;
			}
		case 4:
			cout << barang[3] << endl;
			cout << " Jumlah Pembelian : ";
			cin >> n;
			total+=harga[3]*n;
			cout << " Tambah Barang? (y/n)  ";
			cin >> tambah;
			if(tambah == 'y'){
				goto z;
			}
			else{
				goto end;
			}	
		case 5:
			cout << barang[4] << endl;
			cout << " Jumlah Pembelian : ";
			cin >> n;
			total+=harga[4]*n;
			cout << " Tambah Barang? (y/n)  ";
			cin >> tambah;
			if(tambah == 'y'){
				goto z;
			}
			else{
				goto end;
			}	
		}
end:		
			cout << " Total : " << total << endl;
			char diskon, ongkir;
			if(total >=25000){
				cout << endl;
				cout << " Klaim Voucher Diskon Toko 5000? (y/n) ";
				cin >> diskon;
				if(diskon =='y'){
					cout << " Total : " << total-5000;
				}
				else{
					cout << " Total : " << total;
				}
			cout << endl << endl;
			int ekspedisi;
			cout << "===============================================================\n";
			cout << "                        PENGIRIMAN\n";
			cout << "===============================================================\n";
			cout << " ALAMAT KOTA PENGIRIMAN : \n";
			cout << " [1] PULAU JAWA\n";
			cout << " [2] LUAR PULAU JAWA\n";
			cout << " Masukkan No Pengiriman : ";
			cin >> pengiriman;
			cin.ignore(100,'\n');
			switch (pengiriman){
				case 1:
					cout << endl;
					cout << "===============================================================\n";
					cout << "                   PENGIRIMAN PULAU JAWA\n";
					cout << "===============================================================\n";
					cout << " Nama   : ";
					cin.ignore(100,'\n');
					cout << " No Tlp : ";
					cin.ignore(100,'\n');
					getline(cin, tlp);
					cout << " Alamat : ";
					getline(cin, alamat);
					cout << "---------------------------------------------------------------\n";
					cout << "                       PEMILIHAN EKSPEDISI\n";
					cout << "---------------------------------------------------------------\n";
					cout << " [1] JNE Reguler (3-5 hari)                 Rp 14.000\n";
					cout << " [2] J&T Ekspress (2-3 hari)                Rp 20.000\n";  
					cout << " [3] Shopee Express Standard (4-6 hari)     Rp 14.000\n";
					cout << " \nEkspedisi yang anda pilih : ";
					cin >> ekspedisi;
					if(ekspedisi == 1){
						cout << "JNE Reguler\n";
						cout << "Rp 14.000\n";
            if(total>=40000){
						cout << " Klaim Voucher Gratis Ongkir  Min. Belanja Rp 40.000 (y/n) ";
						cin >> ongkir;
						cout << endl;
						if(ongkir =='y'){
							cout << " Total : " << total;
						}
						else{
							total = total+14000;
							cout << " Total : " << total;
						}
					}
					}
					if(ekspedisi == 2){
						cout << "J&T Ekspress\n";
						cout << "Rp 14.000\n";
            if(total>=40000){
						cout << " Klaim Voucher Gratis Ongkir  Min. Belanja Rp 40.000 (y/n) ";
						cin >> ongkir;
						cout << endl;
						if(ongkir =='y'){
							cout << " Total : " << total;
						}
						else{
							total = total+20000;
							cout << " Total : " << total;
						}
					}
					}
					if(ekspedisi == 3){
						cout << "Shopee Express Standard\n";
						cout << "Rp 14.000\n";
            if(total>=40000){
						cout << " Klaim Voucher Gratis Ongkir  Min. Belanja Rp 40.000 (y/n) ";
						cin >> ongkir;
						cout << endl;
						if(ongkir =='y'){
							cout << " Total : " << total;
						}
						else{
							total = total+14000;
							cout << " Total : " << total;
						}
					}
					}
					break;
				case 2:
					cout << endl;
					cout << "===============================================================\n";
					cout << "               PENGIRIMAN LUAR PULAU JAWA\n";
					cout << "===============================================================\n";
					cout << " Nama   : ";
					cin.ignore(100);
					getline(cin, nama);
					cout << " No Tlp : ";
					cin.ignore(100);
					getline(cin, tlp);
					cout << " Alamat : ";
					getline(cin, alamat);
			cout << "---------------------------------------------------------------\n";
					cout << "                       EKSPEDISI PENGIRIMAN\n";
					cout << "---------------------------------------------------------------\n";
					cout << " [1] JNE Reguler (3-5 hari)                 Rp 50.000\n";
					cout << " [2] J&T Ekspress (2-3 hari)                Rp 75.000\n";  
					cout << " [3] Shopee Express Standard (4-6 hari)     Rp 50.000\n";
					cout << " \nEkspedisi yang anda pilih : ";
					cout << ekspedisi;
					if(ekspedisi == 1){
						cout << "JNE Reguler\n";
						cout << "Rp 50.000\n";
            if(total>=40000){
						cout << " Klaim Voucher Gratis Ongkir  Min. Belanja Rp 40.000 (y/n) ";
						cin >> ongkir;
						cout << endl;
						if(ongkir =='y'){
							cout << " Total : " << total;
						}
						else{
							total = total+50000;
							cout << " Total : " << total;
						}
					}
					}
					if(ekspedisi == 2){
						cout << "J&T Ekspress\n";
						cout << "Rp 75.000\n";
            if(total>=40000){
						cout << " Klaim Voucher Gratis Ongkir  Min. Belanja Rp 40.000 (y/n) ";
						cin >> ongkir;
						cout << endl;
						if(ongkir =='y'){
							cout << " Total : " << total;
						}
						else{
							total = total+75000;
							cout << " Total : " << total;
						}
					}
					}
					if(ekspedisi == 3){
						cout << "Shopee Express Standard\n";
						cout << "Rp 50.000\n";
            if(total>=40000){
						cout << " Klaim Voucher Gratis Ongkir  Min. Belanja Rp 40.000 (y/n) ";
						cin >> ongkir;
						cout << endl;
						if(ongkir =='y'){
							cout << " Total : " << total;
						}
						else{
							total = total+50000;
							cout << " Total : " << total;
						}
					}
					}
					break;
      a:
        cout << "===============================================================\n";
        cout << "                  METODE PEMBAYARAN";
        cout << "===============================================================\n";
        cout << " [1] COD ( Cash on Delivery )";
        cout << " [2] Transfer Bank " ;
        cout << " [3] Alfamart ";
        cout<<  " [4] ShopeePay";
        cout << " Metode Pembayaran Anda : "; 
        cin >> metode;
        switch(metode){
          case 1: 
            cout << "COD ( Cash on Delivery )";
            break;
          case 2:
            cout << " Tranfer Bank (Dicek Otomatis)";
            break;
          case 3:
            cout << " Alfamart/Indomaret";
            break;
          case 4:
            cout << " ShopeePay";
            cout << " Saldo Anda : " << saldo;
            if(saldo>=total){
              cout << " Pembayaran Berhasil";
            }
            if(saldo<total){
              cout << " Saldo Anda tidak mencukupi";
              cout << " Lanjutkan Pembayaran? (y/n) ";
              cin >> pembayaran;
              if(pembayaran == 1){
                goto a;
              }
            else{
              cout << " Pembayaran Dibatalkan";
            }
		}
     }
  }
  return 0;
	}
}
void Belanja::Struk(){
ofstream sarah ("struk.txt");
        if (!sarah.is_open()){
          cout << " Tidak Bisa Membuka File";
        }
        else{
          	sarah << "===============================================================\n";
    			  sarah << "                       STRUK\n";
    				sarah << "===============================================================\n";
    				sarah << " Nama       : " << nama << endl;
    				sarah << " No Tlp     : " << tlp << endl;
    				sarah << " Alamat     : " << alamat << endl;
    				sarah << " Ekspedisi  : " << ekspedisi << endl;
            		sarah << " Total      : " << total << endl;
            		sarah << "===============================================================\n";
        }
}	
int main(){
	Belanja Sarah;
	Sarah.Login();
	Sarah.Shopee();
	Sarah.Pesan();
	Sarah.Struk();
	return 0;
}
