#include<iostream>
#include<string>
#include<algorithm> 
using namespace std;
int main(){
    string str="hello world 1223";
    int vowel=0;
    int consonant=0;
    int no=0;
    int spaces=0;
    for (int i = 0; i < str.length(); i++)
    {
        char ch=tolower(str[i]);
        if( ch =='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            vowel++;
        }else if(ch>='a' && ch<='z'){
            consonant++;
        }else if(ch>='0 ' && ch<='9'){
            no++;
        }else if(ch==' '){
            spaces++;
        }
    }
    
    cout<<vowel<<endl;
    cout<<consonant<<endl;
    cout<<no<<endl;
    cout<<spaces<<endl;
}