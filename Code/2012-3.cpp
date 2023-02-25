#include<iostream>
#include<string>

using namespace std;

int main() {
    string str;
    int n;
    cin >> str >> n;
    for (auto ch : str) {
        for (int i = 0; i < n; i++) {
            cout << ch;
        }
    }
    return 0;
}
