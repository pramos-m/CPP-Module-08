/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:50:00 by pramos-m          #+#    #+#             */
/*   Updated: 2024/03/14 11:50:01 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <set>
#include <limits>
#include <iterator>
#include <numeric>

class Span
{
	private:
		std::multiset< int >	_arr;
		unsigned int			_maxSize;
	public:
		Span( void );
		Span( unsigned int N );
		Span( const Span& span );
		~Span( void );
		Span&			operator=( const Span& span );
		int				getNumber( unsigned int pos ) const;
		unsigned int	getSize( void ) const;
		unsigned int	getMaxSize( void ) const;
		void			addNumber( const int n );
		long			shortestSpan( void ) const;
		long			longestSpan( void ) const;
		void			fill( unsigned int n );
		void			fill( int start, int end );
		template < typename T >
		void			addNumber( const typename T::iterator& begin, const typename T::iterator& end );
};

std::ostream&	operator<<( std::ostream& out, const Span& span );

#include "Span.tpp"
