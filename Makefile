lab3: main.o Executive.o ClosedHash.o Credentials.o
	g++ -std=c++11 -g -Wall main.o Executive.o ClosedHash.o Credentials.o -o lab3

main.o: main.cpp Executive.h
	g++ -std=c++11 -g -Wall -c main.cpp

Executive.o: ClosedHash.h Executive.h Executive.cpp
	g++ -std=c++11 -g -Wall -c Executive.cpp

ClosedHash.o: Credentials.h ClosedHash.h ClosedHash.cpp
	g++ -std=c++11 -g -Wall -c ClosedHash.cpp

Credentials.o: Credentials.h Credentials.cpp
	g++ -std=c++11 -g -Wall -c Credentials.cpp

clean:
	rm *.o lab3
