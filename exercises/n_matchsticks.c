/*
This game has to be designed so that no matter what happens computer wins.
Which means that 5n+1 (Where n is a whole number) number has been picked that ensures that
the player to pick the matchstick 2nd wins.
*/
#include <stdio.h>
int main()
{
    printf("Enter the number of matchsticks. (It should be the part of the AP 1,6,11,16,21...): ");
    fflush(stdout);
    int total_match;
    scanf("%d", &total_match);
    if (total_match % 5 != 1)
    {
        printf("Invalid Choice\n");
        return 0;
    }
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
