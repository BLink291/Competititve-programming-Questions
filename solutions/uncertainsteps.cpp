#include<bits/stdc++.h>
using namespace std;
long long m = 1000000007;
long long f(int n, bool flag) {
    if (n == 0 || n == 1)
        return 1;
    if (n == 2)
        return 2;

    if (flag == false)
        return (f(n - 3, true) % m + f(n - 2, false) % m + f(n - 1, false) % m) % m;
    else
        return (f(n - 2, true) % m + f(n - 1, true) % m) % m;
        //return (f(n - 2, false) % m + f(n - 1, false) % m) % m;
}
int main() {
    long long n;
    cin >> n;
    cout << f(n, false) << endl;
    return 0;
}
