#include<stdlib>
#include<time.h>
#include<stdio.h>
/*
 * main - entry point
 *
 * Return: always return 0
 */
int main(void)
{
int n;
int lastn;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastn = n % 10
if (lastn > 5)
{
printf("Last digit of %d is %d and is greater then 5\n", n, lastn");
}
else if (lastn == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastn");
}
else 
{
printf("Last digit of %d is %d and is less than 6\n", n, lastn");
}
reurn (0);
}
