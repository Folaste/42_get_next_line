/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleblanc <fleblanc@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:36:40 by fleblanc          #+#    #+#             */
/*   Updated: 2022/05/06 14:41:45 by fleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*ft_read(int fd, char *buffer);
char	*ft_recover_line(char *buffer);
int		ft_find_eol(char *str);
char	*ft_new_buffer(char *old_buffer);

/*--- Fonctions utilitaires ---*/
char	*ft_strjoin_gnl(const char *s1, const char *s2);
size_t	ft_strlen_gnl(const char *s);
char	*ft_strchr_gnl(const char *s, int c);
char	*ft_substr_gnl(const char *s, unsigned int start, size_t len);
size_t	ft_strlcpy_gnl(char *dst, const char *src, size_t size);

#endif
