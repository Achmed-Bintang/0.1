#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>

using namespace std;

int main()
{	
	//Daftar Menu Utama

Awal:

	cout << setw(40) << "Daftar Menu" << endl;

	cout << char(214);
	for (int x = 0; x < 33; x++) {
		cout << char(196);
	}
	cout << char(210);
	for (int x = 0; x < 33; x++) {
		cout << char(196);
	}
	cout << char(183) << endl;

	cout << char(186) << setw(20) << "Makanan" << setw(14) << char(186) << setw(20) << "Minuman" << setw(14) << char(186) << endl;

	cout << char(204);
	for (int x = 0; x < 33; x++) {
		cout << char(205);
	}
	cout << char(206);
	for (int x = 0; x < 33; x++) {
		cout << char(205);
	}
	cout << char(185) << endl;

	cout << char(186) << setw (31) << "1. Magelangan       Rp.11.000" << setw(3) << char(186) << setw(31) << "1. Es Extrajoos       Rp.6.000" << setw(3) << char(186) << endl;
	cout << char(186) << setw (30) << "2. Nasi Goreng      Rp.9.500" << setw(4) << char(186) << setw(31) << "2. Es Teh             Rp.3.000" << setw(3) << char(186) << endl;
	cout << char(186) << setw (30) << "3. Nasi Telur       Rp.8.000" << setw(4) << char(186) << setw(31) << "3. Es Jeruk           Rp.3.500" << setw(3) << char(186) << endl;
	cout << char(186) << setw (31) << "4. Nasi Ayam        Rp.10.000" << setw(3) << char(186) << setw(31) << "4. Kopi               Rp.3.000" << setw(3) << char(186) << endl;
	
	cout << char(211);
	for (int x = 0; x < 33; x++) {
		cout << char(196);
	}
	cout << char(208);
	for (int x = 0; x < 33; x++) {
		cout << char(196);
	}
	cout << char(189) << endl;

	//Input Pesanan Utama

	int jumlahmakanan, nomormakanan, harga, jumlahpesanan, total, semuamakanan = 0;
	int jumlahminuman, nomorminuman, semuaminuman = 0;

	cout << "Banyak Makanan Yang Akan Dipesan :";  
	cin >> jumlahmakanan;  cout << endl;

	for (int i = 1; i <= jumlahmakanan; i++)
	{
		cout << "Masukan Nomor Makanan " << i << " :";
		cin >> nomormakanan;

		switch (nomormakanan)
		{
		case 1:
			harga = 11000;  
			break;

		case 2:
			harga = 9500;  
			break;

		case 3:
			harga = 8000;
			break;

		case 4:
			harga = 10000;   
			break;

		default :
			harga = 0;
			cout << "test";
		}
		cout << "Jumlah Pesanan : ";
		cin >> jumlahpesanan;

		total = jumlahpesanan * harga;
		semuamakanan = semuamakanan + total;
	}

	cout << endl << "Total Semua Makanan : " << semuamakanan << endl;
	cout << "**************************************" << endl;

	cout << "Banyak Minuman Yang Akan Dipesan :"; 
	cin >> jumlahminuman;  cout << endl;

	for (int i = 1; i <= jumlahminuman; i++)
	{
		cout << "Masukan Nomor Minuman " << i << " : ";  
		cin >> nomorminuman;

		switch (nomorminuman)
		{
		case 1:
			harga = 6000;  break;

		case 2:
			harga = 3000;  break;

		case 3:
			harga = 3500;  break;

		case 4:
			harga = 3000;  break;

		default:
			harga = 0;
			cout << "test";
		}
		cout << "Jumlah pesanan :";       
		cin >> jumlahpesanan;

		total = jumlahpesanan * harga;
		semuaminuman = semuaminuman + total;
	}
	cout << endl << "Total Semua Minuman :" << semuaminuman << endl;
	
	//Daftar Menu Tambahan

	cout << char(214);
	for (int x = 0; x < 33; x++) {
		cout << char(196);
	}
	cout << char(183) << endl;

	cout << char(186) << setw(25) << "Tambahan Pesanan" << setw(9) << char(186) << endl;

	cout << char(204);
	for (int x = 0; x < 33; x++) {
		cout << char(205);
	}
	cout << char(185) << endl;

	cout << char(186) << setw(31) << "1. Telur             Rp.2.500" << setw(3) << char(186) << endl;
	cout << char(186) << setw(27) << "2. Cabe Level 1      Rp.0" << setw(7) << char(186) << endl;
	
	cout << char(211);
	for (int x = 0; x < 33; x++) {
		cout << char(196);
	}
	cout << char(189) << endl;

	//Input Pesanan Tambahan

	string tambahan;
	int harga1, harga2, jumlahtambahan, total1 = 0, total2 = 0, pesan1, pesan2, semuatambahan;
	char yt;

	while (1) {
		cout << "Masukan Nomor Tambahan :";
		cin >> tambahan;

		if (tambahan == "1") {
			cout << "Anda Menambahkan telur sebanyak" << endl;
			cin >> jumlahtambahan;
			harga1 = 2500;
			total1 = jumlahtambahan * harga1;
			break;
		}
		else if (tambahan == "2") {
			cout << "Anda Menambahkan Cabe Sebanyak" << endl;
			cin >> jumlahtambahan;
			harga1 = 0;
			total1 = jumlahtambahan * harga1;
			break;
		}
		else {
			cout << "Menu Tidak Tersedia, Silahkan Masukan ulang" << endl;
		}

	}
	cout << "Harga tambahan :" << total1 << endl;
	cout << "Pemesanan Ditambahkan Pada Nomor Makanan :";
	cin >> pesan1;

	cout << "Ada Tambahan Lagi (Y/T) ?";
	cin >> yt;
	if (yt == 'Y' || yt == 'y') { goto awal; }      if (yt == 'T' || yt == 't') { goto akhir; }

awal:

	while (1) {
		cout << "Nomor Tambahan :";
		cin >> tambahan;

		if (tambahan == "1") {
			cout << "Anda Menambahkan telur sebanyak" << endl;
			cin >> jumlahtambahan;
			harga2 = 2500;
			total2 = jumlahtambahan * harga2;
			break;
		}
		else if (tambahan == "2") {
			cout << "Anda Menambahkan Cabe Sebanyak" << endl;
			cin >> jumlahtambahan;
			harga2 = 0;
			total2 = jumlahtambahan * harga2;
			break;
		}
		else {
			cout << "Menu Tidak Tersedia, Silahkan Masukan ulang" << endl;
		}

	}
	semuatambahan = total1 + total2 ;

	cout << "Harga tambahan :" << semuatambahan << endl;
	cout << "Pemesanan Ditambahkan Pada Npmor Makanan :";
	cin >> pesan2;

	cout << "Ada Tambahan Lagi (Y/T) ?";
	cin >> yt;
	if (yt == 'Y' || yt == 'y') { goto awal; }      if (yt == 'T' || yt == 't') { goto akhir; }

	//Output Pesanan

akhir:

	int pembayaran, bayar, kembalian;
	pembayaran = semuamakanan + semuaminuman + total1 + total2;

	while (1) {
		cout << "Total Harga Yang Harus Anda Bayar : Rp " << pembayaran;
		cout << endl;
		cout << "Masukan Uang Pembayaran :";
		cin >> bayar;

		if (bayar >= pembayaran) {
			cout << "kembaliannya :" << bayar - pembayaran;
			cout << endl;
			break;
		}
		else {
			cout << "Uang Anda Kurang, Silahkan Ulangi" << endl;
		}
	}

	// Akhir Program.

	cout << "Ada Lagi Yang Bisa Dibantu  (Y/T) ?";   
	cin >> yt;

	if (yt == 'Y' || yt == 'y') { goto Awal; }      if (yt == 'T' || yt == 't') { goto Akhir; }

Akhir:

	cout << char(218);
	for (int x = 0; x < 33; x++) {
		cout << char(196);
	}
	cout << char(191) << endl;

	cout << char(179) << setw(31) << "TERIMAKASIH TELAH MENGUNJUNGI" << setw(3) << char(179) << endl;
	cout << char(179) << setw(23) << "RESTORAN KAMI" << setw(11) << char(179) << endl;

	cout << char(192);
	for (int x = 0; x < 33; x++) {
		cout << char(196);
	}
	cout << char(217) << endl;

	system("pause");

	return 0;
}
