#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        int value=i;
        for(int j=1;j<=i;j++){
            cout<<value<<" ";
            value--;
        }
        cout<<endl;
    }
    return 0;
}

//1
//2 1
//3 2 1
//4 3 2 1
//5 4 3 2 1