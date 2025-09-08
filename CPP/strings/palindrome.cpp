#include<iostream>
#include<string>
#include<algorithm> 
using namespace std;
int main(){
    string str="mam";
    bool isPalindrome=1;
    int left=0;
    int right=str.length()-1;
    while(left<=right){
        if(str[left]!=str[right]){
            isPalindrome=0;
        }
        left++;
        right--;
    }

    if (isPalindrome)
    {
        cout<<"it is palindrome"<<endl;
    }else{
        cout<<"it is not";
    }
    
}