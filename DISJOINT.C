#include<stdio.h>

void unionab(int a[10],int b[10]);
int findab(int a[10],int b[10]);

int main()
{

  int a[10],b[10],i;
  int parent,num;

  printf("enter elements for set a (5 elements)");
  for(i=0;i<5;i++)
  {
  scanf("%d",&a[i]);
  }

   printf("enter elements for set b (4 elements)");
  for(i=0;i<4;i++)
  {
  scanf("%d",&b[i]);
  }

  unionab(a,b);
  parent=find(a,b);

  if(parent==a[0])


    printf("element found in set a \n root nod=%d",parent);

  else if(parent==b[0])

     printf("element found in set b \n root nod=%d",parent);

  else

	 printf("element not  found");



  return 0;

 }


 void unionab(int a[10],int b[10])
 {

   int i,j,uni[10];

   for(i=0;i<5;i++)
   {
     uni[i]=a[i];
   }

   for(i=5,j=0;j<4;i++,j++)
   {
     uni[i]=b[j];
   }

   printf("\n a-");
   for(i=0;i<5;i++)
   {
     printf("%d",a[i]);
   }

    printf("\n b-");
   for(i=0;i<4;i++)
   {
     printf("%d",b[i]);
   }

   printf("\n aub");
   for(i=0;i<9;i++)
   {
     printf("%d",uni[i]);
   }

  }


  int find(int a[10],int b[10])
  {
    int i, num,parent;

    printf("enter number to be searched:");
    scanf("%d",&num);

    for(i=0;i<5;i++)
    {
      if(a[i]==num)
      {

	parent=a[0];
      }
    }

      for(i=0;i<4;i++)
    {
      if(b[i]==num)
      {

	parent=b[0];
      }
    }

    return parent;
  }







