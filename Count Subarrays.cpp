#include <bits/stdc++.h>
using namespace std;
void solve(unordered_map<int,int> &map,vector<int> &v)
{
    int n=v.size();
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=v[j];
            if(sum > n) break;
            map[sum]++;
        }
    }
}
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        unordered_map<int,int> map;
        solve(map,v);
        for(int i=1;i<=n;i++){
            cout<<map[i]<<" ";
        }
        cout<<endl;
    }
}
