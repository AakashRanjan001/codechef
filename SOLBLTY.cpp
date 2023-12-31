#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;

for(int i=0;i<t;i++){
    int X,A,B;
    cin>>X>>A>>B;
    
    int ans = A +(100 - X)*B;
    ans = ans *10;

	cout<<ans<<endl;
}
}
