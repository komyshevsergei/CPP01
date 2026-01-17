/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomyshe <skomyshe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 01:49:05 by skomyshe          #+#    #+#             */
/*   Updated: 2026/01/17 02:00:08 by skomyshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    Harl harl;

    if (argc != 2)
    {
        std::cout << "Usage: ./harlFilter <level>\n";
        return 1;
    }

    std::string level = argv[1];
    const std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int index = 0;

    while (index < 4 && level != levels[index])
        index++;

    switch (index)
    {
    case 0:
        std::cout << "[ DEBUG ]\n";
        harl.complain("DEBUG");
    case 1:
        std::cout << "[ INFO ]\n";
        harl.complain("INFO");
    case 2:
        std::cout << "[ WARNING ]\n";
        harl.complain("WARNING");
    case 3:
        std::cout << "[ ERROR ]\n";
        harl.complain("ERROR");
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]\n";
    }

    return 0;
}
