#include <stdio.h>
int main()
{


int first_number;
int second_number;

printf( "Please enter a number: " );
scanf( "%d", &first_number );
printf( "You entered %d", first_number);
printf( "Please enter a number: " );
scanf( "%d", &second_number );
printf( "You entered %d", second_number);

getchar();
return 0;
}

