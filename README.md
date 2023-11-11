# mylibft
##Part I functions

- ft_isalpha(int c): 检查参数c是否为字母（a-z或A-Z）。
- ft_isdigit(int c): 检查参数c是否为数字（0-9）。
- ft_isalnum(int c): 检查参数c是否为字母或数字。
- ft_isascii(int c): 检查参数c是否为ASCII字符。
- ft_isprint(int c): 检查参数c是否为可打印字符。
- ft_strlen(const char *s): 返回字符串s的长度。
- ft_memset(void *s, int c, size_t n): 将s指向的内存区域的前n个字节设置为c。
- ft_bzero(void *s, size_t n): 将s指向的内存区域的前n个字节设置为0。
- ft_memcpy(void *dest, const void *src, size_t n): 将src指向的内存区域的前n个字节复制到dest指向的内存区域。
- ft_memmove(void *dest, const void *src, size_t n): 将src指向的内存区域的前n个字节移动到dest指向的内存区域。
- ft_strlcpy(char *dst, const char *src, size_t size): 将src指向的字符串复制到dst，最多复制size个字符。
- ft_strlcat(char *dst, const char *src, size_t size): 将src指向的字符串追加到dst，最多追加size个字符。
- ft_toupper(int c): 如果参数c是小写字母，则返回对应的大写字母。
- ft_tolower(int c): 如果参数c是大写字母，则返回对应的小写字母。
- ft_strchr(const char *s, int c): 在字符串s中查找第一个出现的字符c。
- ft_strrchr(const char *s, int c): 在字符串s中查找最后一个出现的字符c。
- ft_strncmp(const char *s1, const char *s2, size_t n): 比较两个字符串s1和s2的前n个字符。
- ft_memcmp(const void *s1, const void *s2, size_t n): 比较两个内存区域s1和s2的前n个字节。
- ft_strnstr(const char *big, const char *little, size_t len): 在字符串big中查找字符串little的第一个出现，最多查找len个字符。
- ft_atoi(const char *nptr): 将字符串nptr转换为整数。
ft_strdup(const char *s): 创建一个新的字符串，内容与s相同。
ft_calloc(size_t nmemb, size_t size): 分配nmemb个元素，每个元素的大小为size，并将分配的内存区域初始化为0
