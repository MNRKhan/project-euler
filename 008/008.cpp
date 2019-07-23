#include <iostream>
#include <string>


using namespace std;


int main(){
	int t;
	cin>>t;

	for(int a0=0;a0<t;a0++){
		int n,k;
		cin>>n>>k;
		string num;
		cin>>num;

		int max=0;
		int current=1;
		for(int i=0;i<k;i++)
			current*=int(num[i]-'0');
		max=current;

		for(int i=k;i<num.length();i++){
			int prev=int(num[i-k]-'0');
			int next=int(num[i]-'0');
			if(prev){
				current/=prev;
				current*=next;
			}else{
				current=1;
				for(int j=0;j<k;j++)
					current*=int(num[i-j]-'0');

			}
			
			if(current>max)
				max=current;
		}
		cout<<max<<endl;
	}
	return 0;
}


