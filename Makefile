#VPATH = ./Computers

files = main.cpp Human.cpp Computer.cpp Referee.cpp RandomComputer.cpp \
		Avalanche.cpp Bureaucrat.cpp Toolbox.cpp Crescendo.cpp PaperDoll.cpp \
		FistfullODollars.cpp Tournament.cpp

all: RSP

RSP: $(files)
	clang++ -std=c++14 $^ 