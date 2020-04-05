#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,i;
	vector<int> A(100);
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int sum=0;
		for(int i=0;i<n;i++)
			scanf("%d",&A[i]);
		for(int i=0;i<n;i++){
		    if(A[i] > 0)
            	if(sum != 0){
               sum =sum + (A[i] - i);
                    	}
            else sum =sum + A[i];
           else
           	sum =sum+ A[i];
		}printf("%d\n",sum);

}
	return 0;
}
