#include <iostream>
using namespace std;

class SatuD_DuaD{
    public:
    string a[40];
    string b[40];
    string c[20][20];
    string e[20][20];
    int baris = 3;
    int kolom = 5;
    int f = 0;
    int g = 0;
    int n = 15;

    void input(){
	    cout<<"Masukkan Id dan Nama Karyawan.\n"<<endl;
      for(int i = 0; i < n; i++){
			  cout<<" Id Karyawan ke-"<<i + 1<<"   : ";
			  getline(cin, a[i]);
        cout<<" Nama Karyawan ke-"<<i + 1<<" : ";
			  getline(cin, b[i]);
			  cin.ignore();
		  }
    }

    void proses(){
      for(int i = 0; i < baris; i++){
        for(int j = 0; j < kolom; j++){
          c[i][j] = a[f];
          f++;
        }
      }
      for(int i = 0; i < baris; i++){
        for(int j = 0; j < kolom; j++){
          e[i][j] = b[g];
          g++;
        }
      }
    }

    void output(){
      cout<<"-----------------------------------------------------\n";
      cout<<"| Departemen | Id Karyawan | Nama Karyawan          |\n";
      cout<<"-----------------------------------------------------\n";
      for(int i=0;i < baris;i++){
        for(int j=0;j < kolom;j++){
          if(i == 0 && j == 0){
            cout<<"| Kesehatan  | "<<c[i][j]<<"         | "<<e[i][j];
            cout<<endl;
          }else if(i == 0 && j > 0){
            cout<<"|            | "<<c[i][j]<<"         | "<<e[i][j];
            cout<<endl;
          }else if(i == 1 && j == 0){
            cout<<"-----------------------------------------------------\n";
            cout<<"| Teknologi  | "<<c[i][j]<<"         | "<<e[i][j];
            cout<<endl;
          }else if(i == 1 && j > 0){
            cout<<"|            | "<<c[i][j]<<"         | "<<e[i][j];
            cout<<endl;
          }else if(i == 2 && j == 0){
            cout<<"-----------------------------------------------------\n";
            cout<<"| Pangan     | "<<c[i][j]<<"         | "<<e[i][j];
            cout<<endl;
          }else if(i == 2 && j > 0){
            cout<<"|            | "<<c[i][j]<<"         | "<<e[i][j];
            cout<<endl;
          }
        }
      }
      cout<<"-----------------------------------------------------\n";
    }
};


int main() {
  SatuD_DuaD obj;
  obj.input();
  obj.proses();
  obj.output();
  return 0;
}