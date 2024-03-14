/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mutanstack.tpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:37:54 by pramos-m          #+#    #+#             */
/*   Updated: 2024/03/14 17:38:06 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template < typename T >
MutantStack< T >::MutantStack( void ): std::stack< T >() {}

template < typename T >
MutantStack< T >::MutantStack( const MutantStack& mts ): std::stack< T >( mts ) {}

template < typename T >
MutantStack< T >::~MutantStack( void ) {}

template < typename T >
MutantStack< T >&	MutantStack< T >::operator=( const MutantStack& mts )
{
	return ( std::stack< T >::operator=( mts ) );
}

template < typename T >
typename MutantStack< T >::iterator	MutantStack< T >::begin( void )
{
	return ( this->c.begin() );
}

template < typename T >
typename MutantStack< T >::iterator	MutantStack< T >::end( void )
{
	return ( this->c.end() );
}