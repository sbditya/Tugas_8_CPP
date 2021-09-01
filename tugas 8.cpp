#include <iostream>

using namespace std; 

int main(){
	int x;
	cout<<"Inputkan Nilai X : ";
	cin>>x;
	
	switch(x){
		case 10000:
			cout<<"Sepuluh ribu rupiah";
			break;
		case 20000:
			cout<<"Dua puluh ribu rupiah";
			break;
		case 30000:
			cout<<"Tiga puluh ribu rupiah";
			break;
		case 40000:
			cout<<"Empat puluh ribu rupiah";
			break;
		case 50000:
			cout<<"Lima puluh ribu rupiah";
			break;
		default:
		cout<<"Tidak terdaftar dalam program";
	}
}
