#define N 100000

#include <iostream>
#include <cstdio>
#include<algorithm>

using namespace std;

int main(){//求众数
    int n;
    cin >> n;
    int num[N];
    int i;
    for(i = 0; i < n; i ++){
        scanf("%d", &num[i]);
    }
    int m[N];
    for(i = 0; i < n; i ++){
        for(int j = 0; j < n; j ++){
            if(num[i] == num[j]){
                m[i] ++;
            }
        }
    }
    int max = 1, p = 0;
    for(i = 0; i < n; i ++){
        if(m[i] > max){
            max = m[i];
            p = i;
        }else if(m[i] == max){
            p = num[i] > num[p] ? p : i;
        }
    }
    cout << num[p];
    return 0;
}