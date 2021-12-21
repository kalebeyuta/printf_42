# ifndef FT_PRINT_H
# define FT_PRINT_H

# include "../libft/libft.h"
# include <stdarg.h>

typedef struct s_print                       
{                        
      va_list  args;    # arg to print out                    
      int   wdt;        # width                
      int   prc;        # precision              
      int   zero;       # zero padding               
      int   pnt;        # .     
      int   dash;       # -               
      int   tl;         # total_length (return value)              
      int   sign;       # pos or neg number               
      int   is_zero;    # is number zero                 
      int   perc;       # %               
      int   sp;         # space flag ' '            
}    t_print;

int		ft_atoi(const char *str);
void	ft_bzero(void *string, size_t number);
void	*ft_calloc(size_t nmemb, size_t size);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memchr(const void *thing, int character, size_t range);
void	*ft_memset(void *s, int c, size_t len);
int		ft_memcmp(const void *s1, const void *s2, size_t range);
void	*ft_memcpy(void *destination, const void *source, size_t range);
void	*ft_memmove(void *destination, const void *source, size_t length);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int nb, int fd);
void	ft_putstr_fd(char *s, int fd);
char	*ft_strdup(const char *s);
char	*ft_strchr(const char *str, int ch);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
int		ft_strlen(const char *str);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
size_t	ft_strlcat(char *dest, const char *src, size_t size);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t length);
char	*ft_strrchr(const char *str, int ch);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
int		ft_tolower(int ch);
int		ft_toupper(int ch);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_itoa(int n);
char	**ft_split(char const *s, char c);
