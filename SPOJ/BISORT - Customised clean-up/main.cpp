#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <deque>


int main()
{

	int books_nr;
	std::cin >> books_nr;

	std::vector<int> books(books_nr);
	std::deque<int> books_sorted(books_nr);
	std::vector<int> k(books_nr);
	std::vector<int> shelf;
	std::unordered_map<int, int> indexes;
	indexes.reserve(books_nr);
	shelf.reserve(books_nr);
	int temp;

	for (int i = 0; i < books_nr; i++)
	{
		std::cin >> temp;
		books[i] = temp;
		books_sorted[i] = temp;
		indexes.insert(std::make_pair(temp, i));
	}

	std::sort(books_sorted.begin(), books_sorted.end());

	for (int i = 0; i < books_nr; i++)
	{
		std::cin >> k[i];
	}
	temp = -1;
	while (temp != books_nr)
	{
		std::cin >> temp;
		shelf.push_back(temp);
	}

	int books_position = books_nr;
	int shelf_index = 0;
	for (int i = 0; i < k.size(); i++)
	{
		int sorted_index = books_position - k[i];
		int sorted_value = books_sorted[sorted_index];

		int index = indexes.at(sorted_value);

		std::swap(books[index], books[books_position - 1]);

		auto first = indexes.find(books[index]);
		auto two = indexes.find(books[books_position - 1]);

		std::swap(first->second, two->second);
		books_sorted.erase(books_sorted.end() - k[i]);

		books_position--;

		if (i + 1 == shelf[shelf_index])
		{
			for (int i = 0; i < books_nr; i++)
			{
				std::cout << books[i] << " ";
			}
			std::cout << std::endl;
			shelf_index++;
		}

	}

	return 0;



}