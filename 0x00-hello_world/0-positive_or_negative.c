#include <stdlib.h>
#include <time.h>
/* more header goes there /*

/* betty style for functions may goed there /*
int main(void)
{
 	int n;

	srand(time(0));
	n = rand() -RAND_mAX / 2;
	if (n > 0)
	printf("%i is positive\n", n);
	else if (n < 0)
	printf("%i is negative\n", n);
	else
	printf("%i is zero\n", n);

	return (0);
}

