#include<stdio.h>
char stack[100];
int top=-1;
void push(char x){
stack[++top]=x;
}
int pop(){
return stack[top--];
}
int precedence(char x)
{
if(x=='('){
return 0;
}
if(x=='+'||x=='-'){
return 1;
}
if(x=='*'||x=='/'){
return 2;
}
if(x=='^'){
return 3;
}
return 0;
}
int main()
{
char exp[100],x;
int i=0;

printf("Enter Infix Expression : ");
scanf("%s",exp);
printf("\nPostfix Expression : ");
while(exp[i]!='\0')
{
if((exp[i]>='A'&&exp[i]<='Z')||(exp[i]>='a'&&exp[i]<='z')||
(exp[i]>='0'&&exp[i]<='9'))
{
printf("%c",exp[i]);
}
else if(exp[i]=='(')
{
push(exp[i]);
}
else if(exp[i]==')')
{
while((x = pop()) != '(')
printf("%c", x);
}
else
{
while(top!=-1 && precedence(stack[top])>=precedence(exp[i]))
printf("%c",pop());
push(exp[i]);
}
i++;
}
while(top!=-1)
printf("%c",pop());
return 0;
}
