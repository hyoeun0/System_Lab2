.PHONY : libtest_dynamic_calc.so.1.0.1
libtest_dynamic_calc.so.1.0.1 : add.o sub.o mul.o div.o
	gcc --shared -Wl,-soname,libtest_dynamic_calc.so.2 -o libtest_dynamic_calc.so.1.0.1 add.o sub.o mul.o div.o
add.o : add.c
	gcc -c add.c
sub.o : sub.c
	gcc -c sub.c
mul.o : mul.c
	gcc -c mul.c
div.o : div.c
	gcc -c div.c
clean :
	rm -f libtest_dynamic_calc.so.1.0.1 add.o sub.o mul.o div.o
