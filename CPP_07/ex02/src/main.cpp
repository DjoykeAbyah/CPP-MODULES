/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/17 16:48:46 by dreijans      #+#    #+#                 */
/*   Updated: 2024/07/24 14:24:35 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Array.hpp"

/**
 * try to compile int * a = new int() then display *a
 */
int main() {
	
	Array<int> intArray1; //empty array
	Array<int> intArray2(5); //array with 5 elements to default.
	
	std::cout << intArray2 << std::endl; 
	
	return 0;
}