/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 09:13:48 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/07 11:28:27 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char **input_numbers(char **values);
char **create_input_table(char *input);
void write_input_table(char **table);

int main(int count, char **values)
{
    char **input_table;

    input_table = input_numbers(values);
    if (input_table[0][0] == '0')
    {
        write(1, "Error\n", 6);
        exit(0);
    }
    write_input_table(input_table);
    return 0;
}

