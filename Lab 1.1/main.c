/*
 * main.c
 *
 *  Created on: Sep 15, 2020
 *      Author: nathan
 */


/* SYSC 2006 Lab 1, Exercise 3 */
#include <stdio.h>

int main     (void)
   {
        int lower, upper, step;
float fahr, celsius;

    /* Set lower and upper limits of the
 table, and step size.
       */

    lower =     0;
        upper =300;
step = 20;
    fahr= lower;

    while(     fahr <= upper   ) {
        celsius=5.0/9.0*(fahr-32.0);
printf("%4.0f %6.1f\n",fahr,celsius);
            fahr = fahr + step;
                                 }
return 0;
           }
