/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:00:41 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/10 07:45:05 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA:: attack()
{
    std:: cout << name <<  " attacks with their weapon type " << weapon.getType() << std::endl;
}

HumanA ::HumanA(std::string str, Weapon& w) : name(str), weapon(w)
{}