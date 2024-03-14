/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:49:35 by pramos-m          #+#    #+#             */
/*   Updated: 2024/03/14 11:49:35 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template < typename T >
int		easyfind( const T& arr, int toFind ){
    if ( std::find( arr.begin(), arr.end(), toFind ) == arr.end() )
		throw std::runtime_error( "Integer not found" );
	return ( toFind );
}