#include <bits/stdc++.h>
using namespace std;
int solve(int x,int y)
{
    if(x == 2) return y;
    if(y < (x-1)) return 0;
    return ceil(y/(x-1));
    
}
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        cout<<solve(x,y)<<endl;
    }
}
