#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

typedef struct
{
	double* array;

	double* first;
	double* last;
	double* limit;

	int capacity;
	int size;
}dynamic_array;

void construct( dynamic_array* );
void destruct( dynamic_array* );
void resize( dynamic_array* );
void reserve( dynamic_array*, int );
double* push_back( dynamic_array*, double );
double pop_back( dynamic_array* );

#endif
