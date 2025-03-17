c_file.exe:file1.o file2.o
	gcc-o c_file.exe file1.o file2.o
file1.o:file1.c
	gcc-c file1.c
file2.o:file2.c
	gcc-c file2.c
