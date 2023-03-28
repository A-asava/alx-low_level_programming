 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>

 /**
  * main- Entry point
  *
  * This program generates a random number and checks if it is positive,
  * negative or zero. It uses the time function to seed the random number
  * generator, and the rand function to generate a random number between
  * -RAND_MAX/2 and RAND_MAX/2. The program then checks the sign of the
  * number and prints a message indicating whether it is positive,
  * negative or zero
  * Return: always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}


	return (0);
}

