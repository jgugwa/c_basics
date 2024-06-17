#include <stdio.h>
/*
*this is just a test code
*/int main(void)
{char m, j, g;
int age;
float worth;
char name[50];
printf("Please type your name:\n");
scanf("%49s", name);
printf("How old are you?\n");
scanf("%d", &age);
printf("What's your net worth?\n");
scanf("%f", &worth);
printf("Abbreviate your name (enter three initials separated by spaces):\n");
scanf(" %c %c %c", &m, &j, &g);
printf("Your name is %s, you are %d years old, and ", name, age);
printf("you are worth %.2f million dollars.\n", worth);
printf("Your initials are %c %c %c.\n", m, j, g);
puts("thanks for providing this info");
puts("written");
putchar('J');
putchar('U');
putchar('S');
putchar('T');
putchar('U');
putchar('S');
putchar('\n');
putchar('G');
putchar('\n');
putchar('u');
putchar('\n');
putchar('G');
putchar('\n');
putchar('W');
putchar('\n');
putchar('A');
putchar('\n');
return (0);
}
