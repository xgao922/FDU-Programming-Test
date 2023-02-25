#include <iostream>
#include <string>

using namespace std;

int main(){
    string str1, str2;
    cin >> str1;
    str2 = str1;
    int s = 0;
    char t;
    string::iterator it;
    for(it = str2.begin(); it!= str2.end(); it ++){
        if(*it == '-') it = str2.erase(it);
    }
    for(int i = 0, j = 10; i < str2.size(); i ++, j --){
        s += (str2[i] - '0') * j;   
    }
    int m = s % 11;
    cout << "mµÄÖµÎª:" << m << endl;
    if(1 <= 11 - m <= 9){
        t = 11 - m + '0';
    }else if(11 - m == 10){
        t = 'X';
    }else{
        cout << "hello" << endl;
        t = '0';   
    }
    cout << str1 << '-' << t;
    return 0;
}