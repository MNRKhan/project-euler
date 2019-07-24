#include <iostream>
#include <vector>


using namespace std;


int main(){
	vector<vector<int>> grid(20,vector<int>(20));
	for(int grid_i=0;grid_i<20;grid_i++)
		for(int grid_j=0;grid_j<20;grid_j++)
			cin>>grid[grid_i][grid_j];
	
	int max=0;
	int product;
	
	// check horizontal products
	for(int row=0;row<20;row++){
		for(int col=0;col<20-4+1;col++){
			product=1;
			for(int count=0;count<4;count++)
				product*=grid[row][col+count];
			if(max<product)
				max=product;
		}
	}
	
	// check vertical products
	for(int col=0;col<20;col++){
		for(int row=0;row<20-4+1;row++){
			product=1;
			for(int count=0;count<4;count++)
				product*=grid[row+count][col];
			if(max<product)
				max=product;
		}
	}
	
	// check diagonal (top-left to bottom-right) products
	for(int row=0;row<=20-4;row++){
		for(int col=0;col<20-4+1;col++){
			product=1;
			for(int count=0;count<4;count++)
				product*=grid[row+count][col+count];
			if(max<product)
				max=product;
		}
	}
	
	// check diagonal (bottom-left to top-right) products
	for(int row=19;row>=3;row--){
		for(int col=0;col<20-4+1;col++){
			product=1;
			for(int count=0;count<4;count++)
				product*=grid[row-count][col+count];
			if(max<product)
				max=product;
		}
	}

	cout<<max<<endl;
	return 0;
}


