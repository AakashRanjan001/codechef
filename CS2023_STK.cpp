#include <bits/stdc++.h>
using namespace std;


int main() {
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count1=0;
        int count2=0;
        int arr[n],brr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        int maxi1 = INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                count1 =0;
            }
            else{
                count1++;
            }
            maxi1 = max(count1,maxi1);
        }
        
        int maxi2 = INT_MIN;
        for(int i=0;i<n;i++){
            cin>>brr[i];
        }
          for(int i=0;i<n;i++){
            if(brr[i]==0){
                count2 =0;
            }
            else{
                count2++;
            }
            maxi2 = max(count2 ,maxi2);
        }
        
        if(maxi2>maxi1){
            cout<<"Addy"<<endl;
        }
        else if(maxi1==maxi2){
            cout<<"Draw"<<endl;
        }
        else{
            cout<<"Om"<<endl;
        }
        
    }
	// your code goes here

}
