#include<iostream>
#include<algorithm>
using namespace std;
bool isAlphanumeric(char ch){       //ch -> 0-9 | c -> a-z
    char c = tolower(ch);
    if((ch >= '0' && ch <= '9') || ( c >= 'a' && c <= 'z')){
        return true;
    }
    return false;
}
bool isPalindrome(string s){
    int st = 0;
    int end = s.length()-1;

    while (st < end){
        if(!isAlphanumeric(s[st])){
            st++;
            continue;
        }
        if(!isAlphanumeric(s[end])){
            end--;
            continue;
        }

        if(tolower(s[st]) != tolower(s[end])){
            return false;
        }
        st++;           // to check next characters
        end--;
    }
    return true;
}

int main(){ 
string s ;
cout<<"enter a string: ";
getline(cin , s);

cout<<"Palindrome: "<<(isPalindrome(s) ? "true" : "false");
return 0;
}