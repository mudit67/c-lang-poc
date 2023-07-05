/*
This game has to be designed so that no matter what happens computer wins.
Which means that 21 number has been picked that ensures that
the player to pick the matchstick 2nd wins.
*/
#include <stdio.h>
int main()
{
    int total_match = 21;
    int userPick, compPick, no_5;
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
            else
            {
                no_5 = (total_match - 1) / 5;
                compPick = total_match - (no_5 * 5 + 1);
            }
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
