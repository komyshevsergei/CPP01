/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomyshe <skomyshe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 21:52:11 by skomyshe          #+#    #+#             */
/*   Updated: 2026/01/16 21:54:35 by skomyshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

void replaceFile(const std::string &filename, const std::string &s1, const std::string &s2)
{
    std::ifstream inputeFile(filename);
    if (!inputeFile.is_open())
    {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return;
    }

    std::string content;
    std::string str;
    while (std::getline(inputeFile, str))
    {
        content += str;
        content += "\n";
    }

    inputeFile.close();

    if (!content.empty() && content.back() == '\n')
        content.pop_back();

    std::cout << "=== FILE CONTENT START ===\n";
    std::cout << content << "\n";
    std::cout << "=== FILE CONTENT END ===\n";

    if (s1.empty())
    {
        std::cerr << "Error: s1 cannot be an empty string." << std::endl;
        return;
    }

    std::string result;
    size_t pos = 0;

    while (true)
    {
        size_t found = content.find(s1, pos);
        if (found == std::string::npos)
        {
            result += content.substr(pos);
            break;
        }
        result += content.substr(pos, found - pos);
        result += s2;
        pos = found + s1.length();
    }

    std::cout << "=== REPLACED CONTENT START ===\n";
    std::cout << result << "\n";
    std::cout << "=== REPLACED CONTENT END ===\n";

    // Create output file
    std::string outFilename = filename + ".replace";

    std::ofstream outputFile(outFilename);
    if (!outputFile.is_open())
    {
        std::cerr << "Error: Could not open output " << outFilename << std::endl;
        return;
    }

    outputFile << result;

    outputFile.close();

    std::cout << "Success: Output written to '" << outFilename << "'" << std::endl;
}