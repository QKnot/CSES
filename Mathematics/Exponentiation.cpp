#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int mod = 1e9 + 7;
template<typename T>
T exponentiation(T a, T b){
    T k = 1;
    while(b){
        if(b & 1) k = k * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return k;
}
auto QKnot = []()->void 
{
    int a, b;
    cin >> a >> b;
    cout << exponentiation<int>(a, b) << endl;
};
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    bool bl = true;
    bl?[]()->void
    {
        int test;
        cin >> test;
        while(test--) QKnot();
    }():QKnot();
    return 0;
}