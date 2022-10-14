/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:24:04 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/14 18:17:25 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap 
{
private:
    std::string name;
public:
    DiamondTrap(/* args */);
     DiamondTrap(std::string name);
    ~DiamondTrap();
    void attack(const std::string& target)
    {
        ScavTrap::attack(target);
    }
    void whoAmI();
};


