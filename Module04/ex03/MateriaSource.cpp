/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/20 11:32:50 by juvan-de      #+#    #+#                 */
/*   Updated: 2021/09/20 14:45:29 by juvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    this->materias[0] = 0;
    this->materias[1] = 0;
    this->materias[2] = 0;
    this->materias[3] = 0;
    std::cout << "MateriaSource was made" << std::endl;
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource was deleted" << std::endl;
}

void    MateriaSource::learnMateria(AMateria* src)
{
    int i = 0;
    while (i < 4)
    {
        if(this->materias[i])
            i++;
        else
        {
            this->materias[i] = src;
            return ;
        }
    }
}

AMateria*    MateriaSource::createMateria(std::string const & type)
{
    int i = 0;
    
    while (this->materias[i])
    {
        if (type == this->materias[i]->getType())
        {
            return (this->materias[i]->clone());
        }
        i++;
    }
    return (0);
}