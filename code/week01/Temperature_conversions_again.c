# include <stdio.h>
# include <stdlib.h> 

int main( int argc, char *argv[] )
	{
	float old_num, new_num;
	char unit;

	printf( "Enter a temperature: " );
	scanf( "%f%c", &old_num, &unit );

	if ( unit == 'F' )
		{
		new_num = ( old_num - 32 ) * 5 / 9;
		printf("The temperature %.1fF converts to %.1fC\n", old_num, new_num );
		}
    
	if ( unit == 'C' )
		{
		new_num = old_num * 9 / 5 + 32;
		printf("The temperature %.1fC converts to %.1fF\n", old_num, new_num );
		}
	return 0;
	}