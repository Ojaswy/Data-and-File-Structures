# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
typedef struct stack
	{	char data[30];
		int top;
	}stack;
void init(stack *p)
		{ 	p -> top = -1;
		}
void push( stack *p, char x)
		{	p -> top = p -> top + 1;
			p -> data [p -> top] = x;
		}
char pop(stack *p)
		{	char x;
			x = p -> data [p -> top];
			p -> top = p -> top -1;
			return (x);
			}
int empty(stack *p)
		{	if (p -> top == -1)
				return (1);
				return (0);
		}
void palindrome (char []);
void main ()
	{	stack s;
		char text [20];
		int i;
		init(&s);
		printf( "\n Enter a string:");
		gets(text);
		palindrome(text);
	}
void palindrome(char text[])
		{	stack s;
			int i ;
			init(&s);

			for(i=0; text[i]!='\0';i++)
			push(&s,text[i]);
			for(i=0;text[i]!='\0';i++)
			if (text[i]!=pop(&s))
				break;

if (text[i]!='\0')

 printf( "\n Not a palindrome");
else
			printf("\n A Palindrome");
		    exit;
			
		}

