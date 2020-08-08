#include<bits/stdc++.h>
using namespace std;

int main() {
    char time[10],newTime[10];
    cin>>time;
    strcpy(newTime,time);
    //cout<<newTime;
    if( newTime[8] == 'P' || newTime[8] =='p') {
        if(newTime[1]=='7') {
            newTime[1] = newTime[1] + 2;
            newTime[0] = newTime[0] + 1;
        } else if( newTime[1] == '8' ) {
            newTime[1] = '0';
            newTime[0] = '2';
        } else if( newTime[1] == '9' ) {
            newTime[1] = '1';
            newTime[0] = '2';
        }

    }
    newTime[8] ='\0';
    cout<<newTime;
}