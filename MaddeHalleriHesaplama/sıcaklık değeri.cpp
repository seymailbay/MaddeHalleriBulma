#include <iostream>
using namespace std;
main(){
	int sicaklik;
	cout << "Sicaklik degerini giriniz";
	cin >> sicaklik;
	if (sicaklik < 0){
		cout << " kati";
	}
	else if (sicaklik < 100 ) {
		cout << "Sivi";
	}
	else {
		cout << "Gaz";
	}
}
