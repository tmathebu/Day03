/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmathebu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 12:31:24 by tmathebu          #+#    #+#             */
/*   Updated: 2020/06/23 14:29:18 by tmathebu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main(){
	
}
void ft_div_mod(int a, int b, int *div, int *mod){
	*div = a / b;
	*mod = a % b;
}
