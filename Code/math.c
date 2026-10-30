#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


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
            int userChoice = 0;
            int n = 0;
            int r = 0;
            int identicalObjects[50];
            int fnProduct = 0;
            int frProduct = 0;
            int l1 = 0, l2 = 0, l3 = 0, l4 = 0;
            long int pResult = 0;
            int SOAIO = 0;
            char option = 'y';

            printf("\n===========================");
            printf("\nWelcome to permutation!");
            printf("\n===========================");
            printf("\n[1] = Standard Permutation: P(n,r)");
            printf("\n[2] = Permutation with repetition allowed: n^r");
            printf("\n[3] = Permutation with identical objects: n!/a!b!c!..");
            printf("\n[4] = Exit permutation");
            printf("\nChoice:");
            scanf("%d",&userChoice);

            if (userChoice == 1)
            {
                printf("\nEnter total number of objects(n):");
                scanf("%d",&n);
                printf("\nEnter number of objects to be arranged(r):");
                scanf("%d",&r);

                if (r > n || r <= 0 || n <= 0)
                {
                    printf("\nInvalid syntax!");
                }else {

                    fnProduct = n;
                    for ( l1 = n - 1; l1 > 1; l1--)
                    {
                        fnProduct = fnProduct * l1;
                    }

                    frProduct = n - r;
                    
                    for ( l2 = frProduct - 1; l2 > 1; l2--)
                    {
                        frProduct = frProduct * l2;
                    }

                    if (frProduct == 0)
                    {
                        pResult = fnProduct;
                    }else{
                        pResult = fnProduct/frProduct;
                    }
            
                    printf("\nResult:%d, n = %d, r = %d",pResult,fnProduct,frProduct);
                    
                }
            }else if (userChoice == 2){
                printf("\nEnter the total number of available objects(n):");
                scanf("%d",&n);
                printf("\nEnter the number of positions to fill(r):");
                scanf("%d",&r);

                if (n <= 0 || r <= 0)
                {
                    printf("Invalid syntax!");
                }else{
                    pResult = n;
                    for ( l1 = 1; l1 < r; l1++)
                    {
                        pResult *= n;
                    }
                }
                printf("\nResult:%d",pResult);

            }else if (userChoice == 3){
                printf("\nEnter total number of objects(n):");
                scanf("%d",&n);


                fnProduct = n;
                for ( l4 = n - 1; l4 > 1; l4--)
                    {
                        fnProduct = fnProduct * l4;
                    }

                do
                {
                    printf("\nEnter number of repeats:");
                    scanf("%d",&identicalObjects[r]);
                    r += 1;
                    printf("\ncontinue?(y/n):");
                    scanf(" %c",&option);
                    
                } while (option != 'n' && option != 'N');
                
                for ( l1 = 0; l1 < r; l1++)
                {
                    frProduct = identicalObjects[l1];
                    for (l2 = identicalObjects[l1] - 1; l2 > 1; l2--)
                    {
                        
                        frProduct = frProduct * l2;
                    }
                    SOAIO = SOAIO + identicalObjects[l1];
                    identicalObjects[l1] = frProduct;
                }

                if (SOAIO != n)
                {
                    printf("\nInvalid syntax identical objects must be equal to n (a + b + c.. = n)");
                }else{

                    frProduct = identicalObjects[0];
                    for ( l3 = 0; l3 < l1-1; l3++)
                    {
                        frProduct = frProduct * identicalObjects[l3+1];
                    }
                    pResult = fnProduct/frProduct;
                    printf("\nResult:%d",pResult);
                }
                
            }else if (userChoice == 4){}else{
                printf("Invalid input!");
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