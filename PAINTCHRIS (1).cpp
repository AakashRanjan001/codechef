#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here


int t;
cin>>t;
while(t--){
    
    int x,y,z;
cin>>x>>y>>z;  


int max_area = z/2;
int area = x*y;
    if(area<=max_area){
        cout<<max_area/area<<endl;
    }
    else{
        cout<<0<<endl;
    }
}



    






}
