/* print the given pattern
if n=5
1
AB
123
ABCD
12345*/

#include<iostream>
using namespace std;
int main(){

int n;
cout<<"Enter a value for n:";
cin>>n;

for(int i=1; i<=n;i++){//for rows
        for(int j=1; j<=i; j++){
            if(i%2!=0){
                cout<<j<<" ";
            }else{
                cout<<char(j+64)<<" ";
            }
        }
        cout<<endl;

}



}
