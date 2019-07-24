#include <iostream>


using namespace std;


int main(){
	int t;
	cin>>t;

	for(int a0=0;a0<t;a0++){
		int n;
		cin>>n;
		int max=-1;
		for(int a=1;a<=n-5;a++){	// a=1,a<b<c, therefore, b>=2,c>=3,a<=n-b-c
			if(n*(n-2*a)%(2*(n-a))==0){
				int b=(n*(n-2*a))/(2*(n-a));
				int c=n-a-b;
				if(max<a*b*c && a<b && b<c)
					max=a*b*c;
			}
		}
		cout<<max<<endl;
	}
	return 0;
}


