#include <iostream>
using namespace std;

struct spbu{
//		int lite = 7000;
//		int max = 9000;
		int liter;
		int total_harga;
		string jenis;
		char nama[50];
		
}sp;

class proses{
	public:
		void input(int n);

		void output();
}pro;

void proses::input(int n){
	cin.ignore();
	cout << "Masukan Nama : ";
	cin.getline(sp.nama,50);
	cout << "Masukan Jumlah Liter : ";
	cin >> sp.liter;
	sp.total_harga = sp.liter*n;
	pro.output();
	
}

void proses::output(){
	
	system("cls");
	cout << "==============================" 	<<endl;
	cout << "-=|       STRUK SPBU       |=-" 	<<endl;
	cout << "==============================" 	<<endl;
	cout << "||                          " 		<<endl;
	cout << "|| Nama   : " << sp.nama 			<<endl;
	cout << "||                          " 		<<endl;
	cout << "|| Jenis  : " << sp.jenis 			<<endl;
	cout << "||                          " 		<<endl;
	cout << "|| Jumlah : " << sp.liter <<" liter"<<endl;
	cout << "||                          " 		<<endl;
	cout << "|| Harga  : Rp " << sp.total_harga <<endl;
	cout << "||                          " 		<<endl;
	cout << "==============================" 	<<endl<<endl;
}

int main(){
	int pilih;
	cout << "==============================" <<endl;
	cout << "-=| Selamat Datang di SPBU |=-" <<endl;
	cout << "==============================" <<endl;
	cout << "||                          ||" <<endl;
	cout << "|| 1. Pertalite 7000/liter  ||" <<endl;
	cout << "||                          ||" <<endl;
	cout << "|| 2. Pertamax 9000/liter   ||" <<endl;
	cout << "||                          ||" <<endl;
	cout << "==============================" <<endl<<endl;
	cout << "Masukan Pilihan : ";
	cin >> pilih;
	if(pilih==1){
		sp.jenis="Pertalite";
		pro.input(7000);
	}
	else if(pilih==2){
		sp.jenis="Pertamax";
		pro.input(9000);
	}
	
}
