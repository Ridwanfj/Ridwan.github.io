#include<iostream>
using namespace std;
int main(){
	float n,m,p,q;
	float luas1,luas2;
	float selisih;
	cin>>n;
	cin>>m;
	cin>>p;
	cin>>q;
	luas1 =n*m/2;
	luas2=p*q/2;
	selisih=luas2-luas1;
	if (luas1>=luas2){
	cout<<"0";}
	else if (luas1<luas2){
		cout<<selisih;
	}
	
	
	
}

