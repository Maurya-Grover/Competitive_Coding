#include<bits/stdc++.h>
using namespace std;


int main() {
    int n,pairs=0;
    cin>>n;
    int ar[102],counter[102]={0};
    for(int i =0;i<n;i++) {
        cin>>ar[i];
        counter[ar[i]]++;
    }
    
    for( int i=0 ;i<102;i++) {
        if(counter[i]) {
           pairs += (counter[i]/2);
        }
    }
   
    cout<<pairs;
    return 0;
}