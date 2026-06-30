#include<iostream>
#include<string>
#include<vector>
using namespace std;

int compress(vector<char>& chars){
    int n = chars.size();
    int read = 0 ;
    int write = 0;

    while(read < n){
        char current = chars[read];
        int count = 0;

        while(read < n && chars[read] == current){
            read++;
            count++;
        }                   //scans the char & incr. the count   

    chars[write++] = current;
                            //current char written at write index
    if(count > 1){
        string cnt = to_string(count);

        for (char c : cnt){
            chars[write++] = c;
        }
    }
}
    return write;

}
int main(){

vector<char> chars = {'a','a','b','b','c','c','c'};
int len = compress(chars);

cout<<"The Compressed string : ";

for(int i = 0 ; i < len ; i++){
    cout<< chars[i];
}

return 0;
}