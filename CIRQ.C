#include<stdio.h>

int cq[10],front=-1,rear=-1,n;
void enqueue(),dequeue(),display(),search();

int main()
{

  int c;

  clrscr();

  printf("enter the size of the queue:");
  scanf("%d",&n);

  while(1)
  {
   printf("\n1.enqueue \n 2.dequeue \n 3.search \n 4.display \n 5.exit \n");
   scanf("%d",&c);

   switch(c)
   {
     case 1:
     enqueue();
     break;

     case 2:
     dequeue();
     break;

     case 3:
     search();
     break;

     case 4:
     display();
     break;

     case 5:
     exit(0);


    }

  }
}



void enqueue()
{
   int item;

   printf("enter element to be inserted:\n");
   scanf("%d",&item);

 if((rear+1)%n==front)
  {
    printf("overflow");
  }

  else if(front==-1 && rear==-1)
   {
     front=rear=0;
     cq[rear]=item;
     printf("\n element inserted \n");
   }

   else
   {
     rear=(rear+1)%n;
     cq[rear]=item;
     printf("\n element inserted\n");
   }
 }

 void dequeue()
 {

 if(front==-1 && rear==-1)
  {

     printf("underflow");
  }

  else if(front==rear)
  {
    front=rear=-1;
    printf("deleted element is:%d",cq[front]);
  }

  else
   {
     printf("deleted element is : %d",cq[front]);
     front=(front+1)%n;
   }

 }

 void display()
 {

    int i;

   if(front==-1 && rear==-1)
     {
       printf("empty");
     }

   else
     {
       printf("\n elements are:\n");

       i=front;

	 while(i!=rear)
	 {

	   printf("\t %d",cq[i]);
	    i=(i+1)%n;
	 }

	     printf("\t %d",cq[rear]);

     }

}

                    
  void search()
  {

    int i,element;



    if(front=-1 && rear==-1)

    {

      printf("cannot find");
      return;
    }


     printf("enter element to be searched:");
      scanf("%d",&element);

      for(i=front;i<=rear;i++)
      {
	if(cq[i]==element)
	{
	  printf("item found at postion %d",i);
	  return;
	}
     }

     for(i=0;i<=rear;i++)
     {
		if(cq[i]==element)
	{
	  printf("item found at postion %d",i);
	  return;
	}
     }


     printf("element not found");

    }





