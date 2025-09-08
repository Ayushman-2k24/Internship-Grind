#include<iostream>
#include<string>
#include<algorithm> 
using namespace std;
int main(){
    string str="heloo world";
    // string rev=str;
    // reverse(rev.begin(),rev.end());
    // cout<<rev<<endl;
    int left=0;int right=str.length()-1;
    while(left<right){
        swap(str[left],str[right]);
        left++;
        right--;
    }
    cout<<str<<endl;
}