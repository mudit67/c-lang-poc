#include <stdio.h>
int moveDisc(int pegA, int pegB, int pegC
						 //  ,int Dis1, int Dis2, int Dis3, int Dis4
);
void showDiscPosition(int Dis1, int Dis2, int Dis3, int Dis4);
int main()
{
	printf("   A\t   B\t   C\n");
	fflush(stdout);
	moveDisc(4, 0, 0, 1, 1, 1, 1);
	return 0;
}
int moveDisc(int pegA, int pegB, int pegC,
						 //  int Dis1, int Dis2, int Dis3, int Dis4
)
{
	int TotalDisc = pegA + pegB + pegC;
	if ((pegA == TotalDisc) || (pegA == 2 && pegC == 2))
	{
		pegA--;
		pegB++;
		// Dis1 = 3;
		printf("Moving a Disc From Peg A to Peg B\n");
		fflush(stdout);
		// sshowDiscPosition(Dis1, Dis2, Dis3, Dis4);
		return moveDisc(pegA, pegB, pegC
										//  ,Dis1, Dis2, Dis3, Dis4
		);
	}
	else if ((pegA == TotalDisc - 1))
	{
		pegA--;
		pegC++;
		printf("Moving a disc from Peg A to Peg C\n");
		fflush(stdout);
		return moveDisc(pegA, pegB, pegC);
	}
	else if (pegB == 1 && pegC == 1)
	{
		pegB--;
		pegC++;
		printf("Moving a Disc from Peg B to Peg C\n");
		fflush(stdout);
		return moveDisc(pegA, pegB, pegC);
	}
	else if (pegA == 1 && pegB == 1)
	{
		pegC--;
		pegA++;
		printf("Moving a Disc from Peg C to Peg A\n");
		fflush(stdout);
		return moveDisc(pegA, pegB, pegC);
	}
	else if (pegC == TotalDisc)
	{
		printf("Done!\n");
		return 0;
	}
}
// Can't see a simple way to implement displaying the discs position.

// void showDiscPosition(int Dis1, int Dis2, int Dis3, int Dis4)
// {
// 	printf("%d %d %d %d |", Dis1 == 1 ? 1 : printf(""), Dis2 == 1 ? 2 : printf(""), Dis3 == 1 ? 3 : printf(""), Dis4 == 1 ? 4 : printf(""));
// 	printf("%d %d %d %d |", Dis1 == 2 ? 1 : printf(""), Dis2 == 2 ? 2 : printf(""), Dis3 == 2 ? 3 : printf(""), Dis4 == 2 ? 4 : printf(""));
// 	printf("%d %d %d %d \n", Dis1 == 3 ? 1 : printf(""), Dis2 == 3 ? 2 : printf(""), Dis3 == 3 ? 3 : printf(""), Dis4 == 3 ? 4 : printf(""));
// }