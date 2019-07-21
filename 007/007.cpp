#include <iostream>
#include <vector>


using namespace std;


// inserts the next prime number into prime_list
void insert_next_prime(vector<int> &prime_list){
	int num=prime_list.back()+2;
	int found=0;
	while(!found){
		int is_composite=0;
		for(int i=0;i<prime_list.size() && !is_composite;i++)
			if(num%prime_list[i]==0)
				is_composite=1;
		if(!is_composite){
			prime_list.push_back(num);
			found=1;
		}
		num+=2;
	}
}


int main(){
	int t;
	cin>>t;

	vector<int> prime_list;
	prime_list.push_back(2);
	prime_list.push_back(3);

	for(int a0=0;a0<t;a0++){
		int n;
		cin>>n;
		
		while(prime_list.size()<n)
			insert_next_prime(prime_list);

		cout<<prime_list[n-1]<<endl;
	}
	return 0;
}


