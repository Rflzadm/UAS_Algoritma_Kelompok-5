#include <iostream>
using namespace std ;

struct tiketkonser {
	string artis;
	string id ;
	int harga ;
	int stok ;
};

tiketkonser jadwalkonser[5] ;

void jadwal(){
	jadwalkonser[0] = {"g03", "perunggu" ,250 ,160000 } ;
	jadwalkonser[1] = {"r02", "NDX ", 2000, 2500000} ;
	jadwalkonser[2] = { "h01","cortis", 1500, 1700000 } ;
	jadwalkonser[3] = { "b05","bernadia", 3000, 3200000 } ;
	jadwalkonser[4] = { "k08","BALEE ", 450, 3200000 } ;
}

void tampiljadwal (){
	cout << "=== JADWAL KONSER ===" ;
	for (int i = 0; i < 5 ; i++){
		cout << "ID : "<<jadwalkonser[i].id;
		cout << "artis : "<<jadwalkonser[i].artis ;
		cout <<"strok : " <<jadwalkonser[i].stok ;
		cout <<"harga :Rp "<< jadwalkonser[i].harga<<"\n";
	}
}
