#include <iostream>

using namespace std;

int main() {
    int x, y;
    cout << "长方形的长为：" ;
    cin >> x;
    cout << "长方形的宽为：" ;
    cin >> y;
    int ans = 1;
    while(x != y)
    {
        int temp = abs(x - y);//temp暂存x-y的绝对值
        y = min(x, y);//y为x,y中的较小值
        x = temp;//将temp赋给x
        ans ++;
    }
    cout << "最后能得到的正方形个数为：" << ans << endl;
    return 0;
}