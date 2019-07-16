#include <iostream>


using namespace std;


int main(){
	int t;
	cin>>t;
	for(int a0=0;a0<t;a0++){
		unsigned long int n;
		cin>>n;
		
		unsigned long int tail=1;
		unsigned long int head=2;
		unsigned long int tmp=head;
		unsigned long int sum=0;
		
		while(tmp<n){
			if(tmp%2==0)
				sum+=tmp;
			head+=tail;
			tail=tmp;
			tmp=head;
		}
		cout<<sum<<endl;
	}
	return 0;
}


