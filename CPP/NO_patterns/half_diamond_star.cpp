#include<iostream>
using namespace std;
int main(){
    int n =5;
    int initialspace=2*n-2;
    for (int i =1; i <= 2*n-1; i++)
    {
        int stars=i;
       
        if (stars>n)stars=2*n-i;
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        for (int j = 1; j <=initialspace; j++)
        {
            cout<<" ";
        }
        
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        
        cout<<endl;
        if(i<n)initialspace=initialspace-2;
        else initialspace=initialspace+2;
    }
    
    
}