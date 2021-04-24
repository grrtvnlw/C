#include <stdio.h>

int main()
{
    int c, nl, tabs, spaces;

    nl = 0;
    tabs = 0;
    spaces = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++nl;
        if (c == '\t')
            ++tabs;
        if (c == ' ')
            ++spaces;
    }
    printf("newline: %d\ntabs: %d\nspaces: %d\n", nl, tabs, spaces);
}