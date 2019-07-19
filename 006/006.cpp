#include <iostream>
#include <math.h>


using namespace std;


// returns degree 1 ap summation of n
unsigned long int faulhaber_1(unsigned long int n){
	return n*(n+1)/2;
}


// returns degree 2 ap summation of n
unsigned long int faulhaber_2(unsigned long int n){
	return n*(n+1)*(2*n+1)/6;
}


int main(){
	int t;
	cin>>t;
	for(int a0=0;a0<t;a0++){
		int n;
		cin>>n;
		unsigned long int degree_1=round(pow(faulhaber_1(n),2));
		cout<<degree_1-faulhaber_2(n)<<endl;
	}
	return 0;
}


