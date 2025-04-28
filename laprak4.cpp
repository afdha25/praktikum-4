#include <iostream>
using namespace std;

int main (){
	int a, b, batas, hasil;
	cout<<"Masukkan bilangan pertama: ";
	cin>>a;
	cout<<"Masukkan bilangan ke dua: ";
	cin>>b;
	cout<<"Masukkan batas total angka: ";
	cin>>batas;
	
	for(int i=1; i<=batas;i++){
		hasil=a+b;
		a=b;
		b=hasil;
		cout<<hasil;
		cout<<endl;
	}
	

}
