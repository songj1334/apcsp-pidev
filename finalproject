#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    FILE* fp = NULL; /*This is the code that randomly chooses a word from a list of words from a file that I created. Although I created the file, this code is not mine, and was on a forum where a user asked how to randomly choose a string from a list of words.*/
    char words[20];
    int i = 0 , ran = 0;
    srand(time(NULL));
    fp = fopen("hangmanwords" , "r+");
    for(; fgets(words , sizeof(words) , fp) ; i++) ;
    ran = rand() % i;
    rewind(fp);
    for(i = 0 ; i < ran ; i++)
        fgets(words , sizeof(words) , fp);
    /*The code for the randomly chosen string ends here*/
    printf("Enter a letter to guess the word\n");
    int N = strlen(words)-1;
    int stars[N];
    for (int i=0; i < N; ++i) {
      stars[i] = 0;
    }
    int end = 0;
    while (! end) {
      printf("The word is : ");
      for (int p=0; p < N; ++p) {
        if (stars[p]) {
          printf("%c", words[p]);
        }
        else {
          printf("*");
        }
      }
      printf("\n");
      fflush(stdout);  
      char predict;
      printf("Letter: ");
      scanf("%c", &predict);
      for(int b=0; b < N; ++b) {
        if (words[b] == predict) {
      stars[b] = 1;
        }
      }
      end = 1;
      for(int z = 0; z < N; ++z) {
        if (!stars[z]) {
          end = 0;
        }
          break;
      }
    }
    printf("Correct! The word is %s", words);
    return 0;
}




