#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

void print_alphabet(void);

void print_alphabet(void)
{
        char word;
        for(word='a';word<='z';word++){
                putchar(word);
        }
        putchar('\n');
}


#endif
