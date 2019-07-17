#include <iostream>
#include <math.h>


using namespace std;


// divides num by factor until not divisible
// returns number of times divisible
int reduce_factorize(unsigned long int &num, unsigned long int factor){
	int count=0;
	while(num%factor==0){
		num/=factor;
		count++;
	}
	return count;
}


int main(){
	int t;
	cin>>t;
	for(int a0=0;a0<t;a0++){
		unsigned long int n;
		cin>>n;
		
		unsigned long int largest=1;
		unsigned long int prime=2;

		if(reduce_factorize(n,prime))
			largest=prime;
		for(prime=3;prime<=int(round(sqrt(n))) && n!=1;prime+=2)
			if(reduce_factorize(n,prime))
				largest=prime;
		if(n!=1)
			largest=n;
		cout<<largest<<endl;
	}
	return 0;
}


