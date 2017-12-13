#include <iostream>
using namespace std;

void hit(int hrg){
	int jml;
	int tot;

	cout<<"Masukan Jumlah yg akan dipesan : ";
	cin>>jml;
	tot = jml*hrg;
	cout<<"Total Harga : "<<tot<<endl;
}

int main(){
	int pil;

	cout<<" Daftar Menu & Harga "<<endl;
	cout<<"[1] Milo | Rp. 10.000"<<endl;
	cout<<"[2] Kopi | Rp. 5.000"<<endl;
	cout<<"[3] Cola Cola | Rp. 2500"<<endl;
	cout<<"[4] Jus Orange | Rp. 2000"<<endl;
	cout<<"Pilih No.Berapa ?? : ";
	cin>>pil;

	switch(pil){
		case 1 :
			hit(10000);
		break;
		case 2 :
			hit(5000);
		break;
		case 3 :
			hit(2500);
		break;
		case 4 :
			hit(2000);
		break;
		default:
			cout<<"out of range";
		break;
	}
}