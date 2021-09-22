/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 18:15:02 by calle             #+#    #+#             */
/*   Updated: 2021/09/22 18:15:06 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

bool my_isdigit(char ch)
{
    return std::isdigit(static_cast<unsigned char>(ch));
}

bool str_to_int (int *i, const char *s)
{
    std::stringstream ss(s);
    ss >> *i;
    if (ss.fail()) {
        return false;
    }
    return true;
}
