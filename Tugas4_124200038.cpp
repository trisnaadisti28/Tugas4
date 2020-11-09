#include <iostream>
using namespace std;
int main()
{   int n, n1, nn, m, m1, mn, opsi;
	char lagi;
	
	do {cout << " PERKALIAN & PERPANGKATAN===============" << endl;  
		cout << "1. Perkalian" <<endl;
		cout << "2. Perpangkatan" <<endl;
		cout << "Pilih : " ; cin >> opsi;
	  
	    switch (opsi){
			case 1:
			cout << "Input data N: "; cin >> n;
			cout << "Input data M: "; cin >> m;
			if (m>=0 && n>=0) {
				cout<<m;
				m1 = m;
				for (int i=1;i<n;i++) {
					cout<<" X "<<m;
					mn = m1 + m;
					m1 = mn;
				}
				cout<<" = "<<mn<<endl;
			} else {
				cout<<"Hanya bisa menghitung angka positif"<<endl;
			}
			
			break;
			
			case 2:
			cout << "Input data N: "; cin >> n;
			cout << "Input data M: "; cin >> m;
			if (n>=0 && m>=0) {
				cout<<n;
				n1 = n;
				for (int i=1;i<m;i++) {
					cout<<" X "<<n;
					nn = n1 * n;
					n1 = nn;
				}
				cout<<" = "<<nn<<endl;
			} else {
				cout<<"Hanya bisa menghitung angka positif"<<endl;
			}
			break;
		}
		cout<<"Apakah anda ingin menghitung lagi (Y/T) = ";cin>>lagi;
		cout<<endl;
}		
	while (lagi == 'Y' || lagi == 'y');
	cout<<"Terima Kasih :)"<<endl;

	system ("pause");
	cin.get();
	cin.get();
	return 0;
}
