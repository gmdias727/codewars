#include <stdio.h>

char *Reverse(char *ptr)
{
    char *first = ptr;
    char *last = ptr;

    while (*last)
        ++last;

    if (first < last)
    {
        for (; first < --last; ++first)
        {
            char c = *first;
            *first = *last;
            *last = c;
        }
    }
    return ptr;
}
