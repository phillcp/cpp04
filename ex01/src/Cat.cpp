/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:28:20 by fheaton-          #+#    #+#             */
/*   Updated: 2023/02/10 14:33:18 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

Cat::Cat(){
	this->_brain = new Brain();
	this->type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat(){
	delete _brain;
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const{
	std::cout << "Cat: Meow" << std::endl;
}
