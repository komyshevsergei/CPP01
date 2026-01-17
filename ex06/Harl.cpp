/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomyshe <skomyshe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 01:51:38 by skomyshe          #+#    #+#             */
/*   Updated: 2026/01/17 01:54:01 by skomyshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-"
              << "triple-pickle-special-ketchup burger.\n";
    std::cout << "I really do!\n";
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money.\n";
    std::cout << "You didn’t put enough bacon in my burger!\n";
}

void Harl::warning(void)
{
    std::cout << "I think I deserve some extra bacon for free.\n";
    std::cout << "I’ve been coming for years while you started last month.\n";
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level)
{
    const std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*funcs[4])(void) = {&Harl::debug, &Harl::info,
                                    &Harl::warning, &Harl::error};

    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            (this->*funcs[i])();
            return;
        }
    }
}
