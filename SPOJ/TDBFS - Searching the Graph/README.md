For a given list of adjacent vertices of a graph and a chosen vertex v write down in the Depth First Search (DFS) or Breadth First Search (BFS) order all the vertices from the connected component of the graph containing v. Assume that the number of vertices of the graph is at most 1000.

Input

t [the number of graphs <= 100]
Graph:
n [1 <= n <= 1000 the number of graph vertices]
i m a b c ... [the list of m adjacent vertices to vertex i]
Any query is as follows: [not more than n queries]
v i
where 1 <= v <= n is the beginning vertex and i = 0 for DFS order and i = 1 for BFS order.
0 0 [at the end of the serie]

The list for isolated vertex a is a 0.

Output

graph i [test case, word graph is necessary]
a b c ... [the DFS or BFS order of all vertices]

Example
Input:
3
6
1 2 3 4
2 2 3 6
3 2 1 2
4 1 1
5 0
6 1 2
5 1
1 0
1 0
0 0
10
1 6 3 5 6 7 8 9
2 1 9
3 2 1 5
4 5 6 7 8 9 10
5 4 1 3 7 8
6 3 1 4 7
7 5 1 4 5 6 8
8 5 1 4 5 7 10
9 3 1 2 4
10 2 4 8
7 1
1 0
2 1
4 1
7 1
0 0
2
1 0
2 0
1 1
0 0

Output:
graph 1
5
1 3 2 6 4
1 3 2 6 4
graph 2
7 1 4 5 6 8 3 9 10 2
1 3 5 7 4 6 8 10 9 2
2 9 1 4 3 5 6 7 8 10
4 6 7 8 9 10 1 5 2 3
7 1 4 5 6 8 3 9 10 2
graph 3
1






Dla podanych list sąsiadów wierzchołków grafu oraz wskazanago wierzchołka v należy wypisać listę wierzchołków uzyskaną podczas przeszukiwania grafu metodą w głąb (DFS) lub wszerz (BFS). Wszystkie wypisane wierzchołki muszą należeć do tej samej składowej spójności co wierzchołek v. Zakładać będziemy, że liczba wierzchołków grafu nie przekracza 1000.

Wejście

t [liczba grafów <= 100]
Graf:
n [1 <= n <= 1000 liczba wierzchołków grafu]
i m a b c ... [lista m wierzchołków sąsiednich do wierzchołka o numerze i]
Każde zapytanie ma następującą postać: [nie więcej niż n zapytań]
v i
gdzie 1 <= v <= n jest wierzchołkiem, od którego rozpoczyna się przeglądanie grafu, wartość i = 0 dla metody DFS oraz i = 1 dla metody BFS.
0 0 [na końcu serii zapytań]

Lista sąsiadów dla wierzchołka izolowanego a jest postaci a 0.

Wyjście

graph i [przypadek testowy, słowo graph jest niezbędne]
a b c ... [porządek DFS lub BFS wszystkich wierzchołków]

Przykład
Wejście:
3
6
1 2 3 4
2 2 3 6
3 2 1 2
4 1 1
5 0
6 1 2
5 1
1 0
1 0
0 0
10
1 6 3 5 6 7 8 9
2 1 9
3 2 1 5
4 5 6 7 8 9 10
5 4 1 3 7 8
6 3 1 4 7
7 5 1 4 5 6 8
8 5 1 4 5 7 10
9 3 1 2 4
10 2 4 8
7 1
1 0
2 1
4 1
7 1
0 0
2
1 0
2 0
1 1
0 0

Wyjście:
graph 1
5
1 3 2 6 4
1 3 2 6 4
graph 2
7 1 4 5 6 8 3 9 10 2
1 3 5 7 4 6 8 10 9 2
2 9 1 4 3 5 6 7 8 10
4 6 7 8 9 10 1 5 2 3
7 1 4 5 6 8 3 9 10 2
graph 3
1