#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr1[]={1,2,3,4,4,5,6};
    int arr2[]={0,0,1,2,3,4,4,5,6,7,8};
    vector<int>union_array;
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    vector<int>st;

    int i=0;
    int j=0;

    while(i<size1 && j<size2){
        if(arr1[i]<arr2[j]){
            if(st.size()!=0 || st.back()!=arr1[i]){
                st.push_back(arr1[i]);
            }
            i++;
        }
        if(arr2[j]<arr1[i]){
            if(st.size()!=0 || st.back()!=arr2[j]){
                st.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(i<size1 ){
        if(arr1[i]<arr2[j]){
            if(st.size()!=0 || st.back()!=arr1[i]){
                st.push_back(arr1[i]);
            }
            i++;
        }
    }
    while( j<size2){
        if(arr2[j]<arr1[j]){
            if(st.size()!=0 || st.back()!=arr2[j]){
                st.push_back(arr2[j]);
            }
            j++;
        }
    }
    
    cout<<"union aray is "<<endl;
    for(int x:st){
        cout<<x<<" ";
    }

    
}