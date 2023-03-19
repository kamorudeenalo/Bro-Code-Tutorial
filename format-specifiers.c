#include <stdio.h>

// format specifier % = defines and formats a type of data to be displayed

    // %c = character
    // %s = string (array of characters) 
    // %f = float
    // %lf = double
    // %d = integer

    // %.1 = decimal precision
    // %1 = minimum field width
    // %- = left align
int main (void)
{
     float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item 1, 2 and 3: $%-8.2f $%-8.2f $%-8.2f\n", item1, item2, item3);
    printf("Item 2: $%8.2f\n", item2);
    printf("Item 3: $%8.2f\n", item3);
    
    return 0;

}
