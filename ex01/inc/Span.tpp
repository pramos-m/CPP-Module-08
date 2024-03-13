#pragma once

#include "Span.hpp"

template < typename T >
void	Span::addNumber( const typename T::iterator& begin, const typename T::iterator& end )
{
	if ( std::distance( begin, end ) + this->_arr.size() > this->_maxSize  )
		throw std::length_error( "Length is too long" );
	this->_arr.insert( begin, end );
}