#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void arrowhere(int option, int current)
{

    printf(option == current ? "-> " : "   ");
}
int showmenu(char menuTitle[],char opt1[],char opt2[],char opt3[],char opt4[],char opt5[])
{
    int key = 0;
    int position = 1;

    if (menuTitle == "")
    {
        menuTitle = "Main Menu";
    }
    if (opt1 == "")
    {
        opt1 = "Option 1";
    }
    
    if (opt2 == "")
    {
        opt2 = "Option 1";
    }
    
    if (opt3 == "")
    {
        opt3 = "Option 3";
    }
    if (opt4 == "")
    {
        opt4 = "Option 4";
    }
    if (opt5 == "")
    {
        opt5 = "Option 5";
    }
    printf("%s\n%s\n%s\n%s\n%s\n",menuTitle,opt1,opt2,opt3,opt4,opt5);

    while(key != 13) 
{
    system("cls");
    printf("\n\n\n");

    if (opt1 != "Option 1" && opt2 != "Option 2" && opt3 != "Option 3" && opt4 != "Option 4" && opt5 != "Option 5")
    {
        printf("======== %s ========\n\n",menuTitle);
        arrowhere(1, position); printf("%s\n",opt1);
        arrowhere(2, position); printf("%s\n",opt2);
        arrowhere(3, position); printf("%s\n",opt3);
        arrowhere(4, position); printf("%s\n",opt4);
        arrowhere(5, position); printf("%s\n\n",opt5);

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
    }else if (opt1 != "Option 1" && opt2 != "Option 2" && opt3 != "Option 3" && opt4 != "Option 4" && opt5 == "Option 5"){
        printf("======== %s ========\n\n",menuTitle);
        arrowhere(1, position); printf("%s\n",opt1);
        arrowhere(2, position); printf("%s\n",opt2);
        arrowhere(3, position); printf("%s\n",opt3);
        arrowhere(4, position); printf("%s\n\n",opt4);
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
                    if (position > 4) {
                        position = 4;
                    }
                    break;
            }
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

        int choice = showmenu("","Central Tendencies","Fibonacci Sequence","Factorial","Permutations","Exit");

        system("cls");
        
        // MEAN, MEDIAN, MODE
        if (choice == 1) 
        {
            printf("\n>>> MEASURES OF CENTRAL TENDENCY <<<\n");
            printf("       (Mean, Median, Mode)    \n\n");

            int n, sum, i, temp, median, mode, max_count, count;
            float mean;
            int numbers[50];

            do
            {
                printf("|| Enter how many numbers you want (10 to 50): ");
                scanf("%d", &n);

            } while (n < 10 || n > 50);

            printf("\n");
            printf("|| Please enter %d numbers: ", n);
            printf("\n");

            // MEAN & TOTAL

            for (i = 0; i < n; i++)
            {
                printf("\n");
                printf("> Number %d: ", i + 1);
                scanf("%d", &numbers[i]);
            }

            for (i = 0; i < n; i++)
            {
                sum += numbers[i];
            }

            mean = (float)sum / n;

            printf("\n\n------- RESULTS -------\n");
            printf("\n> Total = %d\n", sum);
            printf("\n> Mean (Average): %.2f\n", mean);

            // MEDIAN

            for (int i = 0; i < n - 1; i++)
            {
                for (int j = 0; j < n - 1; j++)
                {
                    if (numbers[j] > numbers[j + 1])
                    {
                        temp = numbers[j];
                        numbers[j] = numbers[j + 1];
                        numbers[j + 1] = temp;
                    }
                }
            }
            if (n % 2 == 0)
            {
                median = (int)(numbers[n / 2] + numbers[(n / 2) - 1]) / 2;
                printf("\n> Median (Middle): %d\n", median);
            }
            else
            {
                median = (int)numbers[n / 2];
                printf("\n> Median (Middle): %d\n", median);
            }

            // MODE

            mode = numbers[0];

            for (int i = 0; i < n; i++)
            {
                int count = 1;
                while (i + 1 < n && numbers[i] == numbers[i + 1])
                {
                    count++;
                    i++;
                }
                if (count > max_count)
                {
                    max_count = count;
                    mode = numbers[i];
                }
            }

            if (max_count > 1)
            {
                printf("\n> Mode (Most Common): %d\n", mode, max_count);
            }
            else
            {
                printf("\n> Mode (Most Common): No mode\n");
            }
            
        } else if (choice == 2)
        {
            printf(">> Fibonacci Sequence <<");
            int n, m, l, nextTerm = 0, counter = 0;
            printf("\nEnter the number of terms: ");
            scanf("%d", &m);
            printf("\nEnter the number: ");
            scanf("%d", &n);

            while (counter < m) {
                nextTerm = nextTerm + n;
                n = nextTerm - n;
                counter++;
                printf("%d ", nextTerm);
            }
        } else if (choice == 3)
        {
            int n, i;
            long fact = 1;
            
            printf("Welcome to the Factorial Calculator!\n");
            printf("Enter a number:");
            scanf("%d", &n);

            for(i = 1; i <= n; i++) {
                fact = fact * i;
            }
            
            printf("Factorial of %d is %ld\n", n, fact);          
        } else if (choice == 4)
        {
            while (1)
            {
                int userChoice = showmenu(
                "Permutations",
                "Standard Permutation P(n,r)",
                "Permutation with repetition allowed (n^r)",
                "Permutation with identical objects (n!/a!b!c!..)",
                "Exit",
                "");

                system("cls");

                int n = 0;
                int r = 0;
                int identicalObjects[50];
                int fnProduct = 0;
                int frProduct = 0;
                int l1 = 0, l2 = 0, l3 = 0, l4 = 0;
                long int pResult = 0;
                int SOAIO = 0;
                char option = 'y';

                if (userChoice == 1)
                {
                    printf("Enter total number of objects(n):");
                    scanf("%d",&n);
                    printf("Enter number of objects to be arranged(r):");
                    scanf("%d",&r);

                    if (r > n || r <= 0 || n <= 0)
                    {
                        printf("Invalid syntax!");
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
                    printf("Enter the total number of available objects(n):");
                    scanf("%d",&n);
                    printf("Enter the number of positions to fill(r):");
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
                        printf("\nResult:%d",pResult);
                    }
                    

                }else if (userChoice == 3){
                    printf("Enter total number of objects(n):");
                    scanf("%d",&n);


                    fnProduct = n;
                    for ( l4 = n - 1; l4 > 1; l4--)
                        {
                            fnProduct = fnProduct * l4;
                        }

                    do
                    {
                        printf("Enter number of repeats:");
                        scanf("%d",&identicalObjects[r]);
                        r += 1;
                        printf("continue?(y/n):");
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
                        printf("Invalid syntax identical objects must be equal to n (a + b + c.. = n)");
                    }else{

                        frProduct = identicalObjects[0];
                        for ( l3 = 0; l3 < l1-1; l3++)
                        {
                            frProduct = frProduct * identicalObjects[l3+1];
                        }
                        pResult = fnProduct/frProduct;
                        printf("\nResult:%d",pResult);
                    }
                    
                }else if (userChoice == 4)
                {
                    break;
                } else {printf("Invalid input!");}
            }
        }else if (choice == 5)
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
