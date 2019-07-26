#include <iostream>
#include <math.h>
#include <unordered_map>
#include <vector>


using namespace std;


// returns degree 1 ap summation of n
int faulhaber_1(int n){
	return n*(n+1)/2;
}


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


// returns the prime factorization of num
unordered_map<int,int>prime_factorize(int num){
	int prime=2;
	unordered_map<int,int>prime_freq;
	prime_freq[prime]=max(prime_freq[prime],reduce_factorize(num,prime));
	
	for(prime=3;prime<=int(round(sqrt(num))) && num!=1;prime+=2)
		prime_freq[prime]=max(prime_freq[prime],reduce_factorize(num,prime));
	
	if(num!=1)
		prime_freq[num]=1;
	
	return prime_freq;
}


// appends the next element to the list
// returns the index of the faulhaber series element appended
int append_next(vector<int>&list,int x){
	int num;
	unordered_map<int,int> prime_factors;
	int count;
	while(1){
		num=faulhaber_1(x++);
		prime_factors=prime_factorize(num);
		count=1;
		for(auto itr:prime_factors)
			count*=(itr.second+1);

		if(count>list.size()){
			while(count>list.size())
				list.push_back(num);
			return x;
		}
	}
}


int main(){
	int t;
	cin>>t;
	vector<int>factor_freq;
	int x=1;

	for(int a0=0;a0<t;a0++){
		int n;
		cin>>n;

		while(n>=factor_freq.size())
			x=append_next(factor_freq,x);
		
		cout<<factor_freq[n]<<endl;

	}
	return 0;
}


