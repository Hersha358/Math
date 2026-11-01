#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void arrowhere(int option, int current)
{
    printf(option == current ? "-> " : "   ");
}
int showmenu(void)
{
    int key = 0;
    int position = 1;

    while(key != 13) 
{
    system("cls");
    printf("\n\n\n");

    printf("======== Main Menu ========\n\n");
    arrowhere(1, position); printf("Central Tendencies\n");
    arrowhere(2, position); printf("Fibonacci Sequence\n");
    arrowhere(3, position); printf("Factorial\n");
    arrowhere(4, position); printf("Permutations\n");
    arrowhere(5, position); printf("Exit\n\n");

    key = getch();

    if (key == 224 || key == 0) { 
        switch (getch()) { 
            case 72: 
                position--;
                if (position < 1) {
                    position = 1;
                }
                break;
            case 80: 
                position++;
                if (position > 5) {
                    position = 5;
                }
                break;
        }
    }
}
    return position;
}
int main()
{
    char tryAgain;

    do
    {

        int choice = showmenu();

        system("cls");
        
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
