Every integer number n is represented in positional number system of base r by a sequence of digits 0 ≤ di < r, so the value is equal to:

n = d0  + r * d1 + r2 * d2 + r3 * d3 + ...

Your task is to convert a given number in r-base represantation into s-base representation, for example: decimal 231 into binary 11100111. Assume that r ≤ 36 and the digits are 0,1,2,3,4,5,6,7,8,9, A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z.

Input
N [the number of series ≤ 1000]
n r s [n ≤ 101000, r,s ≤ 36]

Output
n [s-base representation of number n]

Text grouped in [ ] does not appear in the input and output file.

Example
Input:
3
231 10 2
ABC 15 10
XYZ 36 2

Output:
11100111
2427
1010101111111011

Test cases
There are five categories of the input data:

Test case 1: (1 pt), r = 2 and s = 10, or conversely, n≤ 109, N = 100,

Test case 2: (1 pt), 2 ≤ r,s ≤ 10, n≤109, N = 1000,

Test case 3: (1 pt), 2 ≤ r,s ≤ 36, n≤ 109, N = 1000,

Test case 4: (3 pts), 2 ≤ r,s ≤ 10, n≤ 101000, N = 1000,

Test case 5: (4 pts), 2 ≤ r,s ≤ 36, n≤ 101000, N = 1000.







Każdą liczbę całkowitą nieujemną n możemy przedstawić w systemie pozycyjnym jednorodnym o podstawie r jako ciąg cyfr 0 ≤ di < r, o wartości:

n = d 0  + r * d1  + r2 * d2  + r3 * d3  + ...

Twoim zadaniem jest dokonać konwersji podanej liczby w systemie o podstawie r do liczby w systemie o podstawie s, na przykład: liczba dziesiętna 231 ma reprezentację binarną 11100111. Zakładać będziemy, że r ≤ 36 oraz cyfry są postaci 0,1,2,3,4,5,6,7,8,9, A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z.

Wejście
N [liczba serii ≤ 1000]
n r s [n ≤ 101000, r,s ≤ 36]

Wyjście
n [reprezentacja liczby n w systemie o podstawie s]

Tekst w nawiasach [ ] nie występuje w danych wejściowych ani wyjściowych.

Przykład
Wejście:
3
231 10 2
ABC 15 10
XYZ 36 2

Wyjście:
11100111
2427
1010101111111011

Zestawy testowe
Dane wejściowe podzielono na pięć kategorii:

Zestaw 1: (1 pkt), konwersja liczb z systemu dwójkowego do dziesiętnego i odwrotnie, wartości liczb nie przekraczają 109, liczba zestawów 100,

Zestaw 2: (1 pkt), konwersja pomiędzy liczbami zapisanymi w systemach o podstawie ≤ 10, wartości liczb nie przekraczają 109, liczba zestawów 1000,

Zestaw 3: (1 pkt), konwersja pomiędzy liczbami zapisanymi w systemach o podstawie ≤ 36, wartości liczb nie przekraczają 109, liczba zestawów 1000,

Zestaw 4: (3 pkt), konwersja pomiędzy liczbami zapisanymi w systemach o podstawie ≤ 10, wartości liczb nie przekraczają 101000, liczba zestawów 1000,

Zestaw 5: (4 pkt), konwersja pomiędzy liczbami zapisanymi w systemach o podstawie ≤ 36, wartości liczb nie przekraczają 101000, liczba zestawów 1000.