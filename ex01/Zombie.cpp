/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomyshe <skomyshe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 19:51:42 by skomyshe          #+#    #+#             */
/*   Updated: 2026/01/14 20:17:08 by skomyshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::setName(std::string name) {
    this->name = name;
}

void Zombie::announce() const {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}