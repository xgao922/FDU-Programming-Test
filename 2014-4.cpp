#include <iostream>

using namespace std;

int acount = 1, count = 0;

void hanoi(int n, char a, char b, char c){
    if(n == 1){
        if(acount - ::count++ <= 100){
            cout << ::count << ":" << a << "->" << c << endl;
        }
    }
    else{
        hanoi(n-1, a, c, b);
        if(acount - ::count++ <=100){
            cout << ::count << ":" << a << "->" << c << endl;
        }
        hanoi(n-1, b, a, c);
    }
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i ++){
        acount *= 2;
    }
    acount --;
    cout << acount << endl;
    hanoi(n, 'A', 'B', 'C');
    return 0;
}