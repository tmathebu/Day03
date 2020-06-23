/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmathebu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 14:39:46 by tmathebu          #+#    #+#             */
/*   Updated: 2020/06/23 15:24:02 by tmathebu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str);
void ft_putchar(char c);

int main(){
	
}

void ft_putchar(char c){
	write(1, &c, 1);
}

void ft_putstr(char *str){
	int i;
	int n;
	n = 0;
	while(str[n] != '\0'){
		n++;
	}
	i = 0;
	while(i <= n){
		ft_putchar(str[i]);
		i++;		
	}
	ft_putchar('\n');
}
