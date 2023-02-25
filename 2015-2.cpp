#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    double x = a, y = b;
    if (a + b == c || a * b == c){
        cout << "YES";
    }
    else if (a - b == c || b - a == c){
        cout << "YES";
    }
    else if (x / y == c || y / x == c){
        cout << "YES";
    }
    else{
        cout << "NO";   
    }
    return 0;
}