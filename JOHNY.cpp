#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int t,k,n;
	long long int a[110];
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		cin>>k;

        k = a[k-1];
		sort(a,a+n);

		for(int i=0;i<n;i++){
			if(k == a[i]){
				cout<<i+1<<endl;
				break;
			}
		}
	}
}
