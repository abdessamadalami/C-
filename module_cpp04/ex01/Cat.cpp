/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:06:03 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/17 11:47:32 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Cat::Cat(): Animal("Cat")
{
   std:: cout << "cat constructor called"<< std::endl;
   brain = new Brain();
}

Cat::Cat(const Cat& old_obj)
{
    std::cout<< " copy Cat constructor called "<< std::endl;
    this->brain = new Brain();
    this->type = old_obj.type;
    *brain = *old_obj.brain;
}

Cat& Cat::operator=(const Cat &old_obj)
{
    std:: cout << "assignemt Cat oprator calld"<< std::endl;
    this->type = old_obj.type;
    *brain = *old_obj.brain;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "meeew sound  🐱🐱🐱🐱🐱🐱🐱🐱🐱 "<< std::endl;
}

std::string Cat::getType()
{
    return this->type;
}

Cat::~Cat()
{
    delete brain;
    std:: cout << "cat destructor called" << std::endl;
}