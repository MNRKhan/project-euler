#include <iostream>
#include <string>
#include <vector>


using namespace std;


int main(){
	int length=50;
	int n;
	cin>>n;
	vector<string> nums(n);
	for(int a0=0;a0<n;a0++)
		cin>>nums[a0];
	
	string sum=string(length,'0');
	int s=0;
	int c=0;
	for(int decimal=length-1;decimal>=0;decimal--){
		s=0;
		for(int idx=0;idx<n;idx++)
			s+=int(nums[idx][decimal]-'0');
		s+=c;
		c=s/10;
		sum[decimal]=char((s%10)+'0');
	}
	
	string result=to_string(c);
	result+=sum.substr(0,10-result.length());
	cout<<result<<endl;

	return 0;
}


