//array shud be increasing element shud be atleast as large as previous element
//how much shud we increase elements to make the arr increasing
//initally i used int res which overflowed. so ll is the best
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll res=0;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            res+=arr[i-1]-arr[i];
            arr[i]=arr[i-1];
        }
    }
    cout<<res;
    return 0;
}
