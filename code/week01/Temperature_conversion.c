# include <stdio.h> 
# include <stdlib.h> 
int
main( int argc, char *argv[])
	{
    float fahrenheit, celsius;

    printf("Enter degrees F: ");
	scanf("%f",&fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;
	printf( "In degrees C is: %.1f\n", celsius);
    
	return 0;
	}