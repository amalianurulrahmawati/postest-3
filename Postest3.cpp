#include <iostream>
using namespace std;
int main(){
	
	cout<<"Menentukan Keliling Dan Volume Tabung, ";
	cout<<"Masukan Jari Jari Tabung,";
	cout<<"Masukan Tinggi Tabung,";
	cout<<"Hasil Dari Volume Kubus Adalah";
	
	int jarijari,tinggi;
	jarijari = 25;
	tinggi = 66;
	
		
	cout<<"input keliling dan volume tabung";
	cin >> jarijari,tinggi;
	
	//input
	if (jarijari = 25){
		cout <<"Masukan Jari Jari Tabung :"<< 25<<endl;
	}
	if (tinggi = 66){
		cout <<"Masukan Tinggi Tabung :"<< 66<<endl;
		cout<<"Hasil Dari Volume Kubus Adalah "<< 3.14*jarijari*jarijari*tinggi<<endl;
	}
	else{
		cout <<"syntax error";
	}
	
	
	return 0;
	
}
