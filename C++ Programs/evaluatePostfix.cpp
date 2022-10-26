#include <bits/stdc++.h>
using namespace std;

int evalPos(char* pos){
    int c; int i{0},j{0},top{-1};
    int s[20]={};
    s[++top]='#';
    for(i=0;i<strlen(pos);++i){
        c=pos[i];
        if(c=='+' || c=='*'||c=='-'||c=='/'||c=='%'||c=='^'){
            int x = s[top];
            top--;
            int y = s[top];
            top--;
            if(c=='+') s[++top] = x+y;
            else if(c=='*') s[++top] = x*y;
            else if(c=='-') s[++top] = y-x;
            else if(c=='/') s[++top] = y/x;
            else if(c=='%') s[++top] = y%x;
            else if(c=='^') s[++top] = y^x;
        }
        else{
            s[++top]=c-'0';
        }
    }
    return s[top];
}

int main() {
 
    char pos[20];
    cin>>pos;
    cout<< evalPos(pos);

}