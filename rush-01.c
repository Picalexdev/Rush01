/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 09:14:11 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/07 13:07:25 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char **create_input_table(char *input);
char ***create_output_table();
void write_output_table(char ***output);

char **input_numbers(char **values)
{
    int x;
    int z;
    char *y;
    char **input_table;

    y = (char *) malloc(16); 
    x = 0;
    z = 0;
    while (values[1][x] != 0)
    {
        if (values[1][x] > 48 && values[1][x] < 53)
        {
            if (x % 2 == 0)
            {
                y[z] = values[1][x];
                z++;
            }
        }
       else if (values[1][x] != 32)
            y[0] = '0';
        x++;
    }
    if (z > 16 || x > 31 || z < 16 || x < 31)
            y[0] = '0';
    input_table = create_input_table(y);
    return input_table;
}

char **create_input_table(char *input)
{
    char **table;
    int x[3];

    table = (char **) malloc(17); 
    x[0] = -1;
    x[2] = 0;
    while (++x[0] < 4)
    {
        table[x[0]] = (char *)malloc(4);
        x[1] = -1;
        while (++x[1] < 4)
        {
            table[x[0]][x[1]] = input[x[2]];
            x[2]++;
        }
    }
    return table;
}

void write_input_table(char **table)
{
    int x;
    int y;
    char num;

    x = -1;
   while (++x < 4)
    {
        y = -1;
        while (++y < 4)
        {
            num = table[x][y];
            write(1, &num, 1);
            write(1, " ", 1);
        }
        write(1, "\n", 1);
    }
}

char ***create_output_table()
{
    char ***table;
    int x[3];

    table = (char ***) malloc(sizeof(char **) * 5); 
    x[0] = -1;
    while (++x[0] < 4)
    {
        table[x[0]] = (char **)malloc(sizeof(char *) * 4);
        x[1] = -1;
        while (++x[1] < 4)
        {
            table[x[0]][x[1]] = (char *)malloc(sizeof(char) * 5);
        }
    }
    return table;
}

void write_output_table(char ***output, )
{
    char ***table;
    int x[3];
    char num;

    x[0] = -1;
    num = '0';
   while (++x[0] < 4)
    {
        x[1] = -1;
        while (++x[1] < 4)
        {
            x[2] = -1;
            while (++x[2] < 5)
            {   
                table[x[0]][x[1]][x[2]] = '1';
                num = table[x[0]][x[1]][x[2]];
                write(1, &num, 1);
            }
            write(1, " ", 1);
        }
        write(1, "\n", 1);
    }
}