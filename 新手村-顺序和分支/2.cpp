#include <stdio.h>

int main()
{
	struct time
	{
		int school;
		int mother;
	};

	struct time day[7];

	int a, unhappy, total, max;

	for ( a = 0; a <= 6; a++)
	 {
	 	scanf("%d %d", &day[a].school, &day[a].mother);
	 } 
	 for(a = unhappy = max = 0; a <= 6; a++)
	 {
	 	total = day[a].school + day[a].mother;
	 	if(total > 8 && total > max)
	 	{
	 		unhappy = a + 1;
	 		max = total;
	 	}
	 }

	 printf("%d\n", unhappy);

	return 0;
}