For a given two words x = x1x2...xn and y = y1y2...ym find the longest common subsequence, i.e. z = z1z2...zk such that every two consecutive elements of z are equal to some two elements of x: xa, xb, and y: yc, yd where a < b and c < d. Assume, that elements of words are letters 'a' - 'z' and m,n <= 1000.

Input
N [the number of series <= 1000]
n x
m y
...

Output
case 1 Y [or N when no answer to this case]
d [the length of the lcs]
zj p q [position of zj in x and in y, respectively]
...

Text grouped in [ ] does not appear in the input and output file.

Example
Input:
3
5 ddacc
3 cac
7 cbbccbc
4 aaca
4 cbeb
5 fdceb

Output:
case 1 Y
2
a 3 2
c 4 3
case 2 N
case 3 Y
3
c 1 3
e 3 4
b 4 5

Score
2







Dla podanych dwóch słów x = x1x2...xn and y = y1y2...ym wyznacz najdłuższy wspólny podciąg, to znaczy słowo z = z1z2...zk takie, że każde dwie kolejne litery z odpowiadają pewnym elementom z x: xa, xb oraz z y: yc, yd, gdzie a < b oraz c < d. Zakładać będziemy, że litery we wszystkich występujących słowach będą z zakresu 'a' - 'z' oraz m,n <= 1000.

Wejście
N [liczba zestawów testowych <= 1000]
n x
m y
...

Wyjście
case 1 Y [lub N gdy nie chcemy drukować odpowiedzi dla tego przypadku]
d [długość najdłuższego wspólnego podciągu]
zj p q [pozycja zj w x oraz w y]
...

Tekst w nawiasach [ ] nie występuje na wejściu ani nie powinien byc drukowany na wyjście.

Przykład
Wejście:
3
5 ddacc
3 cac
7 cbbccbc
4 aaca
4 cbeb
5 fdceb

Wyjście:
case 1 Y
2
a 3 2
c 4 3
case 2 N
case 3 Y
3
c 1 3
e 3 4
b 4 5

Wynik punktowy
2