#include<iostream>
using namespace std;

int main(){
	int t,n,a,b,k;
	int fa,fb;

	cin>>t;
	while(t--){
		cin>>n>>a>>b>>k;

		for(int i=1;i<n;i++){
			if(i%a ==0)
				fa++;
			if(i%b ==0)
				fb++;
		}

if((fa+fb)==k)
cout<<"Win";
else 
cout<<"Lose";

	}




	return 0;
}
