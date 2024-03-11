#pragma once

template < typename T >
int		easyfind( const T& arr, int toFind ){
    if ( std::find( arr.begin(), arr.end(), toFind ) == arr.end() )
		throw std::runtime_error( "Integer not found" );
	return ( toFind );
}