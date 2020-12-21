/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_convbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <sshakya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 21:35:53 by sshakya           #+#    #+#             */
/*   Updated: 2020/12/20 06:28:41 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);
int main(void)
{
	printf("%s\n", ft_convert_base("", "0123456789ABCDEF", "0123456789"));
	printf("%s\n", ft_convert_base("   --+-5A5", "0123456789ABCDEF", "0123456789"));
	printf("%s\n", ft_convert_base("", "0123456789ABCDEF", "0123456789"));
	printf("%s\n", ft_convert_base("-10110100101", "01", "poneyvif"));	
	printf("%s\n", ft_convert_base("2147483647", "0123456789", "0123456789"));	
	printf("%s\n", ft_convert_base("-2147483647", "0123456789", "01"));	
	printf("%s\n", ft_convert_base("100000000000000000000000000", "01", "0123456789"));
	printf("%s\n", ft_convert_base("-1111111111111111111111111111111", "01", "0123456789"));
	printf("fail : %s\n", ft_convert_base("", "", ""));	
	printf("fail : %s\n", ft_convert_base("101", "", "i"));	
	printf("fail : %s\n", ft_convert_base("101", "", ""));	
	printf("fail : %s\n", ft_convert_base("101", "1", ""));	

}

int		main(void)
{
	char	*octal;
	char	*hex;
	char	*decimal;
	char	*binary;

	char	*str;

	octal = "01234567";
	hex = "0123456789abcdef";
	Hex = "0123456789ABCDEF"
	decimal = "0123456789";
	binary = "01";

	str = "
