//1234554321
//1234**4321
//123****321
//12******21
//1********1

#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<j;
        }
        for(int k=0;k<i;k++){
            cout<<"**";
        }
        int x=n-i;
        for(int l=0;l<n-i;l++){
            cout<<x;
            x=x-1;
        }
        cout<<endl;
    }
    return 0;
}