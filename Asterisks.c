#include <stdio.h>
int main()
{
    printf("Rectangle of Asterisks:\n");
    printf("\n*********\n");
    for (int i = 0; i < 7; i++)
    {
        printf("*       *\n");
    }
    printf("*********\n");

    printf("\n\nOval of Asterisks:\n");
    printf("\n   ***   \n");
    printf(" *     * \n");
    for (int i = 0; i < 5; i++)
    {
        printf("*       *\n");
    }
    printf(" *     * \n");
    printf("   ***   \n");
    printf("\n\nArrow of Asterisks:\n");
    printf("\n    *    \n");
    printf("   ***   \n");
    printf("  *****  \n");
    for (int i = 0; i < 6; i++)
    {
        printf("    *    \n");
    }

    printf("\n\nDiamond of Asterisks:\n");
    printf("\n    *    \n");
    printf("   * *   \n");
    printf("  *   *  \n");
    printf(" *     * \n");
    printf("*       *\n");
    printf(" *     * \n");
    printf("  *   *  \n");
    printf("   * *   \n");
    printf("    *    \n");
    return 0;
}
