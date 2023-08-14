#include <stdio.h>
#include <conio.h>

void menu()
{
	puts("Christ to Buddha");
	puts("	1) Christ year x");
	puts("	2) Christ years x-x");
	puts("Buddha to Christ");
	puts("	3) Buddha year x");
	puts("	4) Buddha years x-x");
	puts("5) EXIT Program");

	printf("\nSelect number then press ENTER : ");
}

void main()
{
	int year;
	int fromYear, toYear;
	int menuNumber;

	do
	{
		menu();
		scanf_s("%d", &menuNumber);
		printf("\n");

		if (menuNumber == 1)
		{
			printf("Chirst year = ");
			scanf_s("%d", &year);
			printf("Buddha year = %d\n", year + 543);
			break;
		}
		else if (menuNumber == 2)
		{
			printf("Chirst year x-x = ");
			scanf_s("%d-%d", &fromYear, &toYear);
			printf("Buddha year = %d-%d\n", fromYear + 543, toYear + 543);
			break;
		}
		else if (menuNumber == 3)
		{
			printf("Buddha year = ");
			scanf_s("%d", &year);
			printf("Christ year = %d\n", year - 543);
			break;
		}
		else if (menuNumber == 4)
		{
			printf("Buddha year x-x = ");
			scanf_s("%d-%d", &fromYear, &toYear);
			printf("Christ year = %d-%d\n", fromYear - 543, toYear - 543);
			break;
		}
		else if (menuNumber == 5)
		{
			break;
		}
		else
		{
			puts("Wrong number please select correctly number\n");
		}

		scanf_s("");
	} while (menuNumber < 1 || menuNumber > 4);

	printf("\nThank you and Press any key to exit");
	_getch();
}