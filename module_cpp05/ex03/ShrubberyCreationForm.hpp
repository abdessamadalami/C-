/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:21:11 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/21 14:42:14 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SURUBBERYCREATIONFORM_HPP
#define SURUBBERYCREATIONFORM_HPP
#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
    private:
        std::string target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std:: string target);
        ~ShrubberyCreationForm();
        void execute(Bureaucrat const & executor);
};

#endif