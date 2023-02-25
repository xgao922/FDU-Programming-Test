#include <iostream>
#include <string>

using namespace std;

const int N = 20;
int dp[N][N] = {0};

int main(){
    string str1;
    string str2;
    cin >> str1;
    cin >> str2;
    int result = 0;
    for(int i = 1; i <= str1.size(); i ++){
        for(int j = 1; j <= str2.size(); j ++){
            if(str1[i - 1] == str2[j - 1]){
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } 
            if(dp[i][j] > result) result = dp[i][j];
        }
    }
    cout << result << endl;
    return 0;
}