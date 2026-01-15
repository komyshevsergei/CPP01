/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomyshe <skomyshe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 18:40:34 by skomyshe          #+#    #+#             */
/*   Updated: 2026/01/15 20:07:00 by skomyshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon *weapon;

public:
    HumanB(const std::string &name) : name(name), weapon(NULL) {}
    void setWeapon(Weapon &newWeapon)
    {
        weapon = &newWeapon;
    }

    void attack() const;
};

#endif