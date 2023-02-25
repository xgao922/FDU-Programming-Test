#define N 10010
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[N];
    for(int i = 0; i < n; i ++){
        scanf("%d", &a[i]);
    }
    int x;
    cin >> x;
    int num = 0;
    int l = 0, r = n - 1;
    while(l < r){
        int mid = l + r >> 1;
        if(mid > x) r = mid;
        else l = mid + 1;
        num ++;
    }
    cout << num << endl;
    return 0;
}