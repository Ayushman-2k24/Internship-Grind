#include <iostream>
#include <algorithm>
#include <limits.h>
#include<vector>
using namespace std;

int main()
{
    vector<int>arr = {1, 0, 2, 0, 0, 3, 4, 0, 5};
    vector<int>temp;
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }
    for (int i = 0; i < temp.size(); i++)
    {
        arr[i]=temp[i];
    }
    for(int i=temp.size();i<arr.size();i++){
        arr[i]=0;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}