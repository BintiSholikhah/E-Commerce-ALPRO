#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	string nama, pass;
x:
	cout << endl;
	cout << "--------------------\n";
	cout << "       LOGIN\n";
	cout << "--------------------\n";
	cout << " User Name : ";
	cin >> nama;
	cout << " Password  : ";
	cin >> pass;
	if(nama != "Sarahhh" || pass != "Sarah123"){
		cout << endl << endl;
		cout << " Username & Password tidak terdeteksi\n";
		goto x;
	}
	else{
	    system("cls");
	y:
		cout << "=================================================================\n";
		cout << "                   MARKET PLACE : SHOOPE\n";
		cout << "=================================================================\n";
		cout << " SELAMAT DATANG Sarahhh\t\t\t Saldo : Rp 45.000\n";
		cout << " Cari Barang Kebutuhan Anda : ";
		string barang;
		cin >> barang;
		cout << endl;
		if (barang == "Case Hp" || barang == "case hp" || barang == "CASE HP"){
			cout << " Barang tidak ditemukan\n";
			cout << " Kembali tekan 1 : ";
			int kembali;
			cin >> kembali;
			if(kembali==1){
				goto y;
			}
			else;
		}
		else{
			system("cls");
			cout << "================================================================\n";
			cout << "                   TOKO CASE HP\n";
			cout << "================================================================\n";
			cout << " [1] CASE HP IPhone 6 plus \t Rp 20.000\n";
			cout << " [2] CASE HP IPhone 7 plus \t Rp 24.000\n";
			cout << " [3] CASE HP IPhone XR \t\t Rp 23.000\n";
			cout << " [4] CASE HP IPhone XR MAX \t Rp 20.000\n";
			cout << " [5] CASE HP IPhone 11 \t\t Rp 25.000\n";
			string barang[5] = {" CASE HP IPhone 6 plus", " CASE HP IPhone 7 plus", " CASE HP IPhone XR", " CASE HP IPhone XR MAX", " CASE HP IPhone 11"};
			int harga[5] = {20000, 24000, 23000, 20000,25000};
			cout << endl << endl;
z:
			cout << endl;
			cout << "===============================================================\n";
			cout << "			PEMESANAN\n";
			cout << "===============================================================\n";
			cout << " Masukkan Keranjang : ";
			int keranjang;
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
			cout << "===============================================================\n";
			cout << "                        PENGIRIMAN\n";
			cout << "===============================================================\n";
			cout << " ALAMAT KOTA PENGIRIMAN : \n";
			cout << " [1] PULAU JAWA\n";
			cout << " [2] LUAR PULAU JAWA\n";
			cout << " Masukkan No Pengiriman : ";
			int pengiriman;
			cin >> pengiriman;
			cin.ignore(100,'\n');
			string alamat, nama, tlp;
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
					cout << " Ongkir : Rp 20.000\n";
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
					cout << " Ongkir : Rp 30.000\n";
					if(total>=40000){
						cout << " Klaim Voucher Gratis Ongkir Min. Belanja Rp 40.000 (y/n) ";
						cin >> ongkir;
						cout << endl;
						if(ongkir =='y'){
							cout << " Total : " << total;
						}
						else{
							total = total + 30000;
							cout << " Total : " << total;
						}
					}
					break;
				}
				
			}
		}
	}
}
