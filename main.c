#include "libft.h"

int     main(void)
{
    char str1[20];
    char str2[20];
    int i;

    i = 0;
    printf("%sChoice %s1%s: %s\n", BIG_BLUE, BIG_RED, DEF, DEF);
    fgets(str1, 20, stdin);
    i++;

    printf("%sChoice %s2%s: %s\n", BIG_BLUE, BIG_RED, DEF, DEF);
    fgets(str2, 20, stdin);
    i++;

    srand(time(NULL));
    printf("%s%d%s\n", BLK_RED, 1 + rand()%i, DEF);
}
