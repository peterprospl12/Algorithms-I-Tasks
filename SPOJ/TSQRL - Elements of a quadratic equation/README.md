TSQRL - Elements of a quadratic equation
For given integer coefficients a b c (in the range -1000000 to 1000000 ) of a quadratic equation in canonical form a * x2 + b * x + c = 0 determine the approximate real solutions x'1 and x'2 of the given equation (if any) such that |x1 - x'1| <= 10-k and |x2 - x'2| <= 10-k, where x1 and x2 are exact solutions.

The input consists of 10 test sets, divided into two groups:

tests 1-5: 1 <= k <= 2,

tests 6-10: 1 <= k <= 100.

Input
The first line gives the number of test sets t <= 10. Each subsequent t line gives the four integers a b c k.

Output
For each four numbers a b c k determine the real roots of the quadratic equation a * x2 + b * x + c = 0 to the nearest 10-k. Write out the number of different real roots of the equation. If real solutions exist, write the roots in ascending order (separated by a space) after the space. The number of places after the decimal point is not limited.

Example
Input:
5
1 0 1 1
1 2 1 1
1 -2 1 1
1 0 -1 2
1 0 -2 2

Output:
0
1 -1
1 1 [can be: 1 0.9 or 1 1.1].
2 -1 1
2 -1.41 1.42 [can be: -1.423 1.4142].








TSQRL - Pierwiastki równania kwadratowego
Dla podanych całkowitych współczynników a b c (z zakresu od -1000000 do 1000000 ) równania kwadratowego w postaci kanonicznej a * x2 + b * x + c = 0 wyznacz przybliżone rozwiązania rzeczywiste x'1 oraz x'2 podanego równania (jeżeli istnieją) takie, że |x1 - x'1| <= 10-k oraz |x2 - x'2| <= 10-k, gdzie x1 oraz x2 są rozwiązaniami dokładnymi.

Dane wejściowe składają się z 10 zestawów testowych, podzielonych na dwie grupy:

testy 1-5: 1 <= k <= 2,

testy 6-10: 1 <= k <= 100.

Wejście
W pierwszej linii podana została liczba zestawów testowych t <= 10. W każdej kolejnej z t linii podana została czwórka liczb całkowitych a b c k.

Wyjście
Dla każdej czwórki liczb a b c k wyznacz pierwiastki rzeczywiste równania kwadratowego a * x2 + b * x + c = 0 z dokładnością do 10-k. Wypisz liczbę różnych pierwiastków rzeczywistych równania. Jeżeli rozwiązania rzeczywiste istnieją, po spacji wypisz pierwiastki w porządku rosnącym (oddzielone spacją). Liczba miejsc po przecinku nie jest ograniczona.

Przykład
Wejście:
5
1 0 1 1
1 2 1 1
1 -2 1 1
1 0 -1 2
1 0 -2 2

Wyjście:
0
1 -1
1 1 [może być: 1 0.9 lub 1 1.1]
2 -1 1
2 -1.41 1.42 [może być: -1.423 1.4142]