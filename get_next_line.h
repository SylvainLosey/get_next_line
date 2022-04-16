/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <sylvain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 15:32:47 by sylvain           #+#    #+#             */
/*   Updated: 2022/04/16 18:59:04 by sylvain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

size_t  strlen_until_char(const char *s, const char c);
char	*ft_strjoin(char *s1, char *s2);
char    *ft_strncpy(char *dest, char *src, unsigned int n);
void	ft_bzero(void *b, size_t n);
void	*ft_calloc(size_t count, size_t size);

char	*get_next_line(int fd);
// void	*handle_end_of_file(char **stash);
char	*copy_until_return_or_end(char *source);
char	*remove_until_return(char *source);
bool	contains_char(char *str, char c);
