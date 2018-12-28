#include<stdio.h>
int main() {
    int i, space, rows=7, star=0;

    /* Printing upper triangle */
    for(i = 1; i <= rows; i++) {
        /* Printing spaces */
        for(space = 1; space <= rows-i; space++) {
           printf(" ");
        }
        /* Printing stars */
        while(star != (2*i - 1)) {
         if(star ==0 || star==2*i-2)
                printf("*");
            else
                printf(" ");
            star++;
        }
        star=0;
        /* move to next row */
        printf("\n");
    }
    rows--;
    /* Printing lower triangle */
    for(i = rows;i >= 1; i--) {
        /* Printing spaces */
        for(space = 0; space <= rows-i; space++) {
           printf(" ");
        }
        /* Printing stars */
        star = 0;
        while(star != (2*i - 1)) {
         if(star == 0 || star==2*i-2)
                printf("*");
            else
                printf(" ");
            star++;
        }
        printf("\n");
    }

    return 0;
}
