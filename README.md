# p02-CYA
Ejercicio pr´actico
Teniendo en cuenta las propiedades de las cadenas y el comportamiento de las mismas, se propone desarrollar un programa en C++ que dado un fichero de entrada con la
especificaci´on de cadenas junto con sus respectivos alfabetos, realice un conjunto de comprobaciones b´asicas sobre ellas. Para ser coherentes con las definiciones anteriores, cabe
destacar que en aquellas operaciones sobre cadenas en las que el resultado obtenido sea
un conjunto de cadenas, deber´ıamos manejar dicho resultado como un lenguaje.
El programa recibir´a por l´ınea de comandos el nombre del fichero de entrada, el nombre
del fichero de salida y un c´odigo de operaci´on:
1 ./ p02_strings filein . txt fileout . txt opcode
El comportamiento del programa al ejecutarse en l´ınea de comandos debiera ser similar
al de los comandos de Unix. As´ı por ejemplo, si se ejecuta el programa sin par´ametros, se
deber´ıa obtener informaci´on sobre el uso correcto del programa:
$ ./p02_strings
Modo de empleo: ./p02_strings filein.txt fileout.txt opcode
Pruebe ’./p02_strings --help’ para m´as informaci´on.
La opci´on --help en l´ınea de comandos ha de producir que se imprima en pantalla
un breve texto explicativo del funcionamiento del programa. Una informaci´on que puede
ser de especial ayuda para los usuarios del programa ser´ıa precisamente el formato de los
ficheros as´ı como el significado de los c´odigos de operaci´on.
El fichero de entrada tendr´a en cada l´ınea la especificaci´on de una cadena de entrada.
Cada cadena de entrada vendr´a seguida por una secuencia de s´ımbolos que representa el
alfabeto sobre el que se ha definido la cadena correspondiente. En el ejemplo siguiente
tenemos la cadena abbab definida sobre el alfabeto {a, b}, la cadena 6793836 definida
sobre el alfabeto {1, 2, 3, 4, 5, 6, 7, 8, 9}, y la cadena hola definida sobre el alfabeto
{a, h, l, o}:
1 abbab ab
2 6793836 123456789
3 hola ahlo
En funci´on del c´odigo de operaci´on, se aplicar´a una determinada operaci´on a cada una
de las cadenas de entrada, escribiendo el resultado en el fichero de salida. A continuaci´on,
se describe el comportamiento para cada uno de los c´odigos de operaci´on, enumerados
desde el 1 hasta el 5.
Pr´actica 2: Cadenas y lenguajes 3 Curso 2024-2025
Grado en Ingenier´ıa Inform´atica Computabilidad y Algoritmia
1. Alfabeto: escribir en el fichero de salida el alfabeto asociado a cada una de las cadenas
de entrada. El fichero de salida asociado a la entrada del ejemplo anterior ser´ıa el
siguiente:
1 {a , b }
2 {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9}
3 {a , h , l , o }
2. Longitud: escribir en el fichero de salida la longitud de cada cadena de entrada. Es
decir, si se escogiera el c´odigo 1, asociado al c´alculo de la longitud de la cadena, el
fichero de salida asociado a la entrada del ejemplo anterior ser´ıa el siguiente:
1 5
2 7
3 4
3. Inversa: escribir en el fichero de salida la inversa de cada cadena de entrada. En
este caso, la salida ser´ıa la siguiente:
1 babba
2 6383976
3 aloh
4. Prefijos: escribir en el fichero de salida el conjunto de cadenas que son prefijos de la
cadena de entrada correspondiente. Tal y como hemos mencionado, dichos conjuntos
de cadenas conformar´an un lenguaje y, por tanto, se representar´an y se visualizar´an
como tales. Para la entrada de ejemplo, la salida ser´ıa similar a la siguiente:
1 {& , a , ab , abb , abba , abbab }
2 {& , 6 , 67 , 679 , 6793 , 67938 , 679383 , 6793836}
3 {& , h , ho , hol , hola }
5. Sufijos: escribir en el fichero de salida el conjunto de cadenas que son sufijos de cada
cadena de entrada correspondiente. Al igual que en el caso anterior, dichos conjuntos
de cadenas conformar´an un lenguaje y, por tanto, se representar´an y se visualizar´an
como tales. Para la entrada de ejemplo, la salida ser´ıa similar a la siguiente:
1 {& , b , ab , bab , bbab , abbab }
2 {& , 6 , 36 , 836 , 3836 , 93836 , 793836 , 6793836}
3 {& , a , la , ola , hola }
En relaci´on a los resultados anteriores, t´engase en cuenta que las cadenas de los
conjuntos se est´an mostrando de forma ordenada en relaci´on a la longitud de las
mismas. El resultado ser´ıa diferente si se hubiera optar por hacer una ordenaci´on
basada en la comparaci´on alfanum´erica de las cadenas.
