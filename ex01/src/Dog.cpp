/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:27:20 by fheaton-          #+#    #+#             */
/*   Updated: 2023/02/10 14:53:21 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

Dog::Dog(){
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
	this->_brain = new Brain();
}

Dog::~Dog(){
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

void Dog::makeSound() const{
	std::cout << "Dog: Woof" << std::endl;
}
