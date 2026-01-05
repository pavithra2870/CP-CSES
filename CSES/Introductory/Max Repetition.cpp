#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int n=s.length();
    char ch=s[0];
    int res=1;
    int cur=1;
    for(int i=1;i<n;i++){
        if(s[i]==ch) cur++;
        else{
            res=max(res,cur);
            cur=1;
            ch=s[i];
        }
    }
    cout<<max(res,cur);
    return 0;
}
