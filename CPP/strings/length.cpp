#include<iostream>
#include<string>
#include<algorithm> 
using namespace std;
int main(){
    string str="heloo world";
    int i=0;
    int length=0;
    while(str[i]!='\0'){
        length++;
        i++;
    }
    cout<<length<<endl;
}