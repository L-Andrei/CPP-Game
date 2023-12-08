CC = g++
CFLAGS = -Wall -Wextra -std=c++11
LIBS = -lSDL2

SRCS = main.cpp Game.cpp Ball.cpp Hole.cpp
OBJS = $(SRCS:.cpp=.o)

EXEC = golf_game

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) $(LIBS) -o $@ $^

%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS) $(EXEC)