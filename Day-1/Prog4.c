#include <stdio.h>

int main() {
    int oxygen[3][3];  // To store oxygen levels of 3 trainees for 3 rounds
    int i, j;
    int sum[3] = {0};  // To store sum of oxygen levels for each trainee
    int avg[3];        // To store average oxygen levels for each trainee
    int max_avg = 0;   // To store the highest average oxygen level
    int count = 0;     // To count how many trainees have the highest average

    // Input oxygen values for each round
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &oxygen[i][j]);
            if(oxygen[i][j] < 1 || oxygen[i][j] > 100) {
                printf("INVALID INPUT\n");
                return 0;  // Exit if the input is out of range
            }
        }
    }

    // Calculate sum and average for each trainee
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            sum[i] += oxygen[j][i];  // sum for trainee i
        }
        avg[i] = sum[i] / 3;  // calculate the average for trainee i
    }

    // Find the maximum average oxygen level
    for(i = 0; i < 3; i++) {
        if(avg[i] > max_avg) {
            max_avg = avg[i];
            count = 1;  // reset count for new maximum
        } else if(avg[i] == max_avg) {
            count++;  // Increment count if same average as max_avg
        }
    }

    // Check if the maximum average oxygen level is below 70
    if(max_avg < 70) {
        printf("All trainees are unfit\n");
    } else {
        // Display trainees with the highest average oxygen level
        for(i = 0; i < 3; i++) {
            if(avg[i] == max_avg) {
                printf("Trainee Number : %d\n", i + 1);  // Trainee number is i+1
            }
        }
    }

return 0;
}