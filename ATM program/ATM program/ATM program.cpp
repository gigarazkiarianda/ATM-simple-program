#include <iostream>
using namespace std;

int main() {
	int menu;
	int saldo = 0;
	int nominal;
	do {
		cout << "Program ATM" << endl;
		cout << endl;
		cout << "1. Setor" << endl;
		cout << "2. Tarik" << endl;
		cout << "3. Cek Saldo" << endl;
		cout << "0. Keluar" << endl;
		cout << "Pilih: ";
		cin >> menu;
		switch (menu)
		{
		case 1:
			cout << "Setor nominal" << endl;
			cout << "Masukkan nominal: ";
				cin >> nominal;
			saldo = saldo + nominal;
			break;

		case 2:
			cout << "Tarik nominal" << endl;
			cout << "Masukkan nominal: ";
			cin >> nominal; 
			saldo = saldo - nominal;
			break;

		case 3:
			cout << "Saldo:  " << saldo << endl;
			break;

		case 0: 
			cout << "Keluar" << endl;
			break;
		}
	} while (menu != 0);
	return 0;
}
	
