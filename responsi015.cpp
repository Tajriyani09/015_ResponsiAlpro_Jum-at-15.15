#include<iostream>
#include<string>
using namespace std;

string Validusername = "mhs";
string Validpassword ="1994";

void login(){
	string username, password;
	cout<<"Halaman Login"<<endl;
	cout<<"Masukkan Username : ";
	cin>>username;
	cout<<"Masukkan Password : ";
	cin>>password;
	
	if(username == Validusername && password == Validpassword){
		cout<<"Anda telah berhasil login"<<endl;
	}else {
		cout<<"gagal login";
	}
}

void ruang_kelas(){
	string kapasitas, lokasi, fasilitas;
	cout<<"kapasitas : ";
	cin>>kapasitas;
	cout<<"Lokasi : ";
	cin>>lokasi;
	cout<<"Fasilitas : ";
	cin>>fasilitas;
	

}
int main (){
	int pilihan, tambah;
	//int mhs;
	//string pass = 0;
	cout<<"======SIMERU UAD======="<<endl;
	cout<<"1. Login : "<<endl;
	cout<<"2. Keluar : "<<endl;
	cin>>pilihan;
	
	if (pilihan == 1){
		login();
	}
	if (pilihan == 2){
		cout<<"anda berhasil keluar"<<endl;
	}
	cout<<"Halaman Admin"<<endl;
	cout<<"Ruang kelas"<<endl;
	cout<<"1. Kapasitas : "<<endl;
	cout<<"2. Lokasi : "<<endl;
 	cout<<"3. Fasilitas : "<<endl;
 	cout<<"4. Tambah Ruang Kelas : ";
 	cin>>tambah;
 	cout<<"Mohon maaf Admin sedang libur, jadi belum bisa diproses";
 
}
