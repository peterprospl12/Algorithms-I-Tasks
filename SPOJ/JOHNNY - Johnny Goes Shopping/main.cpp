#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <queue>

int main()
{

	unsigned long long int items_nr;
	std::cin >> items_nr;
	std::vector<unsigned long long int> tab(items_nr);
	std::vector<unsigned long long int> out;
	std::unordered_map<unsigned long long int, std::queue<unsigned long long int>> umap;

	for(int i=0;i<items_nr;i++)
	{
		std::cin >> tab[i];
		umap[tab[i]].push(i);
	}

	unsigned long long int temp;
	std::sort(tab.begin(), tab.end(), std::greater<unsigned long long int>());

	while(tab.size() > 1){
		temp = tab[0] - tab[1];
		out.push_back(tab[0]);
		out.push_back(tab[1]);
		tab[0] = temp;
		tab[1] = 0;
		std::sort(tab.begin(), tab.end(), std::greater<unsigned long long int>());
		tab.pop_back();
	}

	std::vector<unsigned long long int> out2;

	unsigned long long int temp1;
	unsigned long long int dif;
	bool founded;
	while(!out.empty())
	{
		temp = out[out.size()-1];
		temp1 = out[out.size() - 2];
		dif = temp1 - temp;

		founded = false;
		for(int i=0;i<tab.size();i++)
		{
			if(dif == tab[i])
			{
				tab[i] = temp1;
				founded = true;
				out2.push_back(temp);
				break;
			}
		}
		if(!founded && !out2.empty())
		{
			for (int i=0; i < out2.size(); i++)
			{
				if (dif == out2[i])
				{
					out2[i] = temp1;
					tab.push_back(temp);
					break;
				}
			}
		}
		out.pop_back();
		out.pop_back();

	}
	//std::cout << std::endl;
	for(int i=0;i<tab.size();i++)
	{
		std::cout << umap[tab[i]].back() + 1 << std::endl;
		umap[tab[i]].pop();
	}

	return 0;
}