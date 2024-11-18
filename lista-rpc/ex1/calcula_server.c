/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "calcula.h"

int *
add_10_svc(operandos *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */
	 printf("Requisicao de soma para  %d e %d\n", argp->x, argp->y);
	result = argp->x + argp->y;

	return &result;
}

int *
sub_10_svc(operandos *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */
	 printf("Requisicao de subtracao para  %d e %d\n", argp->x, argp->y);
	result = argp->x - argp->y;
	return &result;
}

int *
mult_10_svc(operandos *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */
	 printf("Requisicao de multiplicacao para  %d e %d\n", argp->x, argp->y);
	 result = argp->x * argp->y;

	return &result;
}

int *
div_10_svc(operandos *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */
	 printf("Requisicao de divisao para  %d e %d\n", argp->x, argp->y);
	if(argp->y == 0){
		printf("Nao eh possivel dividir por 0");
		return 0;
	}

	result = argp->x / argp->y;

	return &result;
}