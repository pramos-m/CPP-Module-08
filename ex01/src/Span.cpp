/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:50:16 by pramos-m          #+#    #+#             */
/*   Updated: 2024/03/14 11:50:17 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void ): _maxSize( 0 ) {}

Span::Span( unsigned int N ): _maxSize( N ) {}

Span::Span( const Span& span ): _arr( span._arr ), _maxSize( span._maxSize ) {}

Span::~Span( void )
{
	this->_arr.clear();
}

Span&	Span::operator=( const Span& span )
{
	if ( this != &span )
	{
		this->_arr.clear();
		this->_arr = span._arr;
		this->_maxSize = span._maxSize;
	}
	return ( *this );
}

int	Span::getNumber( unsigned int pos ) const
{
	std::multiset< int >::const_iterator it = this->_arr.cbegin();

	if ( pos >= this->_arr.size() )
		throw std::out_of_range( "Invalid index" );
	for ( unsigned int n = 0; n < this->_arr.size(); n++ )
	{
		if ( n == pos )
			return ( *it );
		it++;
	}
	return ( 0 );
}

unsigned int	Span::getSize( void ) const
{
	return ( this->_arr.size() );
}

unsigned int	Span::getMaxSize( void ) const
{
	return ( this->_maxSize );
}

void	Span::addNumber( const int n )
{
	if ( this->_arr.size() + 1 > this->_maxSize )
		throw std::length_error( "Span is full" );
	this->_arr.insert( n );
}

void	Span::fill( unsigned int n )
{
	if ( static_cast< long >( this->_arr.size() ) \
		+ static_cast< long >( n ) > static_cast< long >( this->_maxSize ) )
		throw std::length_error( "Length is too long" );
	srand( time( NULL ) );
	for ( unsigned int i = 0; i < n; i++ )
		this->_arr.insert( rand() );
}

void	Span::fill( int start, int end )
{
	long	size;
	long	totalSize;

	size = std::abs( static_cast< long >( start ) - end );
	if ( size > this->_maxSize )
		throw std::length_error( "Length is too long" );
	totalSize = size + static_cast< long >( this->_arr.size() );
	if ( totalSize > static_cast< long >( this->_maxSize ) )
		throw std::length_error( "Length is too long" );
	start = start < end ? start : end;
	for ( long i = 0; i < size; i++ )
		this->_arr.insert( start + i );
}

long	Span::shortestSpan( void ) const
{
	long	minSpan;
	long	last;

	minSpan = std::numeric_limits< unsigned int >::max();
	last = 0;
	if ( this->_arr.size() < 2 )
		throw std::runtime_error( "Can't find shortest span with less than 2 numbers" );
	for ( std::multiset< int >::const_iterator it = this->_arr.cbegin(); it != this->_arr.cend(); it++ )
	{
		if ( it != this->_arr.cbegin() && std::abs( *it - last ) < minSpan )
			minSpan = std::abs( *it - last );
		last = *it;
	}
	return ( minSpan );
}

long	Span::longestSpan( void ) const
{
	std::multiset< int >::const_iterator	min;
	std::multiset< int >::const_iterator	max;

	if ( this->_arr.size() < 2 )
		throw std::runtime_error( "Can't find longest span with less than 2 numbers" );
	min = std::min_element( this->_arr.begin(), this->_arr.end() );
	max = std::max_element( this->_arr.begin(), this->_arr.end() );
	return ( std::abs( static_cast< long >( *max ) - static_cast< long >( *min ) ) );
}

std::ostream&	operator<<( std::ostream& out, const Span& span )
{
	out << "Max size: " << span.getMaxSize() \
		<< " && Current size: " << span.getSize() \
		<< " && Numbers: ";
	for ( unsigned int i = 0; i < span.getSize(); i++ )
	{
		out << span.getNumber( i );
		if ( i + 1 < span.getSize() )
			out << ", ";
	}
	return ( out );
}