#include<iostream>
using namespace std;
int main(){
	int N;
	int M=1;
	cout<<"Cetak bilangan dari 1 sampai : ";
	cin>>N;
	while(N>=1){
		cout<<M<<"\n", M+=2;
		N--;
	}
}
