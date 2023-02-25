#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
    string str;
    cin >> str;
    stack<char> stk;
    char x, y;
    for(int i = 0; i < str.size(); i ++){
        if('0' <= str[i] && str[i] <= '9') stk.push(str[i]);
        else{
            x = stk.top();
            stk.pop();
            y = stk.top();
            stk.pop();
            if(str[i] == '+'){
                stk.push(x + y - '0');
            }else if(str[i] == '-'){
                stk.push(y - x + '0');
            }else{
                cout << "ºó×ºÐòÁÐ³ö´í£¡";
            }
        }
    }
    cout << stk.top();
    return 0;
}