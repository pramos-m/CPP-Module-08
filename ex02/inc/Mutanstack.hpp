/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mutanstack.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:31:54 by pramos-m          #+#    #+#             */
/*   Updated: 2024/03/14 17:37:29 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>

template < typename T >
class MutantStack: public std::stack< T >
{
	public:
		MutantStack( void );
		MutantStack( const MutantStack& mts );
		~MutantStack( void );
		MutantStack&	operator=( const MutantStack& mts );

		typedef typename std::stack< T >::container_type::iterator iterator;

		iterator		begin( void );
		iterator		end( void );
};

#include "MutantStack.tpp"