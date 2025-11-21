#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];

    // Input the name
    printf("Enter your name: ");
    scanf("%s", name);

    // Determine if the length of the name is even or odd
    if (strlen(name) % 2 == 0)
    {
        // If even, replace the first character with "EVEN"
        name[0] = 'E';
        name[1] = 'V';
        name[2] = 'E';
        name[3] = 'N';
    }
    else
    {
        // If odd, replace the first character with "ODD"
        name[0] = 'O';
        name[1] = 'D';
        name[2] = 'D';
    }

    // Print the modified name
    printf("Modified Name: %s\n", name);

    // Count vowels and consonants
    int vowels = 0, consonants = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i] == 'U' ||
            name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
        {
            vowels++;
        }
        else if ((name[i] >= 'A' && name[i] <= 'Z') || (name[i] >= 'a' && name[i] <= 'z'))
        {
            consonants++;
        }
    }

    // Print the count of vowels and consonants
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
