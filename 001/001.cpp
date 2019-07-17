#include <iostream>


using namespace std;


// returns ap summation of n
unsigned long int s(unsigned long int n){
	return n*(n+1)/2;
}


int main(){
	int t;
	cin>>t;
	for(int a0=0;a0<t;a0++){
		unsigned long int n;
		cin>>n;
		n--;
		cout<<3*s(n/3)+5*s(n/5)-15*s(n/15)<<endl;
	}
	return 0;
}


