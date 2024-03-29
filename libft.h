/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsekim <junsekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 19:51:28 by junsekim          #+#    #+#             */
/*   Updated: 2021/05/04 20:33:55 by junsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

typedef unsigned long long	t_size;
typedef unsigned char		t_byte;
typedef struct				s_list
{
	void					*content;
	struct s_list			*next;
}							t_list;

int							ft_atoi(const char *nptr);
int							ft_toupper(int c);
int							ft_isascii(int c);
int							ft_isalpha(int c);
int							ft_tolower(int c);
int							ft_isdigit(int c);
int							ft_isprint(int c);
int							ft_isalnum(int c);
char						*ft_strrchr(const char *s, int c);
char						*ft_strnstr(const char *big,
							const char *little, t_size len);
int							ft_strncmp(const char *s1,
							const char *s2, t_size len);
t_size						ft_strlen(const char *str);
char						**ft_split(char	const *s, char c);
char						*ft_substr(char const *s, unsigned int start,
							t_size len);
char						*ft_itoa(int n);
t_size						ft_strlcpy(char *restrict dest,
							const char *restrict src, t_size dstsize);
t_size						ft_strlcat(char *dest,
							const char *src, t_size size);
char						*ft_strdup(const char *src);
char						*ft_strchr(const char *s, int c);
void						*ft_memset(void *dest, int c, t_size len);
void						ft_putstr_fd(char *s, int fd);
void						ft_putnbr_fd(int n, int fd);
void						ft_putendl_fd(char *s, int fd);
void						*ft_memmove(void *dest,
							const void *src, t_size len);
void						*ft_memcpy(void *dest,
							const void *src, t_size len);
int							ft_memcmp(const void *b1,
							const void *b2, t_size len);
void						*ft_memchr(const void *dest, int c, t_size len);
void						*ft_memccpy(void *dest,
							const void *src, int c, t_size n);
void						*ft_calloc(t_size elt_count, t_size elt_size);
void						ft_putchar_fd(char c, int fd);
void						ft_bzero(void *dest, t_size len);
char						*ft_strjoin(char const *s1, char const *s2);
int							ft_atoi(const char *nptr);
char						*ft_strtrim(char const *s1, char const *set);
char						*ft_strmapi(char const *s,
							char (*f)(unsigned int, char));
void						ft_lstclear(t_list **lst, void (*del)(void*));
t_list						*ft_lstlast(t_list *lst);
t_list						*ft_lstmap(t_list *lst,
							void *(*f)(void *), void (*del)(void *));
int							ft_lstsize(t_list *lst);
void						ft_lstadd_back(t_list **lst, t_list *new);
void						ft_lstadd_front(t_list **lst, t_list *new);
void						ft_lstdelone(t_list *lst, void (*del)(void*));
void						ft_lstiter(t_list *lst, void (*f)(void *));
t_list						*ft_lstnew(void *content);

#endif
