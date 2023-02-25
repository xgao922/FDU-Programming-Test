#include <iostream>
#include <algorithm>

using namespace std;

// 找出最大值和次大值，用sort函数排序即可
int main()
{
	int a[4];
	int x, y, z, w;
	cin >> a[0] >> a[1] >> a[2] >> a[3];
	sort(a, a + 4);
	cout << a[2] + a[3];
	return 0;
}
