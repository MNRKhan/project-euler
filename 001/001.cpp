#include <iostream>


using namespace std;


// returns degree 1 ap summation of n
unsigned long int faulhaber_1(unsigned long int n){
	return n*(n+1)/2;
}


int main(){
	int t;
	cin>>t;
	for(int a0=0;a0<t;a0++){
		unsigned long int n;
		cin>>n;
		n--;
		cout<<3*faulhaber_1(n/3)+5*faulhaber_1(n/5)-15*faulhaber_1(n/15)<<endl;
	}
	return 0;
}


