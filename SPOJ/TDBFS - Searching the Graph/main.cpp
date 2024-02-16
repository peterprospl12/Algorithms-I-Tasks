#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
struct Graph
{
	int vertices;
	std::vector<std::list<int>> neighbours;
};




void dfs(Graph& graph, int starting_vert)
{
	std::vector<bool> visited(graph.vertices, false);
	std::stack<int> stack;
	int current_node = starting_vert;

	stack.push(current_node);
	while (!stack.empty())
	{

		current_node = stack.top();
		stack.pop();




		if (!visited[current_node]) {
			visited[current_node] = true;
			std::cout << current_node + 1 << " ";
			for (auto it = graph.neighbours[current_node].rbegin(); it != graph.neighbours[current_node].rend(); ++it)
			{
				if (visited[*it] != true)
				{
					stack.push(*it);
				}
			}
		}
	}


}


void bfs(Graph& graph, int starting_vert)
{
	std::queue<int> queue;
	std::vector<bool> visited(graph.vertices, false);
	int current_node = starting_vert;
	queue.push(current_node);
	while (!queue.empty()) {
		current_node = queue.front();
		queue.pop();
		std::cout << current_node + 1 << " ";


		visited[current_node] = true;

		for (auto it = graph.neighbours[current_node].begin(); it != graph.neighbours[current_node].end(); ++it)
		{
			if (visited[*it] != true) {
				queue.push(*it);
				visited[*it] = true;
			}
		}
	};


}




int main()
{
	int graph_amount;
	std::cin >> graph_amount;

	Graph graphs;

	for (int i = 0; i < graph_amount; i++)
	{
		std::cin >> graphs.vertices;
		graphs.neighbours = std::vector<std::list<int>>(graphs.vertices);
		int vertice_number, length_of_neihbs;

		for (int j = 0; j < graphs.vertices; j++) {
			std::cin >> vertice_number;
			std::cin >> length_of_neihbs;
			vertice_number--; // wektor iterujemy od zera
			for (int z = 0; z < length_of_neihbs; z++)
			{
				int neighbour;
				std::cin >> neighbour;
				neighbour--; // wektor iterujemy od zera
				graphs.neighbours[vertice_number].push_back(neighbour);

			}

		}
		std::cout << "graph " << i + 1 << std::endl;
		int start_vertex, dORb;

		while (std::cin >> start_vertex >> dORb && (start_vertex != 0 || dORb != 0)) {

			start_vertex--; // wektor iterujemy od zera

			if (dORb == 0)
			{
				dfs(graphs, start_vertex);
			}
			else
			{
				bfs(graphs, start_vertex);
			}

			std::cout << std::endl;

		}

	}

}