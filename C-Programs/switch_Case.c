// Program to print the name of the month using switch case statement
#include <stdio.h>
int main() {
    int month; // variable to store the month number
    printf("Enter a month number (1-12): ");
    scanf("%d", &month); // read the month number from user
    switch (month) { // switch on the month value
        case 1: // if month is 1
            printf("The month is January.\n"); // print January
            break; // break out of the switch
        case 2: // if month is 2
            printf("The month is February.\n"); // print February
            break; // break out of the switch
        case 3: // if month is 3
            printf("The month is March.\n"); // print March
            break; // break out of the switch
        case 4: // if month is 4
            printf("The month is April.\n"); // print April
            break; // break out of the switch
        case 5: // if month is 5
            printf("The month is May.\n"); // print May
            break; // break out of the switch
        case 6: // if month is 6
            printf("The month is June.\n"); // print June
            break; // break out of the switch
        case 7: // if month is 7
            printf("The month is July.\n"); // print July
            break; // break out of the switch
        case 8: // if month is 8
            printf("The month is August.\n"); // print August
            break; // break out of the switch
        case 9: // if month is 9
            printf("The month is September.\n"); // print September
            break; // break out of the switch
        case 10: // if month is 10
            printf("The month is October.\n"); // print October
            break; // break out of the switch
        case 11: // if month is 11
            printf("The month is November.\n"); // print November
            break; // break out of the switch
        case 12: // if month is 12
            printf("The month is December.\n"); // print December
            break; // break out of the switch
        default: // if none of the above cases match
            printf("Invalid month number.\n"); // print invalid input message
    }
    return 0; // return from main function
}
