#include <iosteam>
using namespace std;

int main()
{
	int list[10], key, num, i;

	printf("Enter no.of elements : ");
	scanf("%d",&num);
	printf("Enter %d elements\n", num);
	for (i = 1; i<=num; i++)
		scanf("%d",&list[i]);
	printf("\n enter the value to be searched: ");
	scanf("%d", &key);
	i = 1;
	while (key != list[i] && i<num)
	{

		 i++;
	}
	if (key == list[i])

		printf("\n %d element is found at location %d",list[i], i);
	else
	printf("search is unsucessful");

	return 0;
}
