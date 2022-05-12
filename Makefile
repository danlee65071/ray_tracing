# ===------------------------------------------------------------------------===
# >  Author: hcharlsi, eshakita, esobchak, amuriel
# >  Create Time: 2022-05-07 12:59:36
# >  Modified by: hcharlsi, eshakita, esobchak, amuriel
# >  Modified time: 2022-05-07 15:43:16
# ===------------------------------------------------------------------------===

# Имя запускаемого бинарного файла
NAME = rt

# cpp файлы
DIR_SRCS = srcs
SRCS = 	main.cpp \
		RayTracing.cpp \
		Parser.cpp \
		Ambient.cpp \
		Camera.cpp \
		AFigure.cpp \
		Lightning.cpp \
		Cone.cpp \
		Cylinder.cpp \
		Plane.cpp \
		Sphere.cpp \
		Color.cpp \
		Coordinate.cpp \
		Vector3f.cpp

PATH_SRCS = $(addprefix $(DIR_SRCS)/, $(SRCS))

DIRS = 

# hpp файлы
DIR_HEADERS = headers
HEADERS = 	RayTracing.hpp \
			Parser.hpp \
			Ambient.hpp \
			Camera.hpp \
			AFigure.hpp \
			Lightning.hpp \
			Cone.hpp \
			Cylinder.hpp \
			Plane.hpp \
			Sphere.hpp \
			utils.hpp \
			Color.hpp \
			Coordinate.hpp \
			Vector3f.hpp

PATH_HEADERS = $(addprefix $(DIR_HEADERS)/, $(HEADERS))

# объектники
DIR_OBJS = objs
OBJS = $(patsubst %.cpp, %.o, $(SRCS))
PATH_OBJS = $(addprefix $(DIR_OBJS)/, $(OBJS))

# компилятор
CC = c++

# флаги
FLAGS = -Wall -Werror -Wextra -g -std=c++17

# команда удаления
RM = rm -rf

# цвета
GREEN = \033[0;32m
RESET = \033[0m

# главная команда
all: $(NAME)

# получение исполняемого файла
$(NAME): write_logo create_dirs $(PATH_OBJS)
	@echo "$(GREEN)\nObjects was created $(RESET)"
	@$(CC) $(FLAGS) -I $(DIR_HEADERS) $(PATH_OBJS) -o $@
	@echo "$(GREEN)Simply the best hard multi-d ray-tracing mother lover by peace dukes was compiled $(RESET)"


# write_logo - разрисовка лого при сборке проекта
write_logo:
	@echo "$(GREEN)\n\
	░██████╗██╗███╗░░░███╗██████╗░██╗░░░░░██╗░░░██╗  ████████╗██╗░░██╗███████╗  ██████╗░███████╗░██████╗████████╗\n\
	██╔════╝██║████╗░████║██╔══██╗██║░░░░░╚██╗░██╔╝  ╚══██╔══╝██║░░██║██╔════╝  ██╔══██╗██╔════╝██╔════╝╚══██╔══╝\n\
	╚█████╗░██║██╔████╔██║██████╔╝██║░░░░░░╚████╔╝░  ░░░██║░░░███████║█████╗░░  ██████╦╝█████╗░░╚█████╗░░░░██║░░░\n\
	░╚═══██╗██║██║╚██╔╝██║██╔═══╝░██║░░░░░░░╚██╔╝░░  ░░░██║░░░██╔══██║██╔══╝░░  ██╔══██╗██╔══╝░░░╚═══██╗░░░██║░░░\n\
	██████╔╝██║██║░╚═╝░██║██║░░░░░███████╗░░░██║░░░  ░░░██║░░░██║░░██║███████╗  ██████╦╝███████╗██████╔╝░░░██║░░░\n\
	╚═════╝░╚═╝╚═╝░░░░░╚═╝╚═╝░░░░░╚══════╝░░░╚═╝░░░  ░░░╚═╝░░░╚═╝░░╚═╝╚══════╝  ╚═════╝░╚══════╝╚═════╝░░░░╚═╝░░░\n\
\n\
	██╗░░██╗░█████╗░██████╗░██████╗░  ███╗░░░███╗██╗░░░██╗██╗░░░░░████████╗██╗░░░░░░██████╗░\n\
	██║░░██║██╔══██╗██╔══██╗██╔══██╗  ████╗░████║██║░░░██║██║░░░░░╚══██╔══╝██║░░░░░░██╔══██╗\n\
	███████║███████║██████╔╝██║░░██║  ██╔████╔██║██║░░░██║██║░░░░░░░░██║░░░██║█████╗██║░░██║\n\
	██╔══██║██╔══██║██╔══██╗██║░░██║  ██║╚██╔╝██║██║░░░██║██║░░░░░░░░██║░░░██║╚════╝██║░░██║\n\
	██║░░██║██║░░██║██║░░██║██████╔╝  ██║░╚═╝░██║╚██████╔╝███████╗░░░██║░░░██║░░░░░░██████╔╝\n\
	╚═╝░░╚═╝╚═╝░░╚═╝╚═╝░░╚═╝╚═════╝░  ╚═╝░░░░░╚═╝░╚═════╝░╚══════╝░░░╚═╝░░░╚═╝░░░░░░╚═════╝░\n\
\n\
	██████╗░░█████╗░██╗░░░██╗░░░░░░████████╗██████╗░░█████╗░░█████╗░██╗███╗░░██╗░██████╗░\n\
	██╔══██╗██╔══██╗╚██╗░██╔╝░░░░░░╚══██╔══╝██╔══██╗██╔══██╗██╔══██╗██║████╗░██║██╔════╝░\n\
	██████╔╝███████║░╚████╔╝░█████╗░░░██║░░░██████╔╝███████║██║░░╚═╝██║██╔██╗██║██║░░██╗░\n\
	██╔══██╗██╔══██║░░╚██╔╝░░╚════╝░░░██║░░░██╔══██╗██╔══██║██║░░██╗██║██║╚████║██║░░╚██╗\n\
	██║░░██║██║░░██║░░░██║░░░░░░░░░░░░██║░░░██║░░██║██║░░██║╚█████╔╝██║██║░╚███║╚██████╔╝\n\
	╚═╝░░╚═╝╚═╝░░╚═╝░░░╚═╝░░░░░░░░░░░░╚═╝░░░╚═╝░░╚═╝╚═╝░░╚═╝░╚════╝░╚═╝╚═╝░░╚══╝░╚═════╝░\n\
\n\
	███╗░░░███╗░█████╗░████████╗██╗░░██╗███████╗██████╗░  ██╗░░░░░░█████╗░██╗░░░██╗███████╗██████╗░  ██████╗░██╗░░░██╗\n\
	████╗░████║██╔══██╗╚══██╔══╝██║░░██║██╔════╝██╔══██╗  ██║░░░░░██╔══██╗██║░░░██║██╔════╝██╔══██╗  ██╔══██╗╚██╗░██╔╝\n\
	██╔████╔██║██║░░██║░░░██║░░░███████║█████╗░░██████╔╝  ██║░░░░░██║░░██║╚██╗░██╔╝█████╗░░██████╔╝  ██████╦╝░╚████╔╝░\n\
	██║╚██╔╝██║██║░░██║░░░██║░░░██╔══██║██╔══╝░░██╔══██╗  ██║░░░░░██║░░██║░╚████╔╝░██╔══╝░░██╔══██╗  ██╔══██╗░░╚██╔╝░░\n\
	██║░╚═╝░██║╚█████╔╝░░░██║░░░██║░░██║███████╗██║░░██║  ███████╗╚█████╔╝░░╚██╔╝░░███████╗██║░░██║  ██████╦╝░░░██║░░░\n\
	╚═╝░░░░░╚═╝░╚════╝░░░░╚═╝░░░╚═╝░░╚═╝╚══════╝╚═╝░░╚═╝  ╚══════╝░╚════╝░░░░╚═╝░░░╚══════╝╚═╝░░╚═╝  ╚═════╝░░░░╚═╝░░░\n\
\n\
	██████╗░███████╗░█████╗░░█████╗░███████╗  ██████╗░██╗░░░██╗██╗░░██╗███████╗░██████╗\n\
	██╔══██╗██╔════╝██╔══██╗██╔══██╗██╔════╝  ██╔══██╗██║░░░██║██║░██╔╝██╔════╝██╔════╝\n\
	██████╔╝█████╗░░███████║██║░░╚═╝█████╗░░  ██║░░██║██║░░░██║█████═╝░█████╗░░╚█████╗░\n\
	██╔═══╝░██╔══╝░░██╔══██║██║░░██╗██╔══╝░░  ██║░░██║██║░░░██║██╔═██╗░██╔══╝░░░╚═══██╗\n\
	██║░░░░░███████╗██║░░██║╚█████╔╝███████╗  ██████╔╝╚██████╔╝██║░╚██╗███████╗██████╔╝\n\
	╚═╝░░░░░╚══════╝╚═╝░░╚═╝░╚════╝░╚══════╝  ╚═════╝░░╚═════╝░╚═╝░░╚═╝╚══════╝╚═════╝░\n\
		$(RESET)"

# создание папок в папке objs
create_dirs:
	@mkdir -p $(DIR_OBJS) $(DIR_OBJS)/$(DIRS)


#Получение объектных файлов
#Для удобства объектные файлы были помещены в отдеьную директорию
#Объектные файлы зависят от си файлов
#Ещё есть зависимость от хэдеров. Это нужно, чтобы при измении хэдера проект перекомпилировался
$(DIR_OBJS)/%.o: $(DIR_SRCS)/%.cpp $(PATH_HEADERS) Makefile
	@$(CC) $(FLAGS) -I $(DIR_HEADERS) -c $< -o $@
	@echo "$(GREEN).$(RESET)\c"

#Абстрактная цель clean
clean:
	@$(RM) $(DIR_OBJS)
	@echo "$(GREEN) clean instruction was executed $(RESET)"

#Абстрактная цель fclean, зависящая от clean
fclean: clean
	@$(RM) $(NAME)
	@echo "$(GREEN) fclean instruction was executed $(RESET)"

#Абстактная цель re, зависящая от fclean и all
re: fclean all

#Т.к. all clean fclean re write_logo абстрактные цели , то через мы .PHONY указываем
#Что они не связаны с физическими файлами такого же названия (если вдруг такое будет)
.PHONY: all clean fclean re write_logo create_dirs