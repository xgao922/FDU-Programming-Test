#include <iostream>
#include <algorithm>

using namespace std;

//平年的二月28天，闰年的二月29天
int month[13][2] = {{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}};

bool isLeapYear(int year){//是否是闰年
    if(year % 400 ==0 || year % 4 == 0 && year % 100 != 0){
        return true;
    }
    return  false;
}

int main(){
    int time1, time2 = 20190205;
    cin >> time1;
    if(time1 > time2){
        swap(time1, time2);
    }
    int y1, m1, d1, y2, m2, d2;
    y1 = time1 / 10000, m1 = time1 % 10000 / 100, d1 = time1 % 100;
    y2 = time2 / 10000, m2 = time2 % 10000 / 100, d2 = time2 % 100;
    int num = 0;
    while(y1 < y2 || m1 < m2 || d1 < d2){
        d1 ++;
        num ++;
        if(d1 == month[m1][isLeapYear(y1)] + 1){
            m1 ++;
            d1 = 1;
        }
        if(m1 == 13){
            y1 ++;
            m1 = 1;
        }
    }
    cout << num << endl;
    return 0;
}