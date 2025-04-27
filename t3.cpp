//    A
//   ABA
//  ABCBA
// ABCDCBA
//ABCDEDCBA
#include<iostream>
using namespace std;
int main(){
    int n=6;
    for(int i=0;i<n;i++){
       for(int j=0;j<=n-i;j++){
        cout<<" ";
       }
       for(int k=0;k<i;k++){
        char ch='A'+k;
        cout<<ch;
       }
       for(int l=1;l<i;l++){
        char ch1='A'+i-l-1;
        cout<<ch1;
       }
       cout<<endl;
    }
    return 0;
}