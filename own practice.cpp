/* Question- print the given pattern
             if n=5
             *****
             ****
             ***
             **
             *     
*/


#include<iostream>
using namespace std;
int main(){

int n;
cout<<"Enter a value for n:";
cin>>n;

for(int i=1; i<=n;i++){//for rows
        for(int j=i;j<=n; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;

}



}
