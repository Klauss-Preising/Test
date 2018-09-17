/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf(AreaOfTrapezoid(2, 4, 2));
    return 0;
}

int AreaOfTrapezoid(int base1, int base2,int height)
{
    return ((base1 + base2) / 2) * height;
}