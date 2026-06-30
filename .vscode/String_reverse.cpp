#include<iostream>
#include<string>
using namespace std;

string reverse(string& s){
    string res;
    for(int i = s.size() - 1 ; i >= 0 ; i--){
        res += s[i];
    }
    return res;
} 
int main(){
string s = "shashank";
string res = reverse(s);
cout<<"reverse of a string : ";
cout<<res;
return 0;
}