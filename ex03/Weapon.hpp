/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomyshe <skomyshe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 17:46:55 by skomyshe          #+#    #+#             */
/*   Updated: 2026/01/15 19:58:26 by skomyshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
private:
    std::string type;

public:
    Weapon(const std::string &type);
    const std::string &getType() const
    {
        return type;
    }
    void setType(const std::string &newType)
    {
        type = newType;
    }
};

#endif