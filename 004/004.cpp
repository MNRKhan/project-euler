#include <iostream>
#include <math.h>


using namespace std;


// returns whether n is a palindromic number
int is_palindromic(unsigned long int num){
	string str=to_string(num);
	for(int i=0;i<str.length()/2;i++)
		if(str[i]!=str[str.length()-1-i])
			return 0;
	return 1;
}


// returns whether n is a k-digit number
int is_k_digits(int n, int k){
	return n>=pow(10,k-1) && n<int(round(pow(10,k)));
}


int main(){
	int t;
	cin>>t;
	for(int a0=0;a0<t;a0++){
		int n;
		cin>>n;
		int largest=0;
		for(int i=100;i<1000;i++)
			for(int j=min((n-1)/i,999);j>100;j--)
				if(i*j>largest && is_palindromic(i*j))
					largest=i*j;
		cout<<largest<<endl;
	}
	return 0;
}


