#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define MAX_LIMIT 9223372036854775807LL

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
            int n = 0;
            int r = 0;
            long long int fnProduct = 0;
            long long int frProduct = 0;
            long long int l1 = 0;
            long long int pResult = 0;

            printf("\n===========================");
            printf("\nWelcome to permutation!");
            printf("\n===========================");
            printf("\nEnter total number of objects(n):");
            scanf("%d",&n);
            printf("Enter number of objects to be arranged(r):");
            scanf("%d",&r);

            if (r > n || r <= 0 || n <= 0)
            {
                printf("Invalid syntax!");
            }else {

                fnProduct = 1;
                frProduct = n - r;
                for ( l1 = n; l1 > frProduct; l1--)
                {
                    if (l1 == frProduct)
                    {
                        printf("Reached: %lld/%lld",l1,frProduct);
                        break;
                    }
                    if (fnProduct > MAX_LIMIT / l1)
                    {
                        printf("\nOverflow detected! Innacurate results may yield.");
                    }else{
                        printf("\nSTATE: %lld * %lld",fnProduct,l1);
                        fnProduct = fnProduct * l1;
                    }
                }

                if (frProduct == 0)
                {
                    pResult = fnProduct;
                }else{
                    pResult = fnProduct;
                }
            printf("\nResult:%lld, n = %lld, r = %lld",pResult,n,r);
            }
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