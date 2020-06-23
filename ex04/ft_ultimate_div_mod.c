/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmathebu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 13:22:27 by tmathebu          #+#    #+#             */
/*   Updated: 2020/06/23 14:32:00 by tmathebu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(){
	
}
void ft_ultimate_div_mod(int *a, int *b){
	int k;
	k = *a; 
	*a = *a / *b;
	*b = k  % *b;
}
