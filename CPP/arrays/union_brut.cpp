#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main(){
    int arr1[]={2,6,0,6,0,0,5,0};
    int arr2[]={1,2,3,4,5,6,7,8,9};
    vector<int>union_array;
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    set<int>st;
    for (int i = 0; i < size1;i++)
    {
        st.insert(arr1[i]);
    }
    for (int i = 0; i < size2;i++)
    {
        st.insert(arr2[i]);
    }
    int i=0;
    for(int x:st){
        union_array.push_back(x);
    }
    for (int i = 0; i < union_array.size(); i++)
    {
        cout<<union_array[i]<<" ";
    }
    

    
}