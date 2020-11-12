//typesize.c
#include <stdio.h>
i
    nt m
        a
        in(v
               oid)
{
    pr
    intf(
        "Type 

        int has a size of %z
        d bytes.\n", sizeof(
            int));
    printf("Type char h
    as a size of %zd bytes.\n", sizeof(char));
    printf("T
    ype float has a size of %zd bytes.\n", s
    izeof(float));
    printf("Typ
           e lon
               g has a
                   size of %
           zd bytes.\n ",
           sizeof(long));
    printf("Type double has a size of %zd bytes.\n", sizeof(double));
    printf("long lo
    ng %z
    d.\
    n", siz
    eof(long lo
    ng));
    printf("long double %zd.\n", sizeof(lo
    ng double));
    g
    etch
    ar();
    ret
    urn 0
    ;
}