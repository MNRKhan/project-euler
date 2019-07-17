#include <iostream>
#include <math.h>
#include <unordered_map>


using namespace std;


// divides num by factor until not divisible
// returns number of times divisible
int reduce_factorize(int &num, int factor){
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
		int n;
		cin>>n;
		
		int prime;
		unordered_map<int,int>prime_freq;
		for(int i=2;i<=n;i++){
			int num=i;
			prime=2;
			prime_freq[prime]=max(prime_freq[prime],reduce_factorize(num,prime));

			for(prime=3;prime<=int(round(sqrt(i))) && num!=1;prime+=2)
				prime_freq[prime]=max(prime_freq[prime],reduce_factorize(num,prime));

			if(num!=1)
				prime_freq[num]=1;
		}
		unsigned long long int product=1;
		for(auto itr:prime_freq)
			product*=int(round(pow(itr.first,itr.second)));
		cout<<product<<endl;
	}
	return 0;
}


