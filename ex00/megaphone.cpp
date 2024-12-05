/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 12:03:14 by jalombar          #+#    #+#             */
/*   Updated: 2024/12/05 14:04:38 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char    *ft_to_upper(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = std::toupper(str[i]);
        i++;
    }
    return (str);
}

int main (int argc, char **argv)
{
    int i;

    i = 1;
    if (argc > 1)
    {
        while (i < argc)
        {
            std::cout << ft_to_upper(argv[i]);
            i++;
        }
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
}