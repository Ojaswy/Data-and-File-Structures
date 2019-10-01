# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

/*Implementation of STACK using a STATIC array.*/

// Global variable stack
typedef struct stack
{
    char data[30]; // Array to hold stack data
    int top; // Points the top element of the stack
}stack;

// Initiate the stack
void init(stack *p)
{ 	
    // Initially stack contains nothing. Hence top doesn't point anywhere
    p -> top = -1;
}

// Push an element to the stack
void push( stack *p, char x)
{	
    // Update the top and place an element over there
    p -> top = p -> top + 1;
    p -> data [p -> top] = x;
}

// Pop an element from the stack
char pop(stack *p)
{
    char x;
    x = p -> data [p -> top]; // Store the top element somewhere
    p -> top = p -> top -1; // Removing an element is nothing but updating the top.
	
    return (x);
}

// Check if the stack is empty
int empty(stack *p)
{
    // We say that a stack is empty if its top points to -1
    if (p -> top == -1)
        return (1); // True
    return (0);  // False
}

// Function prototype
void palindrome (char []);

// Program execution starts here
void main ()
{
    stack s; // Our stack

    char text [20];
    int i;
    init(&s); // Initiate the stack
    printf( "\n Enter a string:");
    //gets(text); // gets() function is not safe to use
    scanf("%s", text);
    palindrome(text);
}
void palindrome(char text[])
{	
	stack s;
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
	exit(0);
}

