/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:17:40 by fheaton-          #+#    #+#             */
/*   Updated: 2023/04/19 17:59:21 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>
#include <WrongAnimal.hpp>
#include <WrongCat.hpp>
#include <Cat.hpp>
#include <Dog.hpp>

int main()
{
	Animal* a[10];
	std::cout << std::endl << "Constructor Time" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << std::endl << i + 1 << ":" << std::endl;
		if (i % 2)
			a[i] = new Dog();
		else
			a[i] = new Cat();
	}
	std::cout << std::endl << "Destructor Time" << std::endl;
	for (int i = 9; i >= 0; i--)
	{
		std::cout << std::endl << i + 1 << ":" << std::endl;
		delete a[i];
	}
	std::cout << std::endl;

	return 0;
}
