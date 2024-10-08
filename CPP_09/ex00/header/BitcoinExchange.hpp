/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/27 16:15:36 by dreijans      #+#    #+#                 */
/*   Updated: 2024/09/05 13:58:45 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <unordered_map>
#include <fstream>
#include <exception>

//program name must be btc?
//take a file as argument
//each line must use format "date | value"
//valid date format Year-Month-day
//valid value float or positive int between 0 and 100
//if date used in input does not exist use closest lower date in database
//you cannot use the container you've used in this exercise for another

//undordered multipmap
//https://cplusplus.com/reference/unordered_map/unordered_multimap/

/**
 * @todo reconsider if unordered multipmap is the way to go to prevent hasing to the same key?
 * making the map a private attribute aligns with OOP principles like encapsulation, 
 * abstraction, and data hiding, which help create a more robust, 
 * maintainable, and user-friendly class. 
 * However, if the specific requirements of your program favor returning the map directly, 
 * that approach can also be justified, especially for simpler use cases.
 */
class BitcoinExchange {
	
	private:
		std::unordered_multimap<std::string, float> csvdata; //stores date-value pairs

	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &copy);
		BitcoinExchange& operator=(const BitcoinExchange &copy);
		~BitcoinExchange();

		//getter?
		//setter?
		
		//read csv and put into map
		void	parseCsv(std::string &filename);
		//read input and put into map
		void	readTxt(std::string &filename);
		
	class OpenFileException : public std::exception {
		virtual const char* what() const throw() {
			return "Failed to open file";
		}
	};
};