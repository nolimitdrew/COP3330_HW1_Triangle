driver_executable: driver.o triangle.o
	g++ -g -o driver driver.o triangle.o
	chmod 755 driver

triangle.o: triangle.cpp triangle.h
	g++ -g -c triangle.cpp 

driver.o: driver.cpp triangle.h
	g++ -g -c driver.cpp    

clean:
	rm -f *.o




