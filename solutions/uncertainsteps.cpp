#include <bits/stdc++.h>

using namespace std;

long long takesteps(int n, bool third ){
    
    if(n==0)
        return 1;
    if(n < 0)
        return 0;
    
    if(third)
        return takesteps(n-3, false)+ takesteps(n-1, true) + takesteps(n-2, true);
    else
        return takesteps(n-1, false) + takesteps(n-2, false); 

}

int main(){

    int n;
    long long res;
    cin>> n;
    res = takesteps(n, true);
    res =res% 1000000007;
    cout<<res;
return 0;
}