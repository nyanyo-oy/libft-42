
#include <stdio.h>
#include <stdlib.h>  // free関数のために必要
#include <bsd/string.h>  // strlcpyのために必要
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	unsigned int	i;

	if (!s)
		return (NULL);
	if (len > strlen(s + start))
		len = strlen(s + start);
	str = (char *)calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	strlcpy(str, s, len + 1);
	return (str);
}


int main(void)
{
    // テストケース1: 通常の部分文字列
    const char *str1 = "Hello, World!";
    char *result1 = ft_substr(str1, 7, 5);  // "World"を取得
    printf("Test1: '%s'\n", result1);
    free(result1);

    // テストケース2: 文字列の最初から
    const char *str2 = "42Tokyo";
    char *result2 = ft_substr(str2, 0, 2);  // "42"を取得
    printf("Test2: '%s'\n", result2);
    free(result2);

    // テストケース3: 長さが元の文字列より長い
    const char *str3 = "Test";
    char *result3 = ft_substr(str3, 1, 10);  // "est"を取得
    printf("Test3: '%s'\n", result3);
    free(result3);

    // テストケース4: NULLポインタ
    char *result4 = ft_substr(NULL, 0, 5);
    printf("Test4: '%s'\n", result4 ? result4 : "NULL");
    free(result4);

    return (0);
}
