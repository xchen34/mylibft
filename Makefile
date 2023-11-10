CC = cc
CFLAGS = -Wall -Wextra -Werror

# 列出所有需要编译的源文件
SRC_FILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
            ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
            ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
			ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
			ft_atoi.c ft_calloc.c ft_strdup.c 

# 从源文件列表生成对象文件列表
OBJ_FILES = $(SRC_FILES:.c=.o)

# 目标文件是你的可执行文件
TARGET = libft

# 默认目标，编译可执行文件
all: $(TARGET)

# 编译可执行文件
$(TARGET): $(OBJ_FILES)
	$(CC) $(CFLAGS) -o $@ $^

# 编译每个源文件为相应的目标文件
%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

# 清理中间文件和可执行文件
clean:
	rm -f $(OBJ_FILES)

# 清理所有生成的文件
distclean: clean
	rm -f $(TARGET)

.PHONY: all clean distclean
