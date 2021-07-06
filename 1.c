
#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int Dice();
int main(){
srand((unsigned int)time(NULL));
 char yrname[20];

printf("What is your name?\n");
 printf(">");
 scanf("%s",yrname);
 printf("Hello, %s!\n",yrname);
 
printf("Rolling the dice...\n");

 int pa=0;
 int valu=0;


 while(pa<2)
 {
  valu += Dice(pa+1);
  pa++;
 }

 printf("Total value:%d\n",valu);
 if(valu>=7)
  {
   printf("%s won!\n",yrname);
  }
 else printf("%s lost!\n",yrname);


return 0;

}


int Dice(int pa){

 int dinum;

 dinum = rand()%6+1;
 printf("Die %d:%d\n",pa,dinum);

 return dinum;
}
//=======
//>>>>>>> experimental
