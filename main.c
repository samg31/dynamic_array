#include "dynamic_array.h"
#include <stdio.h>
#include <malloc.h>

int main()
{
	dynamic_array d;
	construct( &d );

	for( int i = 0; i < d.capacity; ++i )
		d.array[i] = 0.0 + i;
	
	resize( &d );
	
	for( int i = 0; i < d.capacity; ++i )
		printf( "%lf ", d.array[i] );
	printf( "\n" );
	
	return 0;
}
