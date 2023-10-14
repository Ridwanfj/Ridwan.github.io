#include<iostream>
using namespace std;

int main() {
    int test;
    int a;
    cin >> a;
    
    
    float results[a];
    
    for (test = 0; test < a; test++) {
        float x1, x2;
        cin >> x1 >> x2;
        float sum = x1 + x2;
        

        results[test] = sum;
    }
    
    
    for (test = 0; test < a; test++) {
        cout << results[test] << "\n";
    }
    
    return 0;
}
//tanpa array
//#include<iostream>
//using namespace std;
//int main(){
//int test;
//int a;
//float sum=0;
//cin>>a;
//for(float x1,x2;test<a;test++){
//	cin>>x1>>x2;
//	sum=x1+x2;
//	cout<<sum<<"\n";
//}
//return 0;
//}
