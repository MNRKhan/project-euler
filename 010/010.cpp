#include <algorithm>
#include <iostream>
#include <string>


using namespace std;


int main(){
	int max_range=1000000;
	long prime_summation[max_range+1]={0};
	int is_prime[max_range+1];
	fill_n(is_prime,max_range+1,1);
	is_prime[0]=0;
	is_prime[1]=0;
	for(int factor=2;factor<max_range+1;factor++)
		if(is_prime[factor]){
			int multiple=factor*2;
			prime_summation[factor]=prime_summation[factor-1]+factor;
			while(multiple<max_range+1){
				is_prime[multiple]=0;
				multiple+=factor;
			}
		}else prime_summation[factor]=prime_summation[factor-1];
	
	int t;
	cin>>t;
	for(int a0=0;a0<t;a0++){
		int n;
		cin>>n;
		cout<<prime_summation[n]<<endl;
	}
	return 0;
}


