cmd="sed -i -e 's/#define SIZE \(.*\)/#define SIZE $1/g' test1.c"
eval $cmd
cmd="sed -i -e 's/#define SIZE \(.*\)/#define SIZE $1/g' test2.c"
eval $cmd
cmd="sed -i -e 's/#define SIZE \(.*\)/#define SIZE $1/g' test3.c"
eval $cmd
rm *.o
gcc test1.c -o test1.o
gcc test2.c -o test2.o
gcc test3.c -o test3.o

