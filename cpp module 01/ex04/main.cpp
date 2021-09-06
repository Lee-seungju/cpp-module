/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 14:34:14 by slee2             #+#    #+#             */
/*   Updated: 2021/09/06 18:07:02 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "It need take 3 argument" << std::endl;
		return (0);
	}
	else if (argv[2][0] == 0 || argv[3][0] == 0)
	{
		std::cout << "The argument is empty." << std::endl;
		return (0);
	}
	else
	{
		std::ifstream	openFile(argv[1]);
		std::ofstream	writeFile((std::string)argv[1] + (std::string)".replace");
		if(openFile.is_open())
		{
			std::string	line;
			while (std::getline(openFile, line))
			{
				int	n = 0;
				int	i = 0;
				int	j = 0;
				std::string	s3 = (std::string)argv[3];
				while (n != -1)
				{
					j = 0;
					n = line.find(argv[2], i);
					if (n == -1)
						break ;
					while (argv[2][j])
						j++;
					line = line.substr(0, n) + line.substr(n + j);
					line = line.substr(0, n) + s3 + line.substr(n );
					i += (n + s3.length());
				}
				writeFile << line + "\n";
			}
			writeFile.close();
		}
		else
		{
			std::cout << "The file does not exist." <<  std::endl;
			return (0);
		}
	}
	return (0);
}
