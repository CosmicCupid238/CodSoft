#include<bits/stdc++.h>
using namespace std;
void sum(float x, float y){
    cout<<"The result is : "<<x+y;
}

void sub(float x, float y){
    cout<<"The result is : "<<x-y;
}

void mult(float x, float y){
    cout<<"The result is : "<<x*y;
}

void div(float x, float y){
    cout<<"The result is : "<<x/y;
}

int main()
{
    cout<<"This is a simple calculator\n"
        <<"Where we can perform simple Arithmetic operation\n"
        <<"Such as Summation, Subtraction, Multiplication & Division\n"<<endl;

    float a, b;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number : ";
    cin>>b;
    
    char x;
    cout<<"For sum enter '+' \n"
        <<"For subtraction enter '-' \n"
        <<"For multiplication enter '*' \n"
        <<"For division enter '/' "<<endl;
    cout<<"Enter the operation : " ;
    cin>>x;  
    switch(x){
        case '+' :
            sum(a,b);
            break;
        case '-' :
            sub(a,b);
            break;
        case '*' :
            mult(a,b);
            break;
        case '/' :
            div(a,b);
            break;
        default:
            cout<<"Your entry is invalid"<<endl;
            break;    
    }
   return 0;
}