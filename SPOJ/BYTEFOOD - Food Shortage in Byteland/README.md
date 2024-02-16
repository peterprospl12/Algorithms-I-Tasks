BYTEFOOD - Food Shortage in Byteland
Fanatics from the BBFO blew up all the food factories in the Bytelandian capital! Hurry up! There is still some food left in shops. Some shops are located in the centre, others in the suburbs, so Johnny has to decide which of them are worth visiting. Some shops can be very big and have plenty of food in them, others may be so small that food dissappears from them at an alarming rate... So? Help Johnny buy as much food as possible.

There are n open shops, each of them located at position (xi,yi), for i=1,...,n, where 0 <= xi,yi <= 250. The distances between shops are measured using the Manhattan metric (i.e. as sums of absolute values of differences of x and y coordinates). Besides, every shop is characterized by a linear time function describing how much food is left in the shop at the moment:

fi = max{0, ai - bi * time}
where 0 <= ai <= 1000000, 0 <= bi <= 1000, while time is the time (in minutes) that has elapsed from the moment Johnny left the house (assume that Johnny does not live in the same place as any shop). If Johnny decides to stay in a shop, he can buy at most bi units of food per minute. Otherwise, he can move along the ortogonal system of streets of the city at a constant speed of unit distance per minute. Johnny only ever changes the action he is performing at the full minute. Because his family is slowly beginning to starve, he should be back at home not later than m minutes after he left. Since there are thousands of starving families in the capital, Johnny can't spent more that 1 <= ci <= 10 minutes in a shop. Moreover, he will never go into the same shop twice for fear of being lynched...

Input
The first line of input contains a single positive integer t <= 1000, the number of test cases. Each test case begins with the number of shops in the city 1 <= n <= 1000 and the deadline 1 <= m <= 5000. Then the following n lines consist of four integers xi yi ai bi ci each, describing the position and the parameters of the function for food availability of the i-th shop. At the end of every test case comes a line with two integersp q (between 0 and 250), corresponding to the x and y coordinates of the position of Johnny's house.

All the input data are integers.

Output
Process all test cases. The correct output for the i-th test case takes the following form:
i [the number of the test case, in the input order]
s m [s is the number of the target shop and m > 0 is the number of minutes spent in it].
At the end of the series of moves you should always write a line conisting of two zeros ('0 0').

All the output data should be integers.

Scoring
The score of your program is the total amount of food that Johnny bought (summed over all the testcases in which he managed to come back home before the deadline).

Example
Input
4
2 20
0 0 100 5 5
10 0 200 10 10
5 0
2 20
0 0 180 15 10
10 0 200 20 10
5 0
4 101
0 0 1000 20 5
20 0 200 1 5
0 20 5000 200 5
20 20 300 5 10
10 10
1 15
1 0 10 1 5
5 0

Output
1
2 10
0 0
2
1 10
0 0
3
3 5
4 10
2 1
0 0
4
1 5
0 0

Score
Score = 1261







BYTEFOOD - Niedobór żywności w Bajtocji
Fanatycy z BBFO wysadzili w powietrze wszystkie fabryki żywności w Bajtocji! Pospieszcie się! W sklepach zostało jeszcze trochę jedzenia. Niektóre sklepy znajdują się w centrum, inne na przedmieściach, więc Johnny musi zdecydować, które z nich warto odwiedzić. Niektóre sklepy mogą być bardzo duże i mieć mnóstwo jedzenia, inne mogą być tak małe, że jedzenie znika z nich w zastraszającym tempie... I co? Pomóż Johnny'emu kupić jak najwięcej jedzenia.

Istnieje n otwartych sklepów, z których każdy znajduje się w pozycji (xi,yi), dla i=1,...,n, gdzie 0 <= xi,yi <= 250. Odległości między sklepami są mierzone za pomocą metryki Manhattan (tj. jako sumy bezwzględnych wartości różnic współrzędnych x i y). Ponadto każdy sklep charakteryzuje się liniową funkcją czasu opisującą, ile jedzenia pozostało w sklepie w danym momencie:

fi = max{0, ai - bi * czas}
gdzie 0 <= ai <= 1000000, 0 <= bi <= 1000, podczas gdy czas to czas (w minutach), który upłynął od momentu opuszczenia domu przez Jasia (załóżmy, że Jaś nie mieszka w tym samym miejscu co jakikolwiek sklep). Jeśli Jaś zdecyduje się pozostać w sklepie, może kupić co najwyżej bi jednostek żywności na minutę. W przeciwnym razie może poruszać się wzdłuż ortogonalnego systemu ulic miasta ze stałą prędkością jednostki odległości na minutę. Johnny zmienia wykonywaną czynność tylko co minutę. Ponieważ jego rodzina powoli zaczyna głodować, powinien wrócić do domu nie później niż m minut po wyjściu. Ponieważ w stolicy są tysiące głodujących rodzin, Janek nie może spędzić w sklepie więcej niż 1 <= ci <= 10 minut. Co więcej, nigdy nie wejdzie do tego samego sklepu dwa razy z obawy przed zlinczowaniem...

Wejście
Pierwszy wiersz wejścia zawiera pojedynczą dodatnią liczbę całkowitą t <= 1000, liczbę przypadków testowych. Każdy przypadek testowy zaczyna się od liczby sklepów w mieście 1 <= n <= 1000 i terminu 1 <= m <= 5000. Następnie kolejne n wierszy składa się z czterech liczb całkowitych xi yi ai bi ci, opisujących pozycję i parametry funkcji dostępności żywności w i-tym sklepie. Na końcu każdego przypadku testowego znajduje się wiersz z dwiema liczbami całkowitymi q (od 0 do 250), odpowiadającymi współrzędnym x i y pozycji domu Johnny'ego.

Wszystkie dane wejściowe są liczbami całkowitymi.

Wyjście
Przetwórz wszystkie przypadki testowe. Prawidłowe wyjście dla i-tego przypadku testowego ma następującą postać:
i [numer przypadku testowego, w kolejności wejściowej]
s m [s to numer docelowego sklepu, a m > 0 to liczba minut w nim spędzonych].
Na końcu serii ruchów należy zawsze zapisać linię składającą się z dwóch zer ('0 0').

Wszystkie dane wyjściowe powinny być liczbami całkowitymi.

Punktacja
Wynik programu to całkowita ilość jedzenia kupionego przez Jasia (zsumowana dla wszystkich przypadków testowych, w których udało mu się wrócić do domu przed upływem terminu).

Przykład
Wejście
4
2 20
0 0 100 5 5
10 0 200 10 10
5 0
2 20
0 0 180 15 10
10 0 200 20 10
5 0
4 101
0 0 1000 20 5
20 0 200 1 5
0 20 5000 200 5
20 20 300 5 10
10 10
1 15
1 0 10 1 5
5 0

Wyjście
1
2 10
0 0
2
1 10
0 0
3
3 5
4 10
2 1
0 0
4
1 5
0 0

Wynik
Wynik = 1261