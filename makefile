# Honor Pledge:
# I pledge that I have neither given nor 
# received any help on this assignment.
# Clark Otte
A2.exe: driver.o BitVector.o Dictionary.o Node.o
	g++ driver.o BitVector.o Dictionary.o Node.o -o A3.exe

driver.o: driver.cpp
	g++ -c driver.cpp -o driver.o

BitVector.o: BitVector.cpp
	g++ -c BitVector.cpp -o BitVector.o

Dictionary.o: Dictionary.cpp
	g++ -c Dictionary.cpp -o Dictionary.o

Node.o: Node.cpp
	g++ -c Node.cpp -o Node.o
	
clean:
	rm -f driver.o BitVector.o Dictionary.o Node.o A3.exe