#include<iostream>
using namespace std;

int power(int a,int b){
	// base case
	if(b==0){
		return 1;
	}



	// recursive case

	return a*power(a,b-1);
}


int main(){
	int a,b;
	cin>>a>>b;
	cout<<power(a,b)<<endl;

	


	return 0;
}