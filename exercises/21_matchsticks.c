#include <stdio.h>
int main()
{
    int total_match = 21;
    int userPick, compPick;
    while (total_match > 0)
    {
        if (total_match == 1)
        {
            printf("There is only 1 Matchstick left to pick.\nHence You loose.\n");
            total_match--;
        }
        else
        {

            printf("Pick Matchstick(s) 1,2,3,or 4: ");
            fflush(stdout);
            scanf("%d", &userPick);
            total_match -= userPick;
            printf("You Picked %d. %d Matchsticks left.\n", userPick, total_match);
            fflush(stdout);
            if (total_match == 1)
                compPick = 1;
            // Comouter player must ensure that it doesn't have to pick
            // when only 6 is left.
            // Other wise it looses.
            else if (total_match < 7)
                compPick = total_match - 1;

                
            else if (total_match == 7)
                compPick = 1;
            else if (total_match == 8)
                compPick = 2;
            else if (total_match == 9)
                compPick = 3;
            else if (total_match == 10)
                compPick = 4;
            /*
            Computer shouldn't reach 11.
            11-1-4
            11-2-3
            11-3-2
            11-4-1
            all will result into 6 matchsticks left when computer picks up matchstick(s)
            */
            else if (total_match == 12)
                compPick = 1;
            else if (total_match == 13)
                compPick = 2;
            else if (total_match == 14)
                compPick = 3;
            else if (total_match == 15)
                compPick = 4;
            /*
            Similarly it can't reach 16
            */
            else if (total_match == 17)
                compPick = 1;
            else if (total_match == 18)
                compPick = 2;
            else if (total_match == 19)
                compPick = 3;
            else if (total_match == 20)
                compPick = 4;
            else
                compPick = 4;

            total_match -= compPick;
            printf("Computer Picks: %d. %d Matchsticks left\n", compPick, total_match);
            if (total_match == 0)
            {
                printf("Computer Picked the last match.\nYou Won!!\n");
            }
        }
    }
    return 0;
}
/*
This game has to be designed so that no matter what happens computer wins.
Which means that 21 number has been picked that ensures that
the player to pick the matchstick 2nd wins.

*/
