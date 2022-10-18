/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy-main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 21:22:39 by hmesrar           #+#    #+#             */
/*   Updated: 2022/10/18 21:29:18 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
    // Copy Strings no overlapping
    /*
		char src[10] = "Start End";
		char dst[10];
		ft_memcpy(dst, src, ft_strlen(src) * sizeof(char));
		printf("src = %s\n", src);
		printf("dst = %s\n", dst);
	*/

    // Copy Strings with Forward overlapping

	char src[10] = "Start End";
	printf("src = %s\n", src);
	ft_memcpy(src , src + 2, 3); // Start End  |  art End  | 'art'
	printf("des = %s\n", src);

   // Copy Strings with Backward overlapping
    /*
        char src[10] = "Start End";
        printf("src = %s\n", src);
        ft_memcpy(src, src+2, 3);
        printf("des = %s\n", src);
    */

    // Copy Doubles no overlapping
    /*
        double T1[5] = {1, 2.5, 6, 9.9, 4.3};
        double T2[5];
        printf("src = %f  %f  %f  %f %f\n", T1[0], T1[1], T1[2], T1[3], T1[4]);
        ft_memcpy(T2, T1, 5 * sizeof(double));
        printf("des = %f  %f  %f  %f %f\n", T2[0], T2[1], T2[2], T2[3], T2[4]);
    */

    // Copy Doubles with overlapping
    /*
        double T[5] = {1, 2.5, 6, 9.9, 4.3};
        printf("src = %f  %f  %f  %f %f\n", T[0], T[1], T[2], T[3], T[4]);
        ft_memcpy(T, T+2, 3 * sizeof(double));
        printf("des = %f  %f  %f  %f %f\n", T[0], T[1], T[2], T[3], T[4]);
    */

    // Copy Struct
    /*
        typedef struct P {
            char username[25];
            int age;
            double lvl;
        }Student;

        Student me;
        strcpy(me.username, "hmesrar");
        me.age = 22;
        me.lvl = 9.61;
        Student copy_me;

        printf("src = {%s  %d  %f}\n", me.username, me.age, me.lvl);
        ft_memcpy(&copy_me, &me, sizeof(Student));
        printf("des = {%s  %d  %f}\n", copy_me.username, copy_me.age, copy_me.lvl);
    */
}
