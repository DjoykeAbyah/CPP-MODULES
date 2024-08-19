/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/31 15:54:44 by dreijans      #+#    #+#                 */
/*   Updated: 2024/08/19 15:01:05 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <list>

class Span {
	
	private:
		unsigned int _N;
	
	public:
		Span();
		Span(unsigned int num);
		Span(const Span &copy);
		Span& operator=(const Span &copy);
		~Span();
		
		void	addNumber(int num);
		int		shortestSpan();
		int		longestSpan();
};
