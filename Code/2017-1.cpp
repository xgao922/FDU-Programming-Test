#define maxsize 50

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[maxsize];
    for(int i = 0; i < n; i ++){
        cin >> a[i];
    }
    sort(a, a+n);
    cout << "中位数为：";
    if(n % 2 == 1){
        cout << a[n/2];
    }else{//n为偶数时，中位数为升序的中间两个数的平均值，可能不整除
        cout << (a[n/2-1]+a[n/2])/2.0;
    }
    return 0;
}