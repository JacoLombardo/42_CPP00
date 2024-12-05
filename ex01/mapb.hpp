/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapb.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 13:38:48 by jalombar          #+#    #+#             */
/*   Updated: 2024/12/05 15:35:08 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAPB_H
# define MAPB_H

# include <iostream>
# include <iomanip>

class Contact
{
    public:
        int id;
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;
        
        Contact() : id(0) {};
};

class PhoneBook
{
    public:
        Contact contacts[8];

        void addContact(Contact x)
        {
            int index;

            index = (x.id - 1) % 8;
            contacts[index] = x;
        }
};

#endif
