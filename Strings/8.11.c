// Random sentence generator
#include <stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    char *articles[] = {"the", "a", "one", "some", "any"};
    char *nouns[] = {"boy", "girl", "dog", "town", "car"};
    char *verbs[] = {"drove", "jumped", "ran", "walked", "skipped"};
    char *prepositions[] = {"to", "from", "over", "under", "on"};
    srand(time(NULL));
    //sprintf will be used to format the sentence
    char sentence[100];
    for(int i=0;i<20;i++)
    {
        int rand1=rand()%5;
        int rand2=rand()%5;
        int rand3=rand()%5;
        int rand4=rand()%5;
        int rand5=rand()%5;
        sprintf(sentence,"%s %s %s %s %s.",articles[rand1],nouns[rand2],verbs[rand3],prepositions[rand4],articles[rand5],nouns[rand2]);
        sentence[0]=sentence[0]-32; // Capitalizing the first letter
        printf("%s\n",sentence);
    }


}



