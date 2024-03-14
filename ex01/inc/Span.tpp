/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:50:05 by pramos-m          #+#    #+#             */
/*   Updated: 2024/03/14 11:50:06 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Span.hpp"

template < typename T >
void	Span::addNumber( const typename T::iterator& begin, const typename T::iterator& end )
{
	if ( std::distance( begin, end ) + this->_arr.size() > this->_maxSize  )
		throw std::length_error( "Length is too long" );
	this->_arr.insert( begin, end );
}