#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int Dice();
int main(){
printf("Rolling the dice...\n");

 int pa=0;
 int valu=0;

 while(pa<2)
 {
  valu += Dice(pa+1);
  pa++;
 }

 printf("Total value:%d\n",valu);

 return 0;

}
int Dice(int pa){

  int dinum;

  dinum = rand()%6+1;
  printf("Die %d:%d\n",pa,dinum);

  return dinum;
}
