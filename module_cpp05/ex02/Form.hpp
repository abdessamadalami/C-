/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:24:45 by sultan            #+#    #+#             */
/*   Updated: 2022/12/15 13:07:56 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"
#include "exception.hpp"
// class Bureaucrat;
class Form
{
    private:
        const std:: string name;
        bool               index;
        const int           grade_req_to_sign;
        const int           grade_req_to_execut;
    public:
        Form();
        Form(const std::string name, bool indes, const int s, const int e);
        Form(const Form& old_obj);
        std::string get_name() const;
        bool get_index() const;
        Form& operator=(const Form &B);
        int get_grade_req_to_sign() const;
        int get_grade_req_to_execut() const;
        void beSigned(const Bureaucrat &A);
        virtual void execute(Bureaucrat const & executor)
        {
            std::cout << " i am a excute function";
        }
        static GradeTooHighException_form GradeTooHighException_for;
        static GradeTooLowException_form GradeTooLowException_for;
        ~Form();
};

#endif