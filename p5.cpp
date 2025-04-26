#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int k=0;k<=i;k++){
            cout<<"* ";//RIGHT TRIANGLE AND PYRAMID PATTERN ARE ALMOST SAME JUST DIFFERENCE OF SPACE AFTER *
        }
        cout<<endl;
    }
    return 0;
}

// PYRAMID PATTERN
//        * 
//       * *
//      * * *
//     * * * *
//    * * * * *