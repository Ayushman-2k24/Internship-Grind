#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<2*i+1;j++){
            if(j%2==0){
                cout<<i+1;
            }else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n+1-2*i;j++){
            if(j%2==0){
                cout<<n-(i+1);
            }else{
                cout<<"*";
            }
        }
        cout<<endl;
    }


    // int n=4;
    // for(int i=0;i<n;i++){
    //     for (int  j = 0; j < i+1; j++)
    //     {
    //         if(j==i){
    //             cout<<i+1;
    //         }else{
    //             cout<<i+1<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }
}