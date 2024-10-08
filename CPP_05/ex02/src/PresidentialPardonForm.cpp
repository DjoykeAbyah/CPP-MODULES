/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/03 12:58:16 by dreijans      #+#    #+#                 */
/*   Updated: 2024/07/08 14:29:40 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : _target("Default target"){
	std::cout << BLUE << "Presidential constructor called" << RESET << std::endl;
}

/**
 * The constructor takes the name as a const std::string&
 * to avoid issues with temporary objects
*/
PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("Presidential Creation Form", 25, 5), _target(target){
	std::cout << BLUE << "Presidential parametric constructor called" << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy), _target(copy._target){
	std::cout << BLUE << "Presidential copy constructor called" << RESET << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &copy){
	std::cout << BLUE << "Presidential operator overloader called" << RESET << std::endl;
	if (this != &copy)
		AForm::operator=(copy); // Call base class assignment operator
        // _target is const, no need to assign
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(){
	std::cout << RED << "Presidential destructor called " << RESET << std::endl;
}

void PresidentialPardonForm::action() const {
		std::cout << BOLD_TEXT << MAGENTA << this->_target << RESET 
		<< MAGENTA << " has been pardoned by Zaphod Beeblebrox" << RESET << std::endl;
	}