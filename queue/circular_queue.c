#include <stdlib.h>

#include <stdio.h>

#define MAXELEMENTS 50

#define TRUE 1

#define FALSE 0

typedef struct

{

int items[MAXELEMENTS];

int front , rear ;

} QUEUE;



void qinsert( QUEUE * , int);

int qdelete(QUEUE *);

int empty(QUEUE *);



int main()

{

	char operation;

	int x;

	QUEUE q;

	q.front = q.rear = MAXELEMENTS - 1;

	do

	{

	printf("Queue Operation type I(nsert) D(elete) or E(xit)");

	scanf("\n%c",&operation);

	switch (operation) {

		case 'I' :case 'i':printf("%s\n","Insert an element");

				scanf("\n%d",&x);

				qinsert(&q , x);

				break;

		case 'D' :case 'd':x=qdelete(&q);

				printf("\n %d is deleted \n",x);

				break;

		default: printf("Incorrect Operation type\n");

				break;

	}

	}

	while (operation != 'E'&&operation!='e');

	return 0;

}


int empty(QUEUE *qptr)
{

	return((qptr->front == qptr->rear) ? TRUE : FALSE);

}

int qdelete(QUEUE *qptr)
{

	if (empty(qptr)) {

		printf("Queue underflow ");

		return -1;

	} else {

	qptr->front = (qptr->front+1) % (MAXELEMENTS);

	return(qptr->items[qptr->front]);

	}

}

void qinsert(QUEUE *qptr , int x)

{

/* make room for new element */

	printf("\n %d is inserted \n",x);

	qptr->rear=(qptr->rear+1)%(MAXELEMENTS);

	if (qptr->rear == qptr->front) {

		printf("Queue overflow");

		qptr->rear--;

		return;

	}

	qptr->items[qptr->rear] = x;

	return;

}
