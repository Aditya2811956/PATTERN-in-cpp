#include<iostream>
using namespace std;
int main(){
    int n=3;
    char ch='A'; 
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
                  
           cout<<ch<<" ";
           ch=ch+1;
        }
        cout<<endl;
    }
    return 0;
}

//A
//B B
//C C C