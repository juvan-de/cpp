/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: juvan-de <juvan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/20 11:32:50 by juvan-de      #+#    #+#                 */
/*   Updated: 2021/10/26 17:07:24 by juvan-de      ########   odam.nl         */
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

MateriaSource::MateriaSource(MateriaSource const & ref)
{
	*this = ref;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const & rhs)
{
	if (rhs.materias[0])
		this->materias[0] = rhs.materias[0];
	if (rhs.materias[1])
		this->materias[1] = rhs.materias[1];
	if (rhs.materias[2])
		this->materias[2] = rhs.materias[2];
	if (rhs.materias[3])
		this->materias[3] = rhs.materias[3];
	return(*this);
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