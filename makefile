prog:BureauVote.o Main.o
	gcc BureauVote.o Main.o -o prog 
main.o:Main.c
	gcc -c Main.c 
BureauVote.o:BureauVote.c
	gcc -c BureauVote.c
