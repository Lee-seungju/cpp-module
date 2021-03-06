/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 19:13:42 by slee2             #+#    #+#             */
/*   Updated: 2021/10/09 14:05:15 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int argc, char **argv)
{
	Karen	k;

	(void)argc;
	if (argc != 2)
		return (0);
	else
		k.complain((std::string)argv[1]);
	return (0);
}
