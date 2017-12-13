#include <iostream>
#include <string>
using namespace std;

void hitung(int hrg, int hari, string nama, string nm_mbl)
{
	int hrg_disc, tot;
	float disc;
	if(hari >= 7)
		{
			disc = 0.05;
		}
	else
		{
			disc = 0;
		}

	tot = hrg*hari;
	hrg_disc = disc*tot;

	cout<<"Nama Customer : "<<nama<<endl;
	cout<<"Jumlah Hari : "<<hari<<endl;
	cout<<"Mobil Yang Dipilih : "<<nm_mbl<<endl;
	cout<<"Total Harga : "<<tot<<endl;
	cout<<"Discount : Rp."<<hrg_disc<<endl;
	cout<<"Total Harga Yang Harus Dibayar : "<<tot-hrg_disc<<endl;
}

int main()
{
	int mbl, hari, tot_hrg, disc, tot_byr;
	std::string nm_mbl, nama;
	cout<<"[1] Toyota Innova | Rp.500.000/Hari"<<endl;
	cout<<"[2] Honda Mobilio | Rp.300.000/Hari"<<endl;
	cout<<"[3] Daihatsu Xenia | Rp.250.000/Hari"<<endl;
	cout<<"Sewa 7 Hari atau lebih discount 5%"<<endl;

	cout<<"Masukan Nama : ";
	getline(cin, nama);
	cout<<"Masukan pilihan mobil : ";
	cin>>mbl;
	cout<<"Jumlah Hari : ";
	cin>>hari;

	switch (mbl)
	{
		case 1:
			nm_mbl = "Toyota Innova";
			hitung(500000,hari, nama, nm_mbl);
		break;
		case 2:
			nm_mbl = "Honda Mobilio";
			hitung(300000,hari, nama, nm_mbl);
		break;
		case 3:
			nm_mbl = "Daihatsu Xenia";
			hitung(250000,hari, nama, nm_mbl);
		break;
		default:
			cout<<"Out Of Range"<<endl;
		break;
	}
}