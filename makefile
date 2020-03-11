all: run

squares: squares.c
	gcc squares.c -o squares

run: squares
	./squares 400

clean:
	rm squares
