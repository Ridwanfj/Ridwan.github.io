#include<iostream>
using namespace std;
int main(){
	int N;
	cout<<"Masukkan bilangan ganjil : ";
	cin>>N;
	while (N>=1){
		if(N%2==1){
			cout<<N<<"\n";
		}
		N--;
	}
	
}
