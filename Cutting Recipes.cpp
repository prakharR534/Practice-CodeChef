#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long int n;
	    cin>>n;
	    int A[n],B[n];
	    for(int i=0;i<n;i++)
	    cin>>A[i];
	    
	    int g = A[0];
	    for(int i=0;i<n;i++)
	    g = __gcd(A[i],g);
	  
	    
	     for(int i=0;i<n;i++)
	    cout<<A[i]/g<<" ";
	    
	    cout<<endl;
	    
	    
	   
	   
	   
	   
	}
	return 0;
}
