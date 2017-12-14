#include "Queue.h"
#include<assert.h>

/*Har ar det viktigt att ateranvanda koden som du redan skrivit for den lankade listan.
  Ateranvandning betyder inte att man kopierar koden eller skriver av den, ateranvander
  gor man genom att anropa redan implementerade funktioner.*/

/*Funktionen ar fardig*/
Queue initializeQueue(void)
{
    return NULL;
}

int queueIsEmpty(const Queue queue)
{
	return isEmpty(queue);
}

/*Postcondition: data ar tillagt sist i kon*/
void enqueue(Queue* queue, const Data data)
{
	addLast(queue, data);
}

/* Precondition: kon är ej tom */
void dequeue(Queue* queue)
{
	removeFirst(queue);
}

/* Precondition: kon är ej tom */
Data peekQueue(const Queue queue)
{
	return getFirstElement(queue);
}


/* Anvands for testning och felsokning
   Tips: det kan vara bra att ocksa notera i utskriften vart borjan respektive slutet på kon är */
void printQueue(const Queue queue, FILE *textfile)
{
	printList(queue, textfile);
}


