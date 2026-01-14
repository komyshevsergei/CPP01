/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomyshe <skomyshe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 19:51:17 by skomyshe          #+#    #+#             */
/*   Updated: 2026/01/14 22:47:11 by skomyshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name);

int main()
{
    int N = 9;

    Zombie *horde = zombieHorde(N, "Foo");

    if (horde == NULL)
        return 1;
    for (int i = 0; i < N; i++)
        horde[i].announce();

    delete[] horde;
    return 0;
}