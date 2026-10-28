#include <stdio.h>

struct Organisation
{
    char name[50];
    char location[50];
    int employee;
    char type[50];
};

int main()
{
    struct Organisation org[100];
    int n, i, company, choice;

    printf("Enter number of organisations: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter Organisation %d Name: ", i + 1);
        scanf("%s", org[i].name);

        printf("Enter Organisation Location: ");
        scanf("%s", org[i].location);

        printf("Enter Number of Employees: ");
        scanf("%d", &org[i].employee);

        printf("Enter Organisation Type: ");
        scanf("%s", org[i].type);
    }

    do
    {
        printf("\n------ Organisation List ------\n");

        for(i = 0; i < n; i++)
        {
            printf("%d. %s\n", i + 1, org[i].name);
        }

        printf("0. Exit\n");
        printf("Select an organisation: ");
        scanf("%d", &company);

        if(company == 0)
        {
            break;
        }

        if(company < 1 || company > n)
        {
            printf("Invalid Organisation Choice!\n");
            continue;
        }

        printf("\n------ Information Menu ------\n");
        printf("1. Show Organisation Name\n");
        printf("2. Show Organisation Location\n");
        printf("3. Show Number of Employees\n");
        printf("4. Show Organisation Type\n");
        printf("5. Show All Information\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Organisation Name: %s\n",
                       org[company - 1].name);
                break;

            case 2:
                printf("Organisation Location: %s\n",
                       org[company - 1].location);
                break;

            case 3:
                printf("Number of Employees: %d\n",
                       org[company - 1].employee);
                break;

            case 4:
                printf("Organisation Type: %s\n",
                       org[company - 1].type);
                break;

            case 5:
                printf("Organisation Name: %s\n",
                       org[company - 1].name);
                printf("Organisation Location: %s\n",
                       org[company - 1].location);
                printf("Number of Employees: %d\n",
                       org[company - 1].employee);
                printf("Organisation Type: %s\n",
                       org[company - 1].type);
                break;

            default:
                printf("Invalid Information Choice!\n");
        }

    } 
    while(1);

    return 0;
}