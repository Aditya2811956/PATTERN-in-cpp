//   1
//  121
// 12321
//1234321
#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=0;j<n-i;j++){
        cout<<" ";
        }
        for(int k=0;k<=i;k++){
            cout<<count;
            count++;
        }
        int x=i;
        for(int l=0;l<i;l++){
            cout<<x;
            x--;
        }
        cout<<endl;

    }
    return 0;
}