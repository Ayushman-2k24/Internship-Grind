#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    string str;
    getline(cin,str);

    map<char,int>freq;
    for(char c:str){
        freq[c]++;
    }
    for(auto i:freq){
        cout<<i.first<<""<<i.second<<endl;
    }

}