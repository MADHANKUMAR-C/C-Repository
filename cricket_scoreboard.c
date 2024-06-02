#include <stdio.h>

#define BALLS_PER_OVER 6

int main() {
    int totalOver;
    int totalRun = 0;
    int totalWicket = 0;

    printf("Enter number of overs: ");
    scanf("%d", &totalOver);

    for (int over = 1; over <= totalOver; over++) {
        printf("Over %d:\n", over);
        for (int ball = 1; ball <= BALLS_PER_OVER; ball++) {
            int runs;
            int isOut;

            printf("Enter runs scored on ball %d: ", ball);
            scanf("%d", &runs);
            printf("Was there a wicket on this ball? (1 for yes, 0 for no): ");
            scanf("%d", &isOut);

            totalRun += runs;
            if (isOut) {
                totalWicket++;
            }

            // If 10 wickets fall, the game ends
            if (totalWicket == 10) {
                printf("All out!\n");
                break;
            }
        }

        // If 10 wickets fall, the game ends
        if (totalWicket == 10) {
            break;
        }
    }

    printf("\nEnd of the innings!\n");
    printf("Total Runs: %d\n", totalRun);
    printf("Total Wickets: %d\n", totalWicket);

    return 0;
}
