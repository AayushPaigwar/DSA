#include<stdio.h>
#define SIZE 5

void enQueue(int);
void deQueue();
void display();

int items[SIZE], front= -1 , rear= -1;

int main()
{
	deQueue();
	
	
	enQueue(1);
    enQueue(2);
    enQueue(3);
    enQueue(4);
    enQueue(5);
	enQueue(6);

    display();

    deQueue();
    display();


return 0;
}


void enQueue(int value){

    if(rear==SIZE -1 )
    printf("\n Queue is full!");
    else{
        if(front== -1)
        front=0;
        rear++;
        items[rear]= value;
        printf("\n Inserted--> %d", value);
    }
}

void deQueue(){
    if(front==-1)
    printf("\n Queue is empty");
    else{
        printf("\n Deleted-->%d",items[front]);
        front++;
        if(front>rear)
        front= rear -1;
    }
}


void display(){
    if(front== -1)
    printf("\n queue is empty");
    else{
        int i;
        for(i=front; i<=rear;i++)
        {
            printf("%d", items[i]);
        }
    }
printf("\n");
}


