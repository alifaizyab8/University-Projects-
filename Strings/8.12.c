// 5-Liner Limerick Generator
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    // AABBA rhyme scheme
    // Lines with 'A' rhyme ending (lines 1, 2, 5)
    char *lineA1[] = {"There once was a man from Peru", "A woman named Jane from Seville", "An old fellow down by the lake", "A young girl from Portland so fair", "A wizard who lived in a tower"};
    char *lineA2[] = {"Whose dreams had become very true", "Who climbed up a very tall hill", "Who only ate strawberry cake", "With ribbons all woven in hair", "With magical spells and such power"};
    char *lineA3[] = {
    "He flew on a ship painted blue",          
    "She watched from the top of the hill",    
    "He baked what he could for the sake of cake", 
    "She laughed with delight in the air",     
    "He studied the stars every hour"          
};

    // Lines with 'B' rhyme ending (lines 3, 4)
    char *lineB1[] = {"He'd dance every night without care", "She'd laugh till the birds flew away", "And drank lots of coffee each day", "They'd waltz through the night oh so bright", "He'd conjure up gold by the sight"};
    char *lineB2[] = {"And toss all his worries in air", "While friends gathered round just to play", "With jam on his tie every day", "And stars shimmered down with their light", "And make all his visions take flight"};
    
    srand(time(NULL));
    
    for(int i = 0; i < 5; i++)
    {
        int randA = rand() % 5;
        int randB = rand() % 5;
        
        // Print limerick with AABBA pattern
        printf("%s,\n%s,\n%s;\n%s,\n%s.\n\n", 
               lineA1[randA],  // Line 1 - A
               lineA2[randA],  // Line 2 - A
               lineB1[randB],  // Line 3 - B
               lineB2[randB],  // Line 4 - B
               lineA3[randA]); // Line 5 - A (repeats line 1 idea)
    }
    
    return 0;
}
