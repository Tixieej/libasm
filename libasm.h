/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libasm.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 19:25:44 by rixt          #+#    #+#                 */
/*   Updated: 2020/08/20 22:36:43 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef  LIBASM_H
# define LIBASM_H

int		ft_strlen(char *s);
char	*ft_strcpy(char *s1, char *s2);
int		ft_strcmp(char *s1, char *s2);
int		ft_write(int fildes, void *buf, size_t nbyte);
int		ft_read(int fildes, void *buf, size_t nbyte);
char	*ft_strdup(char *s);

#endif
