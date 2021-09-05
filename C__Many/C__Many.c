/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C__Many.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <abekkali451@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 00:15:11 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/09/06 00:16:10 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
 
typedef struct s_interv
{
	int	type;
  	double	start;
  	double	end;
}	tab_interv;
 
int main ()
{
  int i, j;
  int nb_interv;
  int count;
  tab_interv *interv;
  
  scanf("%d", &nb_interv);
  interv = (tab_interv *)malloc(sizeof(tab_interv) * nb_interv);
  i = 0;
  while (i < nb_interv)
  {
  	scanf("%d %lf %lf", &interv[i].type, &interv[i].start, &interv[i].end);
    if (interv[i].type == 2 || interv[i].type == 4)
  	    interv[i].end -= 0.1;
    if (interv[i].type == 3 || interv[i].type == 4)
  	    interv[i].start += 0.1;
  	i++;
  }
  count = 0;
  i = 0;
  while (i < nb_interv - 1)
  {
      j = i + 1;
      while (j < nb_interv)
      {
          if ((interv[j].start >= interv[i].start && interv[j].start <= interv[i].end)
          || (interv[j].end >= interv[i].start && interv[j].end <= interv[i].end)
          || (interv[i].start >= interv[j].start && interv[i].start <= interv[j].end)
          || (interv[i].end >= interv[j].start && interv[i].end <= interv[j].end))
            count++;
        j++;
      }
      i++;
  }
  printf("%d",count);
  return (0);
}
