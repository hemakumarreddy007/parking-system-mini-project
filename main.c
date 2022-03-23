#include <stdio.h>
#include<math.h>
#include<stdlib.h>
int not=0, noc=0, nor=0, nob=0, amount=0, count=0;
//nob=number of bus /car /rikshaw /bike

void truck()
{
  printf("\nEnter Successful");
  not++;
  amount=amount+200;
  count++;
}

void car()
{
  printf("\nEnter successful");
  noc++;
  amount=amount+100;
  count++;
}
void rikshaw()
{
  printf("\nEnter successful");
  nor++;
  amount=amount+70;
  count++;
}
void bike()
{
  printf("\nEnter successful");
  nob++;
  amount=amount+50;
  count++;
}

void status()
{
  printf("\nNumner of bus/truck=%d",not);
  printf("\nNumber of car/jeep=%d",noc);
  printf("\nNumber of rikshaw=%d",nor);
  printf("\nNumber of bike=%d",nob);
  printf("\nTotal number of vehicles=%d",count);
  printf("\nTotal amount=%d",amount);
}
void clear()
{
  not=0;
  noc=0;
  nor=0;
  nob=0;
  amount=0;
  count=0;
  printf("\nData cleared successfilly");
}
int menu()
{
 int ch;
 printf("\n\n\n 1. Enter bus/truck");
 printf("\n 2. Enter car/jeep");
 printf("\n 3. Enter rikshaw");
 printf("\n 4. Enter bike");
 printf("\n 5. Check status");
 printf("\n 6. Clear data");
 printf("\n 7. exit");
 printf("\n Enter your choice:  ");
 scanf("%d",&ch);
 return(ch);
}
void main()
{
  while(1)
  {
    switch(menu())
    {
      case 1:
          truck();
          break;
      case 2:
          car();
          break;
      case 3:
          rikshaw();
          break;
      case 4:
          bike();
          break;
      case 5:
          status();
          break;
      case 6:
          clear();
          break;
      case 7:
          exit(0);
      default:
          printf("\n Enter correct option");

    }
  }
  getch();
}