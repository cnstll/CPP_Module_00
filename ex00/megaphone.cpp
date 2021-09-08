/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 15:21:04 by calle             #+#    #+#             */
/*   Updated: 2021/09/08 15:21:15 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    int i;

    i = 1;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

    while (argc > 1 && i < argc)
    {
        while (*argv[i])
            std::cout << (unsigned char)std::toupper(*argv[i]++);
        i++;
    }
    std::cout << std::endl;
    return (0);
}
