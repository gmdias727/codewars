#include <stdio.h>
// #include "paperwork.c"
// #include "oppositeNumber.c"
// #include "messiGoals.c"
// #include "pointers.c"
// #include "Array.c"

char *Reverse(char *ptr)
{
    char *first = ptr;
    char *last = ptr;

    while (*last) ++last;

    if (first < last)
    {
        puts("entrou");
        for (; first < --last; ++first)
        {
            char c = *first;
            *first = *last;
            *last = c;
        }
    }
    return ptr;
}

int main()
{
    char s[] = "Myung-Jin Lee - Ragnarok";
    puts(s);
    puts(Reverse(s));
    return 0;
}

