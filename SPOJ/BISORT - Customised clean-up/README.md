BISORT - Putting your own house in order
Johny, who was a real bookworm, decided to put his own order in his extensive book collection of n <= 500000 books. "Every book has to be in its place!" - thought the resolute Johny, smiling under his breath....
So Johny numbered each book with a unique number (0 <= number <= 109) and arranged them on the shelf in a random order. Then, Johny swapped the book numbered k1-th in non-growing order with the last book on the shelf. Next, Johny chose the book numbered k2nd in non-growing order from the remaining books (except the last one) and swapped it with the penultimate book on the shelf, etc.... To avoid confusion, Johny occasionally writes down the consecutive numbers of the books on the shelf. "No one can guess my own order" - pleased Johnny. Try to decipher Johnny's order! We will assume that 1 <= ki <= n - i + 1.

The input consists of 15 tests, divided into three groups:

tests 1-5: number of books n <= 10000, 1 <= ki <= 2,
tests 6-10: number of books n <= 10000, 1 <= ki <= n - i + 1,
tests 11-15: number of books n <= 500000, 1 <= ki <= n - i + 1.
Input
The first line of the input will give the number of books n. The second line will give the book numbers separated by spaces (in random order), the third line will give the values k1, k2, ..., kn. Finally, the fourth line will give the numbers of steps (rearrangements of one book), after which Johny records the state on the shelf. We assume that the last value in the fourth line will be n.

Output
In the output on the following lines all those shelf states that Johny has recorded should be written out.

Example 1
Input:
10
318 428 564 190 369 272 551 620 98 517
1 2 1 2 2 2 2 2 1 1
2 7 8 9 10
Output:
318 428 564 190 369 272 98 517 551 620
190 98 517 272 318 369 428 564 551 620
517 98 190 272 318 369 428 564 551 620
98 517 190 272 318 369 428 564 551 620
98 517 190 272 318 369 428 564 551 620
Example 2
Input:
10
2432 1583 5523 4560 2903 1299 1933 3813 721 1072
8 5 5 5 1 4 1 2 1 1
1 4 5 10
Output:
2432 1583 5523 4560 2903 1072 1933 3813 721 1299
721 3813 5523 4560 2903 1072 1583 1933 2432 1299
721 3813 1072 4560 2903 5523 1583 1933 2432 1299
721 3813 2903 4560 1072 5523 1583 1933 2432 1299




BISORT - Własne porządki
Jaś, który był prawdziwym molem książkowym, postanowił wprowadzić własne porządki w swoim bogatym księgozbiorze liczącym n <= 500000 książek. "Każda książka musi być na swoim miejscu!" - pomyślał rezolutny Jaś, uśmiechając się pod nosem...
Ponumerował przeto Jaś każdą książke nadając jej unikatowy numer (0 <= numer <= 109) i poukładał je na półce w przypadkowej kolejności. Następnie książkę o numerze k1-tym w porządku nierosnącym zamienił Jaś z ostatnią książka na półce. Dalej, wybrał Jaś książkę o numerze k2-tym w porządku nierosnącym z pozostałych książek (poza ostatnią) i zamienił ją z przedostatnią książką na półce, itd... Aby uniknąć pomyłki, Jaś od czasu do czasu spisuje kolejne numery książek na półce. "Nikt nie zgadnie mojego własnego porządku" - ucieszył się Jaś. Spróbuj rozszyfrować porządek Jasia! Zakładać będziemy, że 1 <= ki <= n - i + 1.

Dane wejściowe składają się z 15 testów, podzielonych na trzy grupy:

testy 1-5: liczba książek n <= 10000, 1 <= ki <= 2,
testy 6-10: liczba książek n <= 10000, 1 <= ki <= n - i + 1,
testy 11-15: liczba książek n <= 500000, 1 <= ki <= n - i + 1.
Wejście
W pierwszej linii na wejściu podana będzie ilość książek n. W drugiej linii podane będą numery książek oddzielone spacjami (w porządku przypadkowym), w trzeciej linii podane będą wartości k1, k2, ..., kn. Wreszcie w czwartej linii podane będą numery kroków (przestawień jednej książki), po której Jaś zapisuje stan na półce. Zakładamy, że ostatnią wartością w czwartej linii będzie n.

Wyjście
Na wyjściu w kolejnych liniach należy wypisać wszystkie te stany półki, które odnotował Jaś.

Przykład 1
Wejście:
10
318 428 564 190 369 272 551 620 98 517
1 2 1 2 2 2 2 2 1 1
2 7 8 9 10
Wyjście:
318 428 564 190 369 272 98 517 551 620
190 98 517 272 318 369 428 564 551 620
517 98 190 272 318 369 428 564 551 620
98 517 190 272 318 369 428 564 551 620
98 517 190 272 318 369 428 564 551 620
Przykład 2
Wejście:
10
2432 1583 5523 4560 2903 1299 1933 3813 721 1072
8 5 5 5 1 4 1 2 1 1
1 4 5 10
Wyjście:
2432 1583 5523 4560 2903 1072 1933 3813 721 1299
721 3813 5523 4560 2903 1072 1583 1933 2432 1299
721 3813 1072 4560 2903 5523 1583 1933 2432 1299
721 3813 2903 4560 1072 5523 1583 1933 2432 1299