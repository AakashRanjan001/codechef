#include <bits/stdc++.h>
using namespace std;

int main() {
	
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    vector<int>arr(n);
    vector<int>brr(m);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi = INT_MIN;
    for(int i=0;i<m;i++){
        cin>>brr[i];
        maxi = max(maxi , brr[i]);
    }
    sort(arr.begin()+n-maxi,arr.end());
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
}
