#include<bits/stdc++.h>
#define int long long
#define fio ios::sync_with_stdio(false);cin.tie(nullptr)
#define mod 1000000007
#define vi vector<int>
#define in(a) for(int i=0;i<a.size();i++) cin>>a[i]
#define in1(a) for(int i=1;i<a.size();i++) cin>>a[i]
#define fo(n) for(int i=0;i<n;i++)
#define foo(n) for(int i=1;i<=n;i++)
#define out(a) for(auto x: a) cout<<x<<" ";cout<<endl
#define endl "\n"
int gcd (int a, int b) {return b ? gcd (b, a % b) : a;}
 
using namespace std;
 
 
int dp[19];
 
int solve(int num) {
    if (num < 1)
        return num == 0 ? 1 : 0;
    string numString = to_string(num);
    int ans = 0;
    // add the ansult for all numbers with less digits
    for (int i = 0; i < numString.size(); i++) {
        ans += dp[i];
    }
 
    int prev = 0;
 
    for (int i = 0; i < numString.size(); i++) {
        int digit = numString[i] - '0';
        int diff = numString.size() - i - 1;
        int below = prev < digit ? digit - 1 : digit;
        
        
        ans += (digit == 0) ? 0 : below * dp[diff];
        
        if (digit == prev)
            return ans;
        prev = digit;
    }
 
    return ans + 1; // +1 for the number itself
}
int32_t main() {
	// your code goes here
	fio;
    int tt=1;
    //cin>>tt;
    
 
    while(tt--){
 
    int a,b;
    cin>>a>>b;
 
    dp[0]=1;
 
    foo(18){
        dp[i]=dp[i-1]*9;
    }
    
 
    cout<<solve(b)-solve(a-1)<<endl;
      
 
 
 
 
 
 
 
 
 
    
 
 
    }
 
	return 0;
}