#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BUSES 50
#define MAX_ROUTES 5
#define MAX_SEATS 30

// Structures
typedef struct
{
    int busNumber;
    char driverName[50];
    char route[MAX_ROUTES][50];
    int routeCount;
    float fare;
    int seats[MAX_SEATS];
} Bus;

// Function prototypes
void displayMenu();
void addBus(Bus buses[], int *numBuses);
void displayBuses(Bus buses[], int numBuses);
// Add more functions as needed

int main()
{
    Bus buses[MAX_BUSES];
    int numBuses = 0;
    int choice;

    do
    {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addBus(buses, &numBuses);
            break;
        case 2:
            displayBuses(buses, numBuses);
            break;
        // Add more cases for other functionalities
        case 0:
            printf("Exiting the program.\n");
            break;
        default:
            printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}

// Function definitions

void displayMenu()
{
    printf("\n--- Bus Management System Menu ---\n");
    printf("1. Add a new bus\n");
    printf("2. Display all buses\n");
    // Add more options here
    printf("0. Exit\n");
}

void addBus(Bus buses[], int *numBuses)
{
    if (*numBuses >= MAX_BUSES)
    {
        printf("Maximum number of buses reached!\n");
        return;
    }

    Bus newBus;
    printf("Enter bus number: ");
    scanf("%d", &newBus.busNumber);
    printf("Enter driver name: ");
    scanf("%s", newBus.driverName);
    printf("Enter route count: ");
    scanf("%d", &newBus.routeCount);
    printf("Enter fare: ");
    scanf("%f", &newBus.fare);

    printf("Enter route details:\n");
    for (int i = 0; i < newBus.routeCount; i++)
    {
        printf("Route %d: ", i + 1);
        scanf("%s", newBus.route[i]);
    }

    buses[*numBuses] = newBus;
    (*numBuses)++;
    printf("Bus added successfully!\n");
}

void displayBuses(Bus buses[], int numBuses)
{
    if (numBuses == 0)
    {
        printf("No buses available.\n");
        return;
    }

    printf("\n--- List of Buses ---\n");
    for (int i = 0; i < numBuses; i++)
    {
        printf("Bus Number: %d\n", buses[i].busNumber);
        printf("Driver Name: %s\n", buses[i].driverName);
        printf("Route(s):\n");
        for (int j = 0; j < buses[i].routeCount; j++)
        {
            printf("- %s\n", buses[i].route[j]);
        }
        printf("Fare: $%.2f\n", buses[i].fare);
        printf("\n");
    }
}
