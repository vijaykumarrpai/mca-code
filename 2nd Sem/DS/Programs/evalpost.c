#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define MAXCOLS 80
#define TRUE 1
#define FALSE 0

double eval(char[]);
double pop(struct stack *);
void push(struct stack *, double);
int empty(struct stack *);
int isdigit(char);
double oper(int, double, double);

int main(void)
{
char expr[MAXCOLS];
int position = 0;
while((expr [position++] = getchar()) ! =’\n’)
;
expr[-- position] = ‘\0’;
printf(“%s%s”, “the original postfix expression is”, expr);
printf(“\n%f”, eval(expr));}
return 0;
}

struct stack {
int top;
double items[MAXCOLS];
}

double eval(char expr[])
{
int c, position;
double opnd1, opnd2, value;
struct stack opndstk;
opndstk.top = -1;
for(position = 0; (c = expr[position]) != ‘\0’; position++)
if(isdigit(c))
/*operand convert the character representation of the digit into double and push it onto the stack*/
push(&opndstk, (double) (c –‘0’));
else {
/* operator */
opnd2 = pop(&opndstk);
opnd1 = pop(&opndstk);
value = oper(c, opnd1, opnd2);
push (&opndstk, value);
} /* end else*/
return (pop(&opndstk));
}/* end eval */

int isdigit(char symb)
{
return(symb >= ‘0’ && symb <= ‘9’);
}
double oper(int symb, double op1, double op2)
{
switch(symb) {
case ‘+’ : return (op1 + op2);
case ‘-’ : return (op1 - op2);
case ‘*’ : return (op1 * op2);
case ‘/’ : return (op1 / op2);
case ‘$’ : return (pow(op1, op2));
default : printf("Wrong choice");
exit (1);
}/* end switch */
}/* end oper */