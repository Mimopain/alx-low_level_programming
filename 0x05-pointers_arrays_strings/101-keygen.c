#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

/**
 * generate_password - Generates a random password.
 *
 * Return: The generated password as a string.
 */
char *generate_password(void)
{
    static char password[PASSWORD_LENGTH + 1];
    const char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int i;

    srand(time(0));

    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        password[i] = characters[rand() % (sizeof(characters) - 1)];
    }
    password[PASSWORD_LENGTH] = '\0';

    return password;
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
    printf("%s\n", generate_password());
    return 0;
	}

