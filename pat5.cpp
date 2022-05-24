/*
        1
     2  3
  3  4  5
4 5  6  7
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of N :";
    cin>>n;

    int i=1;
    while(i<=n){
        int s=1;
        while(s<=n-i){
            cout<<" ";
            s+=1;
        }
        int j=1;
        int k=i;
        while(j<=i){
            cout<<k;
            j+=1;
            k+=1;
        }
        cout<<endl;
        i+=1;
    }
}