NAME 	 =	 	  game.sh
 
SRC      =        main.cpp 			  \
				  tool/Background.cpp \
				  tool/Floor.cpp 	  \
				  tool/Crate.cpp	  \
				  tool/Door.cpp	 	  \ 
				  tool/Map.cpp  	  \
				  tool/Trap.cpp		  \
				  tool/Cell.cpp 	  \
				  tool/Lava.cpp 	  \
				  tool/Unit.cpp 	  \
				  tool/Player.cpp	  \
				  tool/Game.cpp
                  


OBJ      =        $(SRC:%.cpp=%.o)

CXX      =        g++

CXXFLAGS =        -Wall -Wextra -Wpedantic -Werror -std=c++14 -lsfml-graphics -lsfml-window -lsfml-system

RM       =        rm -f

all      :        $(NAME)

$(NAME)  :        $(OBJ)
				  $(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean    :        $(RM) $(OBJ)

fclean   :        clean 
				  $(RM) $(NAME)

re       :        fclean all

.PHONY   :        all clean fclean re
