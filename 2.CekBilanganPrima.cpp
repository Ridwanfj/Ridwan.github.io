#include <iostream>
using namespace std;
int main(){
	int angka1;
    cout<<"Masukkan angka bulat : ";
    cin>>angka1;
    
    if ( angka1 <= 1) {
    cout<<"Bukan bilangan Prima";
	} else{
	int angka2;
    for (angka2 = 2; angka2<angka1; angka2++) {
    	if(angka1 % angka2==0){
      cout<<"Bukan Bilangan Prima"<<endl;;
      break;
	  }
 	}
	  if (angka2 == angka1){
	  	cout<<"bilangan prima";
	  }
	  
}
return 0;
	  }







