//Luis Ignacio Acosta Zamora A01411895
/*
 * Write a program to read n number of integer values in an array and then:
    * Displays in a single line, separated by spaces, the numbers in the order they were entered.
    * Displays in another single line, separated by spaces, the numbers in reverse oder.
 */

#include <stdio.h>

int main() {
    //Variables that are used in the program.
    int n;

    //State the purpose of the program to the user.
    printf("This program will request you to form an array, then it will printed normally and then backwards.\n");

    //Request the array length to the user.
    printf("State the size of the array: \n");
    scanf("%d", &n);

    int list[n];

    //Form the array.
    for (int i = 0; i < n ; ++i) {
        printf("Give me integer number %i: ",i+1);
        scanf("%i", &list[i]);
    }

    //Print the content of the array is it was given.
    printf("Normal orientation: ");
    for (int j = 0; j < n ; ++j) {
        printf("%i ", list[j]);
    }

    printf("\n");

    //Print the content of the array in reverse order.
    printf("Backward orientation: ");
    for (int k = n-1; k >=0 ; --k) {
        printf("%i ", list[k]);
    }

    return 0;
}