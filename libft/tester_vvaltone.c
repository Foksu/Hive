#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include "libft.h"
#include <ctype.h>

t_list		*uf_testmap(t_list *elem)
{
    t_list	*new;
    char	*content;
    unsigned int	i;

    content = ft_strdup((char *)(elem->content));
    i = 0;
    while (i < ft_strlen(content))
    {
        content[i] += 1;
        ++i;
    }
    new = ft_lstnew((void const *) content, 5);
    free(content);
    return (new);
}

void	uf_del_ventvola(void *d, size_t s)
{
    free(d);
    (void)s;
}

void	uf_del_navevolt(void *d, size_t s)
{
    free(d);
    (void)s;
}

int					uf_free_tab(void **tab)
{
    unsigned int	i;

    if (tab == NULL)
        return (0);
    i = 0;
    while (tab[i] != NULL)
    {
        free(tab[i]);
        i = i + 1;
    }
    free(tab);
    return (1);
}

void	uf_iter_ontvalve(t_list *v)
{
    *(size_t*)v->content = *(size_t*)v->content + 1;
}

void printArray(int arr[], int n)
{
    for (int i=0; i<n; i++)
        printf("%d ", arr[i]);
}

void			striter_vvaltone(char *s)
{
    *s = *s + 1;
}

void			striteri_vvaltone(unsigned int i, char *s)
{
    i = 2;
    *s = *s + i;
}

char			strmap_enotlavv(char s)
{
    return (s + 1);
}

char			strmapi_enotlavv(unsigned int i, char s)
{
    i = 2;
    return (s + i);
}

int main(void) {
    printf("------------------START OF PART 1--------------------------\n");
    int n = 10;
    int arr[n];
    memset(arr, 10, n * sizeof(arr[0]));
    printf("Array after memset():    ");
    printArray(arr, n);
    printf("\n");
    ft_memset(arr, 10, n * sizeof(arr[0]));
    printf("Array after ft_memset(): ");
    printArray(arr, n);
    printf("\n");
    ft_bzero(arr, n * sizeof(arr[0]));
    printf("ft_bzero: Array after ft_bzero (should be zero): ");
    printArray(arr, n);
    printf("\n");
    char	b1[100], b2[100];
    memset(b1, 33, 100);
    memset(b2, 63, 100);
    ft_memcpy(b1, b2, 100);
    if (memcmp(b1, b2, 100) == 0)
    {
        if (ft_memcpy(b1, b2, 0) == b1)
            printf("ft_memcpy OK!\n");
        else
            printf("\n\nft_memcpy FAILED\n\n");
    }
    else
        printf("\n\nft_memcpy FAILED\n\n");
    char str1[] = "Hive";
    char vvaltone[] = "v v a l t o n e";
    printf("ft_memmove test: str1 before ft_memmove: '%s' ", str1);
    ft_memmove(str1, vvaltone, sizeof(vvaltone));
    printf("str1 after ft_memmove: '%s' (should be 'v v a l t o n e').\n", str1);
    if (ft_memchr("vvaltone", 'v', 5) == memchr("vvaltone", 'v', 5))
    {
        if (ft_memchr("vv4lt0n3", '\0', 7) == memchr("vv4lt0n3", '\0', 7))
            printf("ft_memchr OK!\n");
        else
            printf("\n\nft_memchr FAILED! Second test!\n\n");
    }
    else
        printf("\n\nmemchr FAILED! First test!\n\n");
    if (ft_memcmp("ab\0ab", "ab\0ab", 6) == 0)
    {
        if (ft_memcmp("ab\0ab", "ab\0ac", 6) != 0)
        {
            printf("ft_memcmp OK!\n");
        }
        else
            printf("\n\nft_memcmp FAILED! Second test!\n\n");
    }
    else
        printf("\n\nmemcmp FAILED! First test!\n\n");
    if (ft_strlen("vvaltone") == strlen("vvaltone"))
    {
        if (ft_strlen("") == strlen(""))
        {
            if (ft_strlen("v valt0ne\0lul") == strlen("v valt0ne\0lul"))
                printf("ft_strlen OK!\n");
            else
                printf("\n\n\nft_strlen FAILED! Third test!\n\n\n");
        }
        else
            printf("\n\n\nft_strlen FAILED! Second test!\n\n\n");
    }
    else
        printf("\n\n\nstrlen FAILED!\n\n\n");
    if (strcmp(ft_strdup("vvaltone"), "vvaltone") == 0)
        printf("ft_strdup OK!\n");
    else
        printf("\n\n\nft_strdup FAILED! First test!\n\n\n");
    char v4ltone[9];
    if (strcmp(ft_strcpy(v4ltone, "vv4lton3"), strcpy(v4ltone, "vv4lton3")) == 0)
        printf("ft_strcpy OK!\n");
    else
        printf("\n\n\nft_strcpy FAILED! First test!\n\n\n");
    char	cat[9];
    ft_strcat(cat, "");
    ft_strcat(cat, "Vva");
    ft_strcat(cat, "l");
    ft_strcat(cat, "tone.");
    ft_strcat(cat, "");
    if (strcmp(cat, "Vvaltone.") == 0)
        printf("ft_strcat OK!\n");
    else
        printf("\n\n\nft_strcat FAILED! First test!\n\n\n");
    char	ncat[20];
    strcpy(ncat, "1234567890123456789");
    strcpy(ncat, "To be ");
    ft_strncat(ncat, "or not to be", 6);
    if (strcmp(ncat, "To be or not") == 0)
        printf("ft_strncat OK!\n");
    else
        printf("\n\n\nft_strncat FAILED! First test!\n\n\n");
    if (((unsigned int)ft_strlcat(strdup("abc\0\0\0"), "ccc", 6) == 6))
        printf("ft_strlcat OK!\n");
    else
        printf("\n\n\nft_strlcat FAILED! First test!\n\n\n");
    char	v4lton3[] = "Lets test strchr by vvaltone.";
    if (strchr(v4lton3, 'a') == ft_strchr(v4lton3, 'a'))
    {
        if (strchr(v4lton3, 'Z') == ft_strchr(v4lton3, 'Z'))
            printf("ft_strchr OK!\n");
        else
            printf("\n\n\nft_strchr FAILED! Second test!\n\n\n");
    }
    else
        printf("\n\n\nft_strchr FAILED! First test!\n\n\n");
    char	vvalt0ne[] = "abcdedcba";
    if (strrchr(vvalt0ne, 'a') == ft_strrchr(vvalt0ne, 'a'))
    {
        if (strrchr(vvalt0ne, 'Z') == ft_strrchr(vvalt0ne, 'Z'))
            printf("ft_strrchr OK!\n");
        else
            printf("\n\n\nft_strrchr FAILED! Second test!\n\n\n");
    }
    else
        printf("\n\n\nft_strrchr FAILED! First test!\n\n\n");
    if (ft_strstr("abcabcvvaltoneabcabc", "vvaltone") == strstr("abcabcvvaltoneabcabc", "vvaltone"))
    {
        if (ft_strstr("abcabcvvaltoneabcabc", "lul") == strstr("abcabcvvaltoneabcabc", "lul"))
            printf("ft_strrstr OK!\n");
        else
            printf("\n\n\nft_strstr FAILED! Second test!\n\n\n");
    }
    else
        printf("\n\n\nft_strstr FAILED! First test!\n\n\n");
    char	vval7one[] = "ozarabvval7one123";
    if (strcmp(ft_strnstr(vval7one, "vval7one", 15), "vval7one123") == 0)
        printf("ft_strnstr OK!\n");
    else
        printf("\n\n\nft_strnstr FAILED! First test!\n\n\n");
    if (ft_strcmp("a", "abcde") != 0)
    {
        if (ft_strcmp("\200", "\0") > 0)
        {
            if (ft_strcmp("abc", "abd") < 0)
            {
                if (ft_strcmp("vva1tone", "vva1tone") == 0)
                {
                    printf("ft_strcmp OK!\n");
                }
                else
                    printf("\n\n\nft_strcmp FAILED! Fourth test!\n\n\n");
            }
            else
                printf("\n\n\nft_strcmp FAILED! Third test!\n\n\n");
        }
        else
            printf("\n\n\nft_strcmp FAILED! Second test!\n\n\n");
    }
    else
        printf("\n\n\nft_strcmp FAILED! First test!\n\n\n");
    if (ft_atoi("-2147483648") == atoi("-2147483648")) {
        if (ft_atoi("2147483647") == atoi("2147483647")) {
            if (ft_atoi("-+1") == atoi("-+1")) {
                if (ft_atoi("-vv4lt0n3") == atoi("-vv4lt0n3")) {
                    if (ft_atoi("-vvaltone") == atoi("-vvaltone")) {
                        printf("ft_atoi OK!\n");
                    } else {
                        printf("ft_atoi FAILED with -vvaltone\n");
                        printf("ft_atoi gave: %d and atoi is: %d\n", ft_atoi("-vvaltone"), atoi("-vvaltone"));
                    }
                } else {
                    printf("ft_atoi FAILED with -vv4lt0n3\n");
                    printf("ft_atoi gave: %d and atoi is: %d\n", ft_atoi("-vv4lt0n3"), atoi("-vv4lt0n3"));
                }
            } else {
                printf("ft_atoi FAILED with -+1\n");
                printf("ft_atoi gave: %d and atoi is: %d\n", ft_atoi("-+1"), atoi("-+1"));
            }
        } else {
            printf("ft_atoi FAILED with 2147483647\n");
            printf("ft_atoi gave: %d and atoi is: %d\n", ft_atoi("2147483647"), atoi("2147483647"));
        }
    } else {
        printf("ft_atoi FAILED with -2147483648\n");
        printf("ft_atoi gave: %d and atoi is: %d\n", ft_atoi("-2147483648"), atoi("-2147483648"));
    }
    if ((ft_isalpha('a') != 0) == (isalpha('a') != 0))
    {
        if ((ft_isalpha('\n') != 0) == (isalpha('\n') != 0))
        {
            if ((ft_isalpha('0') != 0) == (isalpha('0') != 0))
            {
                if ((ft_isalpha('%') != 0) == (isalpha('%') != 0))
                {
                    printf("ft_isalpha OK!\n");
                }
                else
                    printf("\n\n\nft_isalpha FAILED! Fourth test!\n\n\n");
            }
            else
                printf("\n\n\nft_isalpha FAILED! Third test!\n\n\n");
        }
        else
            printf("\n\n\nft_isalpha FAILED! Second test!\n\n\n");
    }
    else
        printf("\n\n\nft_isalpha FAILED! First test!\n\n\n");
    if ((ft_isdigit('a') != 0) == (isdigit('a') != 0))
    {
        if ((ft_isdigit('\n') != 0) == (isdigit('\n') != 0))
        {
            if ((ft_isdigit('0') != 0) == (isdigit('0') != 0))
            {
                if ((ft_isdigit('%') != 0) == (isdigit('%') != 0))
                {
                    printf("ft_isdigit OK!\n");
                }
                else
                    printf("\n\n\nft_isdigit FAILED! Fourth test!\n\n\n");
            }
            else
                printf("\n\n\nft_isdigit FAILED! Third test!\n\n\n");
        }
        else
            printf("\n\n\nft_isdigit FAILED! Second test!\n\n\n");
    }
    else
        printf("\n\n\nft_isdigit FAILED! First test!\n\n\n");
    if ((ft_isalnum('a') != 0) == (isalnum('a') != 0))
    {
        if ((ft_isalnum('\n') != 0) == (isalnum('\n') != 0))
        {
            if ((ft_isalnum('0') != 0) == (isalnum('0') != 0))
            {
                if ((ft_isalnum('%') != 0) == (isalnum('%') != 0))
                {
                    printf("ft_isalnum OK!\n");
                }
                else
                    printf("\n\n\nft_isalnum FAILED! Fourth test!\n\n\n");
            }
            else
                printf("\n\n\nft_isalnum FAILED! Third test!\n\n\n");
        }
        else
            printf("\n\n\nft_isalnum FAILED! Second test!\n\n\n");
    }
    else
        printf("\n\n\nft_isalnum FAILED! First test!\n\n\n");
    if ((ft_isascii('a') != 0) == (isascii('a') != 0))
    {
        if ((ft_isascii('\n') != 0) == (isascii('\n') != 0))
        {
            if ((ft_isascii('0') != 0) == (isascii('0') != 0))
            {
                if ((ft_isascii('%') != 0) == (isascii('%') != 0))
                {
                    printf("ft_isascii OK!\n");
                }
                else
                    printf("\n\n\nft_isascii FAILED! Fourth test!\n\n\n");
            }
            else
                printf("\n\n\nft_isascii FAILED! Third test!\n\n\n");
        }
        else
            printf("\n\n\nft_isascii FAILED! Second test!\n\n\n");
    }
    else
        printf("\n\n\nft_isascii FAILED! First test!\n\n\n");
    if ((ft_isprint('a') != 0) == (isprint('a') != 0))
    {
        if ((ft_isprint('\n') != 0) == (isprint('\n') != 0))
        {
            if ((ft_isprint('0') != 0) == (isprint('0') != 0))
            {
                if ((ft_isprint('%') != 0) == (isprint('%') != 0))
                {
                    printf("ft_isprint OK!\n");
                }
                else
                    printf("\n\n\nft_isprint FAILED! Fourth test!\n\n\n");
            }
            else
                printf("\n\n\nft_isprint FAILED! Third test!\n\n\n");
        }
        else
            printf("\n\n\nft_isprint FAILED! Second test!\n\n\n");
    }
    else
        printf("\n\n\nft_isprint FAILED! First test!\n\n\n");
    if ((ft_toupper('a') != 0) == (toupper('a') != 0))
    {
        if ((ft_toupper('\n') != 0) == (toupper('\n') != 0))
        {
            if ((ft_toupper('B') != 0) == (toupper('B') != 0))
            {
                if ((ft_toupper('%') != 0) == (toupper('%') != 0))
                {
                    printf("ft_toupper OK!\n");
                }
                else
                    printf("\n\n\nft_toupper FAILED! Fourth test!\n\n\n");
            }
            else
                printf("\n\n\nft_toupper FAILED! Third test!\n\n\n");
        }
        else
            printf("\n\n\nft_toupper FAILED! Second test!\n\n\n");
    }
    else
        printf("\n\n\nft_toupper FAILED! First test!\n\n\n");
    if ((ft_tolower('a') != 0) == (tolower('a') != 0))
    {
        if ((ft_tolower('\n') != 0) == (tolower('\n') != 0))
        {
            if ((ft_tolower('B') != 0) == (tolower('B') != 0))
            {
                if ((ft_tolower('%') != 0) == (tolower('%') != 0))
                {
                    printf("ft_tolower OK!\n");
                }
                else
                    printf("\n\n\nft_tolower FAILED! Fourth test!\n\n\n");
            }
            else
                printf("\n\n\nft_tolower FAILED! Third test!\n\n\n");
        }
        else
            printf("\n\n\nft_tolower FAILED! Second test!\n\n\n");
    }
    else
        printf("\n\n\nft_tolower FAILED! First test!\n\n\n");

    void	*mem1, *mem2;
    printf("------------------END OF PART 1----------------------------\n");
    printf("------------------START OF PART 2--------------------------\n");
    mem1 = malloc(100);
    bzero(mem1, 100);
    mem2 = ft_memalloc(100);
    if (mem1 != NULL && mem2 != NULL)
    {
        if (mem1 && mem2 && memcmp(mem1, mem2, 100) == 0)
            printf("ft_memalloc OK!\n");
        else
            printf("\n\n\nft_memalloc FAILED! Second test!\n\n\n");
    }
    else
        {
        printf("\n\n\nft_memalloc FAILED! First test!\n\n\n");
    }
    void	*mem;
    mem = malloc(2000);
    ft_memdel(&mem);
    if (mem == NULL)
        printf("ft_memdel OK!\n");
    else
        printf("\n\n\nft_memalloc FAILED! First test!\n\n\n");
    char	*vvalton3;
    char	*t;
    vvalton3 = ft_strnew(100);
    t = malloc(101);
    bzero(t, 101);
    if (memcmp(vvalton3, t, 101) == 0)
        printf("ft_strnew OK!\n");
    else
        printf("\n\n\nft_strnew FAILED! First test!\n\n\n");
    char	*vveltone;
    vveltone = malloc(123);
    ft_strdel(&vveltone);
    if (vveltone == NULL)
        printf("ft_strdel OK!\n");
    else
        printf("\n\n\nft_strdel FAILED! First test!\n\n\n");
    char	vva17one[] = "tttttt";
    ft_strclr(vva17one);
    if (memcmp(vva17one, "\0\0\0\0\0\0", 7) == 0)
        printf("ft_strclr OK!\n");
    else
        printf("\n\n\nft_strclr FAILED! First test!\n\n\n");
    char		str[] = "Vvaltone";
    ft_striter(NULL, NULL);
    ft_striter(str, NULL);
    ft_striter(str, striter_vvaltone);
    if (strcmp(str, "Wwbmupof") == 0)
    {
        printf("ft_striter OK!\n");
    }
    else
        {
        printf("\n\n\nft_striter FAILED! First test!\n\n\n");
    }
    char		str2[] = "Vvaltone";
    ft_striteri(NULL, NULL);
    ft_striteri(str2, NULL);
    ft_striteri(str2, striteri_vvaltone);
    if (strcmp(str2, "Xxcnvqpg") == 0)
    {
        printf("ft_striteri OK!\n");
    }
    else
    {
        printf("\n\n\nft_striteri FAILED! First test!\n\n\n");
    }
    char		str3[] = "Vvaltone";
    char		*ret;

    ft_strmap(NULL, NULL);
    ft_strmap("", NULL);
    ret = ft_strmap(str3, strmap_enotlavv);
    if (strcmp(ret, "Wwbmupof") == 0)
    {
        printf("ft_strmap OK!\n");
    }
    else
    {
        printf("\n\n\nft_strmap FAILED! First test!\n\n\n");
    }
    free(ret);
    char		str4[] = "Vvaltone";
    char		empty[] = "";
    char		*ret2;

    ft_strmapi(NULL, NULL);
    ft_strmapi(empty, NULL);
    ret2 = ft_strmapi(str4, strmapi_enotlavv);
    if (strcmp(ret2, "Xxcnvqpg") == 0)
    {
        printf("ft_strmapi OK!\n");
        //free(ret2);
    }
    else
    {
        printf("\n\n\nft_strmapi FAILED! First test!\n\n\n");
    }
    free(ret2);
    int			retequ;
    char		*strequ;

    ft_strequ(NULL, NULL);
    ft_strequ("", NULL);
    ft_strequ(NULL, "");
    retequ = 0;
    strequ = strdup("abc");
    if ((retequ = ft_strequ(strequ, "abc")) != 1)
    {
        printf("Error Line %d, Funct %s : \n\033[31mft_strequ(\"abc\", \"abc\").\nExpected ret = \"1\" \
			   but have ret = \"%d\"\033[0m\n", __LINE__ - 2, __func__, retequ);
        free(strequ);
    }
    free(strequ);
    if ((retequ = ft_strequ("cba", "abc")) != 0)
    {
        printf("Error Line %d, Funct %s : \n\033[31mft_strequ(\"cba\", \"abc\").\nExpected ret = \"0\" \
			   but have ret = \"%d\"\033[0m\n", __LINE__ - 2, __func__, retequ);
    }
    if ((retequ = ft_strequ("abc", "cba")) != 0)
    {
        printf("Error Line %d, Funct %s : \n\033[31mft_strequ(\"abc\", \"cba\").\nExpected ret = \"0\" \
			   but have ret = \"%d\"\033[0m\n", __LINE__ - 2, __func__, retequ);
    }
    if ((retequ = ft_strequ("", "")) != 1)
    {
        printf("Error Line %d, Funct %s : \n\033[31mft_strequ(\"\", \"\").\nExpected ret = \"1\" \
			   but have ret = \"%d\"\033[0m\n", __LINE__ - 2, __func__, retequ);
    }
    if ((retequ = ft_strequ("abc", "abcd")) != 0)
    {
        printf("Error Line %d, Funct %s : \n\033[31mft_strequ(\"abc\", \"abcd\").\nExpected ret = \"0\" \
			   but have ret = \"%d\"\033[0m\n", __LINE__ - 2, __func__, retequ);
    }
    if ((retequ = ft_strequ("abcd", "abc")) != 0)
    {
        printf("Error Line %d, Funct %s : \n\033[31mft_strequ(\"abcd\", \"abc\").\nExpected ret = \"0\" \
			   but have ret = \"%d\"\033[0m\n", __LINE__ - 2, __func__, retequ);
    }
    else
    {
        printf("ft_strequ OK!\n");
    }
    int			retnequ;
    ft_strnequ(NULL, NULL, 0);
    ft_strnequ(NULL, NULL, 1);
    ft_strnequ(NULL, "", 1);
    ft_strnequ("", NULL, 1);
    retnequ = 0;
    if ((retnequ = ft_strnequ("abc", "abc", 2)) != 1)
    {
        printf("Error Line %d, Funct %s : \n\033[31mft_strnequ(\"abc\", \"abc\", 2).\nExpected ret = \"1\" \
			   but have ret = \"%d\"\033[0m\n", __LINE__ - 2, __func__, retnequ);
    }
    if ((retnequ = ft_strnequ("cba", "abc", 2)) != 0)
    {
        printf("Error Line %d, Funct %s : \n\033[31mft_strnequ(\"cba\", \"abc\", 2).\nExpected ret = \"0\" \
			   but have ret = \"%d\"\033[0m\n", __LINE__ - 2, __func__, retnequ);
    }
    if ((retnequ = ft_strnequ("abc", "cba", 2)) != 0)
    {
        printf("Error Line %d, Funct %s : \n\033[31mft_strnequ(\"abc\", \"cba\", 2).\nExpected ret = \"0\" \
			   but have ret = \"%d\"\033[0m\n", __LINE__ - 2, __func__, retnequ);
    }
    if ((retnequ = ft_strnequ("abc", "abd", 2)) != 1)
    {
        printf("Error Line %d, Funct %s : \n\033[31mft_strnequ(\"abc\", \"abd\", 2).\nExpected ret = \"1\" \
			   but have ret = \"%d\"\033[0m\n", __LINE__ - 2, __func__, retnequ);
    }
    if ((retnequ = ft_strnequ("", "", 3)) != 1)
    {
        printf("Error Line %d, Funct %s : \n\033[31mft_strnequ(\"\", \"\", 3).\nExpected ret = \"1\" \
			   but have ret = \"%d\"\033[0m\n", __LINE__ - 2, __func__, retnequ);
    }
    else
    {
        printf("ft_strnequ OK!\n");
    }
    char		*retsub;
    char		strsub[] = "*Hello*";
    ft_strsub(NULL, 0, 0);
    ft_strsub(NULL, 1, 0);
    ft_strsub(NULL, 1, 1);
    ft_strsub(NULL, 0, 1);
    retsub = ft_strsub(strsub, 1, 5);
    if (strcmp(retsub, "Hello") != 0)
    {
        printf("\n\n\nft_strsub FAILED! First test!\n\n\n");
    }
    retsub = ft_strsub(strsub, 3, 1);
    if (strcmp(retsub, "l") != 0)
    {
        printf("\n\n\nft_strsub FAILED! Second test!\n\n\n");
    }
    else
    {
        printf("ft_strsub OK!\n");
    }
    char		*retjoin;
    ft_strjoin(NULL, NULL);
    ft_strjoin(NULL, "");
    ft_strjoin("", NULL);
    retjoin = ft_strjoin("Hello ", "boys");
    if (strcmp(retjoin, "Hello boys") != 0)
    {
        printf("\n\n\nft_strjoin FAILED! First test!\n\n\n");
        free(retjoin);
    }
    free(retjoin);
    retjoin = ft_strjoin("", "boys");
    if (strcmp(retjoin, "boys") != 0)
    {
        printf("\n\n\nft_strjoin FAILED! Second test!\n\n\n");
        free(retjoin);
    }
    free(retjoin);
    retjoin = ft_strjoin("Hello ", "");
    if (strcmp(retjoin, "Hello ") != 0)
    {
        printf("\n\n\nft_strjoin FAILED! Third test!\n\n\n");
        free(retjoin);
    }
    free(retjoin);
    retjoin = ft_strjoin("", "");
    if (strcmp(retjoin, "") != 0)
    {
        printf("\n\n\nft_strjoin FAILED! Fourth test!\n\n\n");
        free(retjoin);
    }
    else
    {
        printf("ft_strjoin OK!\n");
        free(retjoin);
    }
    free(retjoin);
    char			strtrim[] = "  \t    \t\nBon\t \njour\t\n  \n     ";
    char			strtrim2[] = "Bonjour";
    char			strtrim3[] = "  \t\t\t   ";
    char			*rtrim;

    ft_strtrim(NULL);
    rtrim = ft_strtrim(strtrim);
    if (strcmp(rtrim, "Bon\t \njour"))
    {
        printf("\n\n\nft_strtrim FAILED! First test!\n\n\n");
        free(rtrim);
    }
    free(rtrim);
    rtrim = ft_strtrim(strtrim2);
    if (strcmp(rtrim, "Bonjour") || (strtrim2 == rtrim))
    {
        printf("\n\n\nft_strtrim FAILED! Second test!\n\n\n");
        free(rtrim);
    }
    free(rtrim);
    rtrim = ft_strtrim(strtrim3);
    if (strcmp(rtrim, "") || (strtrim3 == rtrim))
    {
        printf("\n\n\nft_strtrim FAILED! Third test!\n\n\n");
        free(rtrim);
    }
    else
    {
        printf("ft_strtrim OK!\n");
    }
    char			**retsplit;
    retsplit = ft_strsplit("*****", '*');
    if (retsplit[0] != NULL)
        printf("\n\n\nft_strsplit FAILED! First test!\n\n\n");
    retsplit = ft_strsplit("coucou", '*');
    if (strcmp(retsplit[0], "coucou") != 0)
        printf("\n\n\nft_strsplit FAILED! Second test!\n\n\n");
    if (retsplit[1] != NULL)
        printf("\n\n\nft_strsplit FAILED! Third test!\n\n\n");
    else
        printf("ft_strsplit OK!\n");
    if (strcmp(ft_itoa(0), "0") != 0)
        printf("\n\n\nft_itoa FAILED! First test!\n\n\n");
    if (strcmp(ft_itoa(-1234), "-1234") != 0)
        printf("\n\n\nft_itoa FAILED! Second test!\n\n\n");
    if (strcmp(ft_itoa(123456000), "123456000") != 0)
        printf("\n\n\nft_itoa FAILED! Third test!\n\n\n");
    if (strcmp(ft_itoa(-2147483648), "-2147483648") != 0)
        printf("\n\n\nft_itoa FAILED! Fourth test!\n\n\n");
    else
        printf("ft_itoa OK!\n");
    ft_putstr_fd("~ ~ ~ ~ ~ Visual check needed ~ ~ ~ ~ ~\n", 2);
    ft_putchar('f');
    ft_putchar('t');
    ft_putchar('_');
    ft_putchar('p');
    ft_putchar('u');
    ft_putchar('t');
    ft_putchar('c');
    ft_putchar('h');
    ft_putchar('a');
    ft_putchar('r');
    ft_putchar(' ');
    ft_putchar('O');
    ft_putchar('K');
    ft_putchar('!');
    ft_putchar('\n');
    ft_putstr("ft_putstr OK!\n");
    ft_putendl("ft_putendl");
    ft_putstr("OK? Was there a line break before OK?\n");
    ft_putstr("ft_putnbr: ");
    ft_putnbr(2147483647);
    ft_putchar(' ');
    ft_putnbr(-2147483648);
    ft_putchar('\n');
    ft_putchar_fd('P', 2);
    ft_putchar_fd('u', 2);
    ft_putchar_fd('t', 2);
    ft_putchar_fd('c', 2);
    ft_putchar_fd('h', 2);
    ft_putchar_fd('a', 2);
    ft_putchar_fd('r', 2);
    ft_putchar_fd(' ', 2);
    ft_putchar_fd('f', 2);
    ft_putchar_fd('d', 2);
    ft_putchar_fd(':', 2);
    ft_putchar_fd(' ', 2);
    ft_putchar_fd('O', 2);
    ft_putchar_fd('K', 2);
    ft_putchar_fd('\n', 2);
    ft_putstr_fd("Putstr fd: OK\n", 2);
    ft_putendl_fd("Putendl fd: OK", 2);
    ft_putendl_fd("Expected result   : 2147483647", 2);
    ft_putstr_fd( "Putnbr fd result  : ", 2);
    ft_putnbr_fd(2147483647, 2);
    ft_putchar_fd('\n', 2);
    ft_putendl_fd("Expected result   : -2147483648", 2);
    ft_putstr_fd( "Putnbr fd result  : ", 2);
    ft_putnbr_fd(-2147483648, 2);
    ft_putchar_fd('\n', 2);
    ft_putendl_fd("Expected result   : 0", 2);
    ft_putstr_fd( "Putnbr fd result  : ", 2);
    ft_putnbr_fd(0, 2);
    ft_putchar_fd('\n', 2);
    ft_putstr_fd("~ ~ ~ ~ ~ E N D   O F   P A R T 2 ~ ~ ~ ~ ~ \n", 2);
    ft_putstr("---------------B O N U S   S T U F F-------------------\n");
    t_list	*begin;
    size_t	v;
    v = 1;
    begin = ft_lstnew(NULL, 36);
    if (begin != 0 && (begin->content_size != 0 || begin->content != NULL))
        printf("LSTNEW FAILED! First test!\n");
    free(begin);
    begin = ft_lstnew(&v, sizeof(size_t));
    if (begin != NULL)
    {
        if (&v == begin->content)
            printf("LSTNEW FAILED! Second test!\n");
        if (*(size_t*)begin->content != 1)
            printf("LSTNEW FAILED! Third test!\n");
        if (begin->content_size != sizeof(size_t))
            printf("LSTNEW FAILED! Fourth test!\n");
        if (begin->next != 0)
            printf("LSTNEW FAILED! Fifth test!\n");
    }
    printf("ft_lstnew OK!\n");
    free(begin);
    t_list	*begindelone;
    size_t	vdelone;
    v = 1;
    begindelone = ft_lstnew(&vdelone, sizeof(void *));
    begindelone->next = ft_lstnew(&vdelone, sizeof(void *));
    begindelone->next->next = ft_lstnew(&vdelone, sizeof(void *));
    ft_lstdelone(&begindelone->next->next, uf_del_ventvola);
    if (begindelone->next->next != NULL)
        printf("\n\n\nft_lstdelone FAILED! First test!\n\n\n");
    ft_lstdelone(&begindelone->next, uf_del_ventvola);
    if (begindelone->next != NULL)
        printf("\n\n\nft_lstdelone FAILED! Second test!\n\n\n");
    ft_lstdelone(&begindelone, uf_del_ventvola);
    if (begindelone != NULL)
        printf("\n\n\nft_lstdelone FAILED! Third test!\n\n\n");
    else {
        printf("ft_lstdelone OK!\n");
    }
    t_list	*begindel;
    size_t	vdel;
    v = 1;
    begin = ft_lstnew(&vdel, sizeof(void *));
    begin->next = ft_lstnew(&vdel, sizeof(void *));
    begin->next->next = ft_lstnew(&vdel, sizeof(void *));
    ft_lstdel(&begin, uf_del_navevolt);
    if (begin != NULL)
        printf("\n\n\nft_lstdel FAILED! First test!\n\n\n");
    else
    {
        printf("ft_lstdel OK!\n");
    }
    t_list	*beginadd;
    t_list	*add;
    t_list	*tmp;
    size_t	vadd;
    vadd = 1;
    beginadd = ft_lstnew(&vadd, sizeof(size_t));
    tmp = beginadd;
    add = ft_lstnew(&vadd, sizeof(size_t));
    ft_lstadd(&beginadd, add);
    if (beginadd != add)
        printf("\n\n\nft_lstadd FAILED! First test!\n\n\n");
    if (beginadd->next != tmp)
        printf("\n\n\nft_lstadd FAILED! Second test!\n\n\n");
    else
    {
        printf("ft_lstadd OK!\n");
    }
    free(beginadd->next);
    free(beginadd);
    t_list	*beginiter;
    size_t	viter;
    size_t	witer;
    viter = 1;
    witer = 2;
    beginiter = ft_lstnew(&viter, sizeof(size_t));
    beginiter->next = ft_lstnew(&witer, sizeof(size_t));
    ft_lstiter(beginiter, uf_iter_ontvalve);
    if (*(size_t*)beginiter->content != 2)
        printf("\n\n\nft_lstiter FAILED! First test!\n\n\n");
    if (*(size_t*)beginiter->next->content != 3)
        printf("\n\n\nft_lstiter FAILED! Second test!\n\n\n");
    else
    {
        printf("ft_lstiter OK!\n");
    }
    free(beginiter->next);
    free(beginiter);
    t_list			*lst_initial;
    t_list			*lst;
    char			*content;
    t_list			*(*f)(t_list *);
    content = "toto";
    lst_initial = ft_lstnew((void const *) content, 5);
    content = "tata";
    lst_initial->next = ft_lstnew((void const *) content, 5);
    content = "tutu";
    lst_initial->next->next = ft_lstnew((void const *) content, 5);
    f = &uf_testmap;
    lst = ft_lstmap(lst_initial, f);
    if (!strcmp((const char *) lst->content, (const char *) lst_initial->content) || strcmp((const char *) lst->content, "upup"))
        printf("\n\n\nft_lstmap FAILED! First test!\n\n\n");
    if (!strcmp((const char *) lst->next->content, (const char *) lst_initial->next->content) || strcmp((const char *) lst->next->content, "ubub"))
        printf("\n\n\nft_lstmap FAILED! Second test!\n\n\n");
    if (!strcmp((const char *) lst->next->next->content, (const char *) lst_initial->next->next->content) || strcmp((const char *) lst->next->next->content, "uvuv"))
        printf("\n\n\nft_lstmap FAILED! Third test!\n\n\n");
    else
    {
        printf("ft_lstmap OK!\n");
    }
    ft_putstr("---------------E N D   O F   B O N U S   S T U F F-------------------\n");
    return (0);
}