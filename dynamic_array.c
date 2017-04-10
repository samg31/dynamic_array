#include "dynamic_array.h"
#include <malloc.h>

void construct( dynamic_array* arr )
{
	arr->capacity = 4;
	arr->array = malloc( arr->capacity * sizeof( double ) );

	arr->size = 0;
	arr->first = arr->array;
	arr->last = arr->array;
	arr->limit = arr->array + (arr->capacity - 1);
}

void destruct( dynamic_array* arr )
{
	free( arr->array );

	arr->array = arr->first = arr->last = arr->limit = NULL;
}

void resize( dynamic_array* arr )
{
	double* temp;
	arr->capacity *= 2;
	
	temp = realloc( arr->array, arr->capacity * sizeof( double ) );

	if( temp == NULL )
	{
		printf( "unable to reallocate array %p\n", arr );
		return;
	}
	
	arr->first = arr->array;
	arr->last = arr->array + arr->size;
	arr->limit = arr->array + (arr->capacity - 1);
}

void reserve( dynamic_array* arr, int n )
{
	double* temp;
	temp = realloc( arr->array, arr->capacity * n * sizeof( double ) );

	if( realloc == NULL )
	{
		printf( "unable to reserve %d elements in array %p\n", n, arr );
		return;
	}

	arr->first = arr->array;
	arr->last = arr->array + arr->size;
	arr->limit = arr->array + (arr->capacity - 1);
}
