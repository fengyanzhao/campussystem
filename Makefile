main:main.o Time.o Person.o Teacher.o Student.o Undergraduate.o Assistant.o
	g++ -o main main.o Time.o Person.o Teacher.o Student.o Undergraduate.o Assistant.o
main.o:main.cpp
	g++ -c main.cpp -o main.o

Time.o:Time.cpp

Assistant.o:Assistant.cpp

Undergraduate.o:Undergraduate.cpp


Teacher.o:Teacher.cpp

Student.o:Student.cpp

Person.o:Person.cpp

clean:
	rm main.o Assistant.o Undergraduate.o Time.o Teacher.o Student.o Person.o
