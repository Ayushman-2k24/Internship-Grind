#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>arr={1,4,7,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(arr[i]+arr[j]==target){
                cout<<i<<" "<<j<<endl;
            }
        }
        
    }
    cout<<"not present";
}