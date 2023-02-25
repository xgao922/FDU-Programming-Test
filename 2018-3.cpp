#define N 100

#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int dp[N];
    int ans;
    dp[1] = 1;
    dp[2] = 2;
    for(int i = 3; i <= n; i ++){
        dp[i] = dp[i - 1] + dp[i - 2] % 999983;
    }
    cout << dp[n];
    return 0;
}