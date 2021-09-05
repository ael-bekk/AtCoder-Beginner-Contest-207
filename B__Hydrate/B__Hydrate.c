/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B__Hydrate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <abekkali451@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 00:06:32 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/09/06 00:06:39 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int main()
{
	int a, b, c, d;
 	long long red, cyan;
 	int i;
 
  	scanf("%d %d %d %d", &a, &b, &c, &d);
  	red = 0;
  	cyan = a;
  
  	if (b >= c * d)
    {
    	printf("-1");
    	return (0);
    }
  
  	i = 0;
 	while (cyan > red * d)
    {
    	red += c;
  		cyan += b;
      	i++;
    }
  	printf("%d", i);
	return (0);
}
