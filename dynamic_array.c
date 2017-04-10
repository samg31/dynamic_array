#include "dynamic_array.h"
#include <malloc.h>

void construct( dynamic_array* arr )
{
	arr->capacity = 4;
	arr->array = malloc( arr->capacity * sizeof( double ) );

	for( int i = 0; i < arr->capacity; ++i )
		arr->array[i] = 0.0;
}

void destruct( dynamic_array* arr )
{
	free( arr->array );
}

void resize( dynamic_array* arr )
{
	double* temp;
	temp = realloc( arr->array, arr->capacity * 2 * sizeof( double ) );

	if( temp == NULL )
	{
		printf( "unable to reallocate array %p\n", arr );
		return;
	}

	for( int i = arr->capacity; i < arr->capacity * 2; ++i )
	{
		arr->array[i] = 0.0;
	}

	arr->capacity *= 2;
}
