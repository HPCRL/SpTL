#ifndef MATRIX_CPP
#define MATRIX_CPP
#include "../inc/matrix.h"

matrix* create_matrix(int dim1, int dim2, TYPE val)
{
	int i,j;
	matrix* res =(matrix*) malloc(sizeof(matrix));
	res->dim1 = dim1;
	res->dim2 = dim2;
	res->val = (TYPE*) malloc(dim1*dim2*sizeof(TYPE));

	for(i = 0; i< dim1; i++)
	{
		for(j=0 ; j<dim2 ; j++)
		{
			res->val[i*dim2 + j] = val;
		}
	}
	return res;
}

int print_matrix(matrix mat)
{
	idx_t i,j;
	printf("\n");
	for(i = 0; i < mat.dim1 ; i++ )
	{
		for(j = 0; j < mat.dim2 ; j++)
		{
			printf("%lf ", mat.val[i * mat.dim2 + j] );
		}
		printf("\n");
	}	
	printf("\n");
	return 0; 
}

#endif