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
	insert( &d, 4, 7.0 );
	
	for( int i = 0; i < d.capacity; ++i )
		printf( "%lf ", index( &d, i ) );
	printf( "\n" );

	destruct( &d );
	
	return 0;
}
