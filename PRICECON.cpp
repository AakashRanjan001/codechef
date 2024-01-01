#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++){
	    int n,k;
	    cin>>n>>k;
	    
	    int p[n];
	    for(int i=0;i<n;i++){
	        cin>>p[i];
	    }
	    int sum1=0;
	    for(int i=0;i<n;i++){
	        sum1 = sum1 + p[i];
	    }
	    int sum2 =0;
	    for(int i=0;i<n;i++){
	        if(k<p[i]){
	            p[i]=k;
	        }
	        sum2 = sum2 + p[i];
	    }
	    int total =abs (sum2 - sum1);
	    cout<<total<<endl;
	}

}
