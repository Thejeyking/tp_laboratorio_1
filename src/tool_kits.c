#include <stdio.h>
#include "tool_kits.h"

/**
 * @fn int Ask_number(char[])
 * @brief
 *
 * @param message
 * @return
 */
int Ask_number(char message[]){
	int enter_number;
	setbuf(stdout, NULL);

  printf("\n Ingrese un %s: ",message);
  scanf("%d", &enter_number);
  return enter_number;
};

/**
 * @fn int Sum(int, int)
 * @brief
 *
 * @param numOne
 * @param numTwo
 * @return
 */
int Sum(int numOne, int numTwo)
{
	int result;
	result = numOne + numTwo;
	return result;
};

/**
 * @fn int Subtraction(int, int)
 * @brief
 *
 * @param numOne
 * @param numTwo
 * @return
 */
int Subtraction(int numOne, int numTwo)
{
	int result;
	result = numOne - numTwo;
	return result;
};

/**
 * @fn int Multiplication(int, int)
 * @brief
 *
 * @param numOne
 * @param numTwo
 * @return
 */
int Multiplication(int numOne, int numTwo)
{
	int result;
	result = numOne * numTwo;
	return result;
};


/**
 * @fn int Division(int, int)
 * @brief
 *
 * @param numOne
 * @param numTwo
 * @return
 */
int Division(int numOne, int numTwo)
{
	int result;
	result = numOne / numTwo;
	return result;
};

/**
 * @fn int Factory(int)
 * @brief
 *
 * @param numOne
 * @return
 */
int Factory(int numOne)
{
	int result;
	result = numOne * (numOne-1);
	return result;
};
