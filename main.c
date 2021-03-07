/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 09:13:48 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/07 18:43:40 by cdel-pin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char **input_numbers(char **values);
void write_input_table(char **table);
char **create_input_table(char *input);
void write_output_table(char ***output);
char ***create_output_table();
void num_checker(char ***output, char **input);

int		main(int count, char **values)
{
	char **input_table;
	char ***output_table;

	input_table = input_numbers(values);
	if (input_table[0][0] == '0' || count < 2)
	{
		write(1, "Error\n", 6);
		exit(0);
	}
	write_input_table(input_table);
	output_table = create_output_table();
	num_checker(output_table, input_table);
	write_output_table(output_table);
	return (0);
}

