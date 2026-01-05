// To find missing number between 1-n
// Initially thought of vector solution - sort the vector and find the number that is missing between 2 numbers - 0(nlogn)
// Better solution is to store a boolean vector of size n - and mark it true if element is present in arr. element with false is answer
// best ans is using sum of first n natural numbers property
// find sun of first n natural numbers and subtract the sum of given numbers from it - gives the missing element
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,x;
    cin >> n;
    ll summ=n*(n+1)/2;
    for(int i=0;i<n-1;i++){
        cin>>x;
        summ-=x;
    }
    cout<<summ;
    return 0;
}
