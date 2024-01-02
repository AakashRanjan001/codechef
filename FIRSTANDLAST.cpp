#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int sum = arr[0]+arr[n-1];
	    
	    for(int i=0;i<n-1;i++){
	        int temp = arr[i] + arr[i+1];
	    
	    sum = max(sum ,temp);
	}
	cout<<sum<<endl;
	}
}
