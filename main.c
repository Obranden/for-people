#include "libft.h"

int     main(void)
{
    printf("%sENTER to continue%s", BLK_RED, DEF);
    int c;
    if ((c = getchar()) == ENTER){
        char str1[20];
        char str2[20];
        int i;

        i = 0;
        printf("%sChoice %s1%s:", BIG_BLUE, BIG_RED, DEF);
        fgets(str1, 20, stdin);
        i++;
        if (strlen(str1) == 1)
        {
            printf("%sEmpty string %s1%s\n",BIG_GREEN, BIG_RED, DEF);
            c = ENTER;
            main();
            return (0);
        }

        printf("%sChoice %s2%s:", BIG_BLUE, BIG_RED, DEF);
        fgets(str2, 20, stdin);
        i++;
        if (strlen(str2) == 1)
        {
            printf("%sEmpty string %s2%s\n", BIG_GREEN, BIG_RED, DEF);
            c = ENTER;
            main();
            return (0);
        }
        srand(time(NULL));
        printf("%sYour choice:%s%d%s\n", BIG_BLUE, BLK_RED, 1 + rand()%i, DEF);
        return (0);
        }
    return (0);
}
