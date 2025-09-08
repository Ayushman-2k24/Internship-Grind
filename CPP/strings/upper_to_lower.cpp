#include<iostream>
#include<string>
#include<algorithm> 
using namespace std;
int main(){
    string str;
    cout<<"enter a string : ";
    getline(cin,str);
    for (int i = 0; i < str.length(); i++)
    {
        char ch=str[i];
        if(ch>='A' && ch<='Z'){
            str[i]=ch+32;
        }else if(ch>='a' && ch<='z'){
            str[i]=ch-32;
        }
    }
    cout<<str<<endl;
}