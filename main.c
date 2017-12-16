#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variable declaration
    char answer[20];
    char name[20];
    char name2[4];
    char lastname [20];
    char lastname2 [4];
    char city[20];
    int age = 0;
    int i = 0;
    int j = 0;

    //Welcoming user
    printf("Hello, this program will create for you a password, are you ready? Y/N ");
    scanf("%s[^\n]\n", answer);

    //name
    printf("Name:");
    scanf("%s[^\n]\n", name);
    name2[0] = name[0];
    name2[1] = name[1];
    name2[2] = name[2];

    //lastname
    printf("Lastname:");
    scanf("%s[^\n]\n", lastname);
     while (lastname[j] != '\0')
    {
        j++;
    }
    lastname2[0] = lastname[j - 3];
    lastname2[1] = lastname[j - 2];
    lastname2[2] = lastname[j - 1];

    //city
    printf("City:");
    scanf("%s", city);

    while (city[i] != '\0')
    {
        i++;
    }

    //age
    printf("Age:");
    scanf("%i", &age);
    age = age % 10;

    //password
    printf("Your password: %s%s%i%i",name2, lastname2, age, i );
    return 0;
}
