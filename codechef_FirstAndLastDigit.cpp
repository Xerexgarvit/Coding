#include<iostream>

using namespace std;

int main(){
	int t;
	cin>>t;

	for(int i=0;i<t;i++){
		int n,sum=0,rem;
		cin>>n;
		sum=n%10;
		do{
			rem=n%10;
			n=n/10;
		}
		while(n>0);

		sum+=rem;
		cout<<sum<<endl;
	}

	return 0;
}