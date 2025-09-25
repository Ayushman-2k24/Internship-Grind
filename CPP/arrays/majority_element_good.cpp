// which elemet comes greater then n/2
#include <iostream>
#include <vector>
#include <vector>
#include <map>
using namespace std;
int check(vector<int> arr, int n)
{
    map<int,int>freq;
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    
    for(auto it:freq){
        if(it.second>n/2){
            return it.first;
        }
    }
    
    return -1;
}
int main()
{
    vector<int> arr = {4,4,3,3,1,4,4};
    int n = arr.size();
    int ans = check(arr, n);
    cout << ans << endl;
}
