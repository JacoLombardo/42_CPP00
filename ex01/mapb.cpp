/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapb.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 12:22:39 by jalombar          #+#    #+#             */
/*   Updated: 2024/12/05 15:35:13 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mapb.hpp"

void ft_add(PhoneBook& phonebook, int& id)
{
    
    char buffer[500];
    Contact newContact;

    std::cout << std::endl;
    newContact.id = id;
    std::cout << "First Name: ";
    std::cin >> buffer;
    newContact.firstName = buffer;
    std::cout << "Last Name: ";
    std::cin >> buffer;
    newContact.lastName = buffer;
    std::cout << "Nickname: ";
    std::cin >> buffer;
    newContact.nickname = buffer;
    std::cout << "Phone Number: ";
    std::cin >> buffer;
    newContact.phoneNumber = buffer;
    std::cout << "Darkest Secret: ";
    std::cin >> buffer;
    newContact.darkestSecret = buffer;
    id++;
    phonebook.addContact(newContact);
    std::cout << std::endl;
}

void ft_first_10(std::string str)
{
    int i;

    i = 0;
    if (str.length() < 10)
        std::cout << std::setw(10 - str.length() + 1);
    while (str[i] && i < 10)
    {
        if (i == 9 && str.length() > 10)
            std::cout << '.';
        else
            std::cout << str[i];
        i++;
    }
}

void ft_print_list(Contact x, int index)
{
    std::cout << std::setw(10) << index << "|";
    ft_first_10(x.firstName);
    std::cout << "|";
    ft_first_10(x.lastName);
    std::cout << "|";
    ft_first_10(x.nickname);
    std::cout << std::endl;
}

void ft_print_contact(Contact x)
{
    std::cout << std::endl;
    std::cout << "First Name: " << x.firstName << std::endl;
    std::cout << "Last Name: " << x.lastName << std::endl;
    std::cout << "Nickname: " << x.nickname << std::endl;
    std::cout << "Phone Number: " << x.phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << x.darkestSecret << std::endl;
    std::cout << std::endl;
}

void ft_search(PhoneBook phonebook)
{
    int i;
    int index;

    i = 0;
    std::cout << std::endl;
    while (i < 8)
    {
        if (phonebook.contacts[i].id != 0)
            ft_print_list(phonebook.contacts[i], i);
        i++;
    }
    std::cout << std::endl;
    while (1)
    {
        std::cout << "Enter the index of the contact you want to select: ";
        std::cin >> index;
        if ((index >= 0 && index <= 7) && phonebook.contacts[index].id != 0)
        {
            ft_print_contact(phonebook.contacts[index]);
            break ;
        }
        else
            std::cout << "Invalid index entered." << std::endl;
    }
}

int main (int argc, char **argv)
{
    int  id;
    char buffer[500];
    PhoneBook phonebook;

    id = 1;
    (void)argv;
    if (argc == 1)
    {
        while (1)
        {
            std::cout << "Enter ADD, SEARCH or EXIT" << std::endl;
            std::cin >> buffer;
            std::string buff = buffer;
            if (!buff.compare("ADD"))
                ft_add(phonebook, id);
            else if (!buff.compare("SEARCH"))
                ft_search(phonebook);
            else if (!buff.compare("EXIT"))
                break ;
        }
    }
    return (0);
}