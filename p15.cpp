//D 
//C D
//B C D
//A B C D
#include<iostream>
using namespace std;
int main(){
    int n=4;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            char ch='D'+j-i;                   
           cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}