#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int top, S[1000];

void push(int x){
    S[top++] = x;
}

int pop(){
    top--;
    return S[top+1];
}

int main(){
    int a,b;
    top = 0;
    //char s[100];
    char input;

    while(cin >> input )
    {
        if(input=='+'){
            a = pop();
            b = pop();
            push(a+b);
        }else if (input=='-'){
            a = pop();
            b = pop();
            push(a-b);
        }else if (input=='*'){
            a = pop();
            b = pop();
            push(a*b);
        }else if (input=='/'){
            a = pop();
            b = pop();
            push(a/b);
        }else{
            push(int(input));
        }
    }
    cout << pop() << endl;

    return 0;
}
