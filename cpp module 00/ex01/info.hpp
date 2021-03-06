/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 08:24:44 by slee2             #+#    #+#             */
/*   Updated: 2021/09/01 19:48:14 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INFO_HPP
# define INFO_HPP

# include <iostream>
# include <string>

class data
{
	private:
		std::string	fn[8];
		std::string ln[8];
		std::string nick[8];
		std::string phone[8];
		std::string secret[8];
	public:
		int	index;
		std::string	search;
		void	show_info();
		void	search_info();
		void	get_info();
		static int	count;
};

int	data::count = 0;

void	data::show_info()
{
	int	i;
	int	j;

	i = 0;
	std::cout << "  index   |first name|last name | nickname " << std::endl;
	while (i < count)
	{
		std::cout << i << "         " << "|";
		if (fn[i].length() > 10)
			std::cout << fn[i].substr(0, 9) << "." << "|";
		else
		{
			std::cout << fn[i];
			j = 0;
			while (j++ < 10 - fn[i].length())
				std::cout << " ";
			std::cout << "|";
		}
		if (ln[i].length() > 10)
			std::cout << ln[i].substr(0, 9) << "." << "|";
		else
		{
			std::cout << ln[i];
			j = 0;
			while (j++ < 10 - ln[i].length())
				std::cout << " ";
			std::cout << "|";
		}
		if (nick[i].length() > 10)
			std::cout << nick[i].substr(0, 9) << ".";
		else
		{
			std::cout << nick[i];
			j = 0;
			while (j++ < 10 - nick[i].length())
				std::cout << " ";
		}
		std::cout << std::endl;
		i++;
	}
}

void	data::search_info()
{
	std::cout << "index : ";
	std::getline(std::cin, search);
	if (search.length() == 1 && (int)search[0] <= 55 && (int)search[0] >= 48)
	{
		search[0] -= 48;
		std::cout << "first name     - " << fn[(int)search[0]] << std::endl;
		std::cout << "last name      - " << ln[(int)search[0]] << std::endl;
		std::cout << "nickname       - " << nick[(int)search[0]] << std::endl;
		std::cout << "phone number   - " << phone[(int)search[0]] << std::endl;
		std::cout << "darkest secret - " << secret[(int)search[0]] << std::endl;
	}
	else
		std::cout << "This is incorrect behavior." << std::endl;
}

void	data::get_info()
{
	std::cout << "first name     : ";
	std::getline(std::cin, fn[index]);
	std::cout << "last name      : ";
	std::getline(std::cin, ln[index]);
	std::cout << "nickname       : ";
	std::getline(std::cin, nick[index]);
	std::cout << "phone number   : ";
	std::getline(std::cin, phone[index]);
	std::cout << "darkest secret : ";
	std::getline(std::cin, secret[index]);
	if (count < 8)
		count++;
}

#endif
