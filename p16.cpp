// A B C
//B C D
//C D E
#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=3;i++){
        char ch='A'+i-1;
        for(int j=1;j<=3;j++){
                   
           cout<<ch<<" ";
           ch=ch+1;
        }
        cout<<endl;
    }
    return 0;
}
