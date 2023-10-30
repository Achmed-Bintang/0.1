#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>

using namespace std;

int main()
{	
Awal:
	//Daftar Menu Utama

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

	cout << char(186) << setw (31) << "1. Magelangan       Rp.15.000" << setw(3) << char(186) << setw(27) << "1. Es Extrajoos       Rp.15.000" << setw(3) << char(186) << endl;
	cout << char(186) << setw (31) << "2. Nasi Goreng      Rp.15.000" << setw(3) << char(186) << setw(21) << "2. Es Teh             Rp.15.000" << setw(3) << char(186) << endl;
	cout << char(186) << setw (31) << "3. Nasi Telur       Rp.15.000" << setw(3) << char(186) << setw(23) << "3. Es Jeruk           Rp.15.000" << setw(3) << char(186) << endl;
	cout << char(186) << setw (31) << "4. Nasi Ayam        Rp.15.000" << setw(3) << char(186) << setw(19) << "4. Kopi               Rp.15.000" << setw(3) << char(186) << endl;
	
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
			harga = 10000;  break;

		case 2:
			harga = 8000;   break;

		case 3:
			harga = 7000; break;

		case 4:
			harga = 7000;   break;

		case 5:
			harga = 12000;  break;
		}
		cout << "Jumlah Pesanan : ";
		cin >> jumlahpesanan;

		total = jumlahpesanan * harga;
		semuamakanan = semuamakanan + total;
	}

	cout << endl << "Total Semua Makanan : " << semuamakanan << endl;
	cout << "**************************************" << endl;

	cout << "Banyak Minuman Yang Akan Dipesan :";  cin >> jumlahminuman;  cout << endl;
	for (int i = 1; i <= jumlahminuman; i++)
	{
		cout << "Masukan Nomor Minuman " << i << " : ";  cin >> nomorminuman;

		switch (nomorminuman)
		{
		case 1:
			harga = 7000;  break;

		case 2:
			harga = 5000;  break;

		case 3:
			harga = 4000;  break;

		case 4:
			harga = 3000;  break;

		case 5:
			harga = 500;   break;
		}
		cout << "Jumlah pesanan :";        cin >> jumlahpesanan;

		total = jumlahpesanan * harga;
		semuaminuman = semuaminuman + total;
	}
	cout << endl << "Total Semua Minuman :" << semuaminuman << endl;
	cout << "*************************************" << endl << endl;

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

	cout << char(186) << setw(31) << "1. Telur             Rp.15.000" << setw(3) << char(186) << endl;
	cout << char(186) << setw(31) << "2. Cabe Level 1      Rp.15.000" << setw(3) << char(186) << endl;
	cout << char(186) << setw(31) << "3. Cabe Level 2      Rp.15.000" << setw(3) << char(186) << endl;
	cout << char(186) << setw(31) << "4. Cabe Level 3      Rp.15.000" << setw(3) << char(186) << endl;
	
	cout << char(211);
	for (int x = 0; x < 33; x++) {
		cout << char(196);
	}
	cout << char(189) << endl;

	//Input Pesanan Tambahan

	int jumlahtambahan, nomortambahan, semuatambahan = 0, pesan;

	cout << "Banyak Tambahan Yang Akan Dipesan :";  cin >> jumlahtambahan;  cout << endl;
	for (int i = 1; i <= jumlahtambahan; i++)
	{
		cout << "Masukan Nomor Tambahan " << i << " : ";  cin >> nomortambahan;

		switch (nomortambahan)
		{
		case 1:
			harga = 7000;  break;
	
		case 2:
			harga = 5000;  break;

		case 3:
			harga = 4000;  break;

		case 4:
			harga = 3000;  break;

		case 5:
			harga = 500;   break;
		}
		cout << "Jumlah pesanan :";        cin >> jumlahpesanan;

		total = jumlahpesanan * harga;
		semuatambahan = semuatambahan + total;
	}
	cout << "Ditambah Pada Pesanan Keberapa?";
	cin >> pesan;
	cout << endl << "Total Semua Tambahan :" << semuatambahan << endl;\
	
	//Output Pesanan

	// Akhir Program.

	char yt;

	cout << "Ada Lagi Yang Bisa Dibantu  (Y/T) ?";   
	cin >> yt;

	if (yt == 'Y' || yt == 'y') { goto Awal; }      if (yt == 'T' || yt == 't') { goto Akhir; }

Akhir:

	cout << endl << "-------------------------------------" << endl;
	cout << ">>> Terimakasih Telah Mengunjungi <<<" << endl;
	cout << ">>>>>>> RESTORAN BOCIL FF <<<<<<<" << endl;
	cout << "-------------------------------------" << endl << endl;

	system("pause");

	return 0;
}
