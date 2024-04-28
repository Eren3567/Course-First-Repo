//
//  main.cpp
//  Select_Day
//
//  Created by Eren Çetintaş on 28.04.2024.
//

#include <stdio.h>

int main() {
    int day;

    printf("Enter a day number (1-7): ");
    scanf("%d", &day);

    switch(day) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("Weekday\n");
            break;
        case 6:
        case 7:
            printf("Weekend\n");
            break;
        default:
            printf("Invalid input: Enter a number between 1 and 7.\n");
    }

    return 0;
}
