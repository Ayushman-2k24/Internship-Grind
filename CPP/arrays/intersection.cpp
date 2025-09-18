#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main(){
    int arr1[]={0,2,4,4,5,6,15};
    int arr2[]={1,2,3,4,4,5,6,7,8,9};
    
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);

    int visited_array[size2]={0};
    vector<int>intersect_array;

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if(arr1[i]==arr2[j] && visited_array[j]==0){
                intersect_array.push_back(arr1[i]);
                visited_array[i]=1;
                break;
            }
            if(arr2[j]>arr1[i])break;
        }
        
    }
    for (int i = 0; i < intersect_array.size(); i++)
    {
        cout<<intersect_array[i]<<" ";
    }
    
    
    
    

    
}