main: main.o front.o main_class.o upper_to_lower.o back.o
	g++ main.o front.o main_class.o upper_to_lower.o back.o -o main

main.o: main.cpp
	g++ -c main.cpp

front.o: front.cpp front.hpp upper_to_lower.cpp upper_to_lower.hpp
	g++ -c front.cpp front.hpp upper_to_lower.cpp upper_to_lower.hpp

main_class.o: main_class.cpp main_class.hpp upper_to_lower.cpp upper_to_lower.hpp
	g++ -c main_class.cpp main_class.hpp upper_to_lower.cpp upper_to_lower.hpp

upper_to_lower.o: upper_to_lower.cpp upper_to_lower.hpp
	g++ -c upper_to_lower.cpp upper_to_lower.hpp

back.o: back.cpp back.hpp
	g++ -c back.cpp back.hpp

clean:
	rm *.o *.gch main