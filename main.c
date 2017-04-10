#include "dynamic_array.h"
#include <stdio.h>

int main()
{
	dynamic_array d;
	construct( &d );

	push_back( &d, 1.0 );	
	push_back( &d, 2.0 );
	push_back( &d, 3.0 );
	push_back( &d, 4.0 );
	push_back( &d, 5.0 );
	pop_back( &d );
	
	for( int i = 0; i < d.capacity; ++i )
		printf( "%lf ", index( &d, i ) );
	printf( "\n" );
	
	return 0;
}
