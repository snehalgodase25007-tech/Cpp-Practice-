#include<iostream>
#include<cmath>
using namespace std;
class stack{
private:
int arr[100];
int top;
public:
sta
ck(){
    top=-1;
}
void push(int val){
    arr[++top]=val;
}
int pop(){
    int p=arr[top--];
    return p;

}
};
int evaluate(char x,int opl,int op2);
int evaluate(char x,int op1,int op2)
 {
    if(x=='+') return(op1+op2);
    if(x=='-') return(op1-op2);
    if(x=='*') return(op1*op2);
    if(x=='%') return(op1%op2);
    if(x=='$') return(pow(op1,op2));
 }
int main(void)
{
    stack s;
    char x;
    int op1,op2,val;
    cout<<"\n Enter postfix expression:";
    while((x=getchar())!='\n')
    {
        if(isdigit(x))
        {
    s.push(x-48);
        }

else{
    op2=s.pop();
    op1=s.pop();
    val=evaluate(x,op1,op2);
    s.push(val);
}
    }
cout<<"\n Anwer="<<s.pop();
    return 0;
}
