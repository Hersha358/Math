#include <stdio.h>
#include <stdlib.h>

int main() {
    char tryAgain;
    do
    {
        system("cls");

        int choice, i, j;

        printf(">>>>>>> Math Menu <<<<<<<\n\n");
        printf("1) Mean, Median, Mode\n");
        printf("2) Nalimot ko unsa ni\n");
        printf("3) Factorial\n");
        printf("4) Permutation\n");
        printf("5) Exit\n\n");

        printf("Choose a number: ");
        scanf("%d", &choice);
        
        // MEAN, MEDIAN, MODE
        if (choice == 1) 
        {
            printf(">> MEAN, MEDIAN, MODE <<");
            
        }
        
        // PROBLEM 2
        if (choice == 2)
        {
            printf(">> PROBLEM 2 <<");
            
        }
        
        // FACTORIAL
        if (choice == 3)
        {
            printf(">> FACTORIAL <<");
                      
        }
        
        // PERMUTATION
        if (choice == 4)
        {
            printf(">> PERMUTATION <<");
            
            
        }
        
        if (choice == 5)
        {
            break;
        }
        
        // TRY AGAIN QUESTION

        printf("\n\nDo you want to return to the MENU? (Y/N): ");
        scanf(" %c", &tryAgain);
        printf("\n");

    } while (tryAgain == 'y' || tryAgain == 'Y');

    printf(">> Thank you for using our console! <<\n");
    return 0;
}