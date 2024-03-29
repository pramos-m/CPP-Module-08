/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:49:30 by pramos-m          #+#    #+#             */
/*   Updated: 2024/03/14 11:49:31 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template < typename T >
int		easyfind( const T& arr, int toFind );

template < typename T >
void	test( const T& arr, int *numbers, unsigned int size, int toFind );

#include "easyfind.tpp"