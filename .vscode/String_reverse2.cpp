#include<iostream>
#include<string>
using namespace std;
 

string reverse(string s){
    int st = 0;
    int end = s.size()-1;

    while(st<end){
        char temp = s[st];
        s[st] = s[end];
        s[end] = temp;
        st++;
        end--;
    }
    return s;
}
int main(){
 
string s = "Good Morning";
string res = reverse(s);
cout<<"Reverse: "<<res;
return 0;
}