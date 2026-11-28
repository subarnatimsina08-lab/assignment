#include <stdio.h>
// Q1
void program1 () {
    int n;
    printf("Enter an integer:");
    scanf("%d", &n);
    if (n>0)
    {
        printf("Positive");
    }
    else if (n<0)
    {
        printf("Negative");
    }
    else
    {
        printf("zero");
    }
}

// Q2
void program2 () {
    int marks;
    printf("Enter marks (0-100): ");
    scanf("%d", &marks);
    if (marks >= 80)
    {
        printf("Distinction");
        }
            else if (marks >=60)
            {
        printf("First Division");
    }
    else if (marks >= 40)
    {
        printf("pass");
    }
    else {
        printf("fail");
    }
    }

    // Q3
    void program3()
    {
        int x = 5;
        printf("%d\n", x++);
        printf("%d", ++x);
    }

    // Q4
    void program4()
    {
        int n;
        printf("enter an integer: ");
        scanf("%d", &n);
    n += 10;
    n *= 2;
    n -= 5;
    printf("Final value: %d", n);
    }

    // Q5
    void program5()
    {
        int n;
        printf("Enter an integer: ");
        scanf("%d", &n);
        if (n % 5 == 0 && n % 11 == 0)
        {
            printf("Divisible by both 5 and 11");
        }
        else
        {
            printf("Not divisible by both 5 and 11");
        }
    }

    // Q6
    void program6()
    {
        printf("__________\n");
        printf("|\tItem: pen\t|\n");
        printf("|\tPrice: 50\t|\n");
        printf("___________");
    }

    //Q7
    void program7()
    {
        int a, b, c, temp;
        printf("Enter three integers: ");
        scanf("%d %d %d", &a, &b, &c);
        temp = a;
        a = b;
        b = c;
        c = temp;
        printf("a = %d, b = %d, c = %d", a, b, c);
    }

    // Q8
    void program8()
    {
        int a, b;
        printf("Enter two integers: ");
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0)
        {
            printf("1");
        }
        else { printf("0");
        }
    }

    // Q9
    void program9()
    {
        int year;
        printf("Enter a 4-digit year: ");
        scanf("Last two digits: %02d" ,year % 100);
    }

    // Q10
    void program10()
    {
        int n;
        printf("Enter an integer : ");
        scanf("%d", &n);
        if (n % 2 == 0 && n% 3 == 0)
        {
            printf("Divisible by both 2 and 3");
        }
        else if (n % 2 == 0)
        {
            printf("only 2");
        }
        else if (n % 3 == 0)
        {
        printf("Only 3");
        }
        else
        {
            printf("Neither");
        }
    }

    // Q11
    void program11()
    {
        int balance = 500;
        int deposit, withdraw;
        printf("Enter deposit: ");
        scanf("%d", &deposit);
        printf("Enter withdraw");
         balance += deposit;
         balance -= withdraw;
         printf("Balance: %d", balance);
    }

    int main()
    {
        int choice ;
    printf("Which program (1-11)?");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1: program1(); break;
        case 2: program2(); break;
        case 3: program3(); break;
        case 4: program4(); break;
        case 5: program5(); break;
        case 6: program6(); break;
        case 7: program7(); break;
        case 8: program8(); break;
        case 9: program9(); break;
        case 10: program10(); break;
        case 11: program11(); break;
        default: printf("Invalid choice");
    }
    return 0;
    }









