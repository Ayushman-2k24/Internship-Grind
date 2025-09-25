#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>arr={1,2,0,1,0,2,0,1};
    int n=arr.size();
    int count_0=0;
    int count_1=0;
    int count_2=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==0){
            count_0++;
        }
        else if(arr[i]==1){
            count_1++;
        }
        else if(arr[i]==2){
            count_2++;
        }
    }
    for (int i = 0; i < count_0; i++)
    {
        arr[i]=0;
    }
    for (int i = count_0; i < count_0+count_1; i++)
    {
        arr[i]=1;
    }
    for (int i = count_1+count_0; i < n; i++)
    {
        arr[i]=2;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}
