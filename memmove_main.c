#include "libft.h"

int main(void)
{
    char str[50] = "I am going from Delhi to Gorakhpur";
    printf( "Function:\tmy_memmove with overlap\n" );
    printf( "Orignal :\t%s\n",str);
    printf( "Source:\t\t%s\n", str + 5 );
    printf( "dstination:\t%s\n", str + 11 );
    memmove( str + 11, str + 5, 29 );
    printf( "Result:\t\t%s\n", str );

    // Copy ST1rings no overlapping
    /*
        char s1[6] = "Start";
        char s2[10] = "Front End";
        memmove(s1, s2, 8);
        printf("src = %s\n", s1);
        printf("des = %s\n", s2);
    */

    // Copy Strings with overlapping
    /*
        char s1[10] = "Start End";
        printf("src = %s\n", s1);
        ft_memmove(s1, s1+2, 3);
        printf("des = %s\n", s1);
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
