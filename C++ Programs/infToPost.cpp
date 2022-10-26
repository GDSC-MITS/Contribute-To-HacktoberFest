#include <bits/stdc++.h>
using namespace std;

int sp(char c){
    if(c=='+'||c=='-') return 2;
    if(c=='*'||c=='/') return 4;
    if(c=='^'||c=='$') return 5;
    if(c=='(') return 0;
    if(c=='#') return -1;
    return 8;
}

int ip(char c){
    if(c=='+'||c=='-') return 1;
    if(c=='*'||c=='/') return 3;
    if(c=='^'||c=='$') return 6;
    if(c=='(') return 9;
    if(c==')') return 0;
    return 7;
}

char* infToPos(char* inf, char* pos, int n){
    char c; int i{0},j{0},top{-1};
    char s[20]={};
    s[++top]='#';
    for(i=0;i<strlen(inf);++i){
        c = inf[i];
        while(sp(s[top])>ip(c)){
            pos[j++]=s[top--];
        }
        if(sp(s[top])!=ip(c)){
            s[++top]=c;
        }else{
            top--;
        }
    }
    while(s[top]!='#'){
        pos[j++]=s[top--];
    }
    pos[j]='\0';
    return pos;
}



int main() {

    char inf[20]="(A+B)*C", pos[20];

    int n = strlen(inf);

    cout<< infToPos(inf,pos,n);

}