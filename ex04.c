#include <stdio.h>
#include<stdlib.h>
#include<math.h>


int main()

{
  int i, j ,n;

  int heads=0;
  int tails=0;


  char str[8];

  printf("Who are you？");

  scanf("%s",str);

  printf("Hello, %s\n",str);


  printf("Tossing a coin ...");
  printf("\n");

  for (i = 0;i < 3;i++){

    n=rand();

    if (n%2==0){

      printf("Raund %d: Head\n",i+1);

      heads++;
    }
    else {
      printf("Round %d: Tail\n",i+1);
      tails++;
    }
  }
  printf("Heads: %d, Tails: %d\n",heads, tails);

  if(heads>tails){

    printf("%s won!\n",str);
  }
  else {
    printf("%s lost!\n",str);
  }

  return 0;
}


