Files :

(1) Client <br>
<br>
client<br>
|     <br>
|     <br>
--  fixsize.sh<br>
|   [Usage : ./fixsize.sh SIZE]<br>
|   Use this script to redefine SIZE parameter in test1.c, test2.c and test3.c automatically.<br>
|   By the way, this script also compile test1.c, test2.c and test3.c to .o files.<br>
|   You can use this script to test different test cases in this project.<br>
|   <br>
--  test1.c<br>
|   It uses program stack to store data. <br>
|   If the stack size larger than 2M. You may get a core dump error when you running this program. <br>
|   <br>
--  test2.c
|   It uses global segment to store data. <br>
|   If the stack size larger than 2M. You may get a core dump error when you running this program. <br>
|   <br>
--  test3.c
    It uses heap to store data <br>

* You can run ulimit command to extend the stack size. <br>
<a herf="http://ss64.com/bash/ulimit.html">ulimit command</a> <br>
`ulimit -s` <br>
