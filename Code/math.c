#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

#define MAX_LIMIT 9223372036854775807LL

// STRESS TEST NLNG ONG --TONY

void arrowhere(int option, int current)
{
    if (option == current)
    {
        printf("-> ");
    }else{
        printf("   ");
    }
}

void highlight(int opt, int curr)
{
    HANDLE Console = GetStdHandle(STD_OUTPUT_HANDLE);
    
    if (opt == curr)
    {
        SetConsoleTextAttribute(Console,
        BACKGROUND_BLUE | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_INTENSITY);
    }else
    {
        SetConsoleTextAttribute(Console,7);
    }

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
        highlight(1,position); arrowhere(1, position); printf("%s\n",opt1);
        highlight(2,position); arrowhere(2, position);  printf("%s\n",opt2);
        highlight(3,position); arrowhere(3, position);  printf("%s\n",opt3);
        highlight(4,position); arrowhere(4, position);  printf("%s\n",opt4);
        highlight(5,position); arrowhere(5, position);  printf("%s\n\n",opt5);
        highlight(6,position);
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
}
    return position;
}
int main()
{
    while (1)
    {

        int choice = showmenu("","Central Tendencies","Fibonacci Sequence","Factorial","Permutations","Exit");

        system("cls");
        
        // MEAN, MEDIAN, MODE
        if (choice == 1) 
        {
            printf("\n>>> MEASURES OF CENTRAL TENDENCY <<<\n");
            printf("       (Mean, Median, Mode)    \n\n");

            int n, sum = 0, i = 0, temp = 0, median, mode = 0, max_count = 0, count = 0;
            float mean = 0.0f;
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
            
            mean = (float) sum / n;

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
                printf("\n> Mode (Most Common): %d\n", mode);
            }
            else
            {
                printf("\n> Mode (Most Common): No mode\n");
            }
            
        } else if (choice == 2)
        {
            printf(">> Fibonacci Sequence <<");
            int counter = 0;
            long long int n = 0, m = 0, nextTerm = 0;
            printf("\nEnter the number of terms: ");
            scanf("%d", &m);
            printf("\nEnter the first term: ");
            scanf("%d", &n);
            
            while (counter < m) {
                nextTerm = nextTerm + n;
                n = nextTerm - n;
                counter++;
                printf("%lld ", nextTerm);
            }
            

        } else if (choice == 3)
        {
            int n = 0, i = 0;
            long long fact = 1;
            
            printf("Welcome to the Factorial Calculator!\n");
            printf("Enter a number:");
            scanf("%d", &n);

            if (n <= 0)
            {
                printf("n cannot be <= 0");
            }else{
                for(i = 1; i <= n; i++) {
                    fact = fact * i;
                }
                printf("Factorial of %d is %lld\n", n, fact);
            }
       
        } else if (choice == 4)
        {
            system("cls");
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
                printf("please enter n >= r >= 0");
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
                        fnProduct = fnProduct * l1;
                    }
                }
                if (frProduct == 0)
                {
                    pResult = fnProduct;
                }else{
                    pResult = fnProduct;
                }
            printf("\nP(%d,%d) = %lld",n,r,pResult);
            }
        }else if (choice == 5)
        {
            break;
        }
        
        // TRY AGAIN QUESTION

        printf("\n\nPress any key to return to main menu..");
        getch();
        printf("\n");
    }

    printf(">> Thank you for using our console! <<\n");
    // ilhanan rani nga na push jd
    return 0;
}