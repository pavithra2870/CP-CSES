#include <iostream>
using namespace std;
#define ll long long 
//initally used int but failed. so ll is best
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    while (n!=1){
        cout<<n<<" ";
        if(n&1) n=n*3+1;  //if n&1 returns some number -> n is odd because its lsb is 1 and hence its output will be 1. if even it will b 0
        else n/=2;
    }
    cout<<1<<endl;
    return 0;
}
