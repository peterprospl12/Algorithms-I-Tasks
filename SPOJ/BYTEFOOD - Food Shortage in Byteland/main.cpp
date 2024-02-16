#include <iostream>
#include <vector>
#include <deque>
#include <cmath>

class Shop
{
public:
	int pos_x;
	int pos_y;
	int ai;
	int fpm;
	int max_time;
	int shop_nr;
	int start_time;

	Shop()
	{
		pos_x = 0;
		pos_y = 0;
		ai = 0;
		fpm = 0;
		max_time = 0;
		shop_nr = -1;
		start_time = 0;
	}

	Shop(int posx, int posy, int aI, int FPM, int maxtime, int shopNR, int starttime)
	{
		pos_x = posx;
		pos_y = posy;
		ai = aI;
		fpm = FPM;
		max_time = maxtime;
		shop_nr = shopNR;
		start_time = starttime;
	}
};

int distance(const Shop& a, const Shop& b)
{
	return abs(b.pos_x - a.pos_x) + abs(b.pos_y - a.pos_y);
}


int food_left(const Shop& a, int const deadline)
{
	return std::max(0, a.ai - (a.fpm * (a.start_time - deadline)));
}

int max_time_shop(const Shop& a, const int time_left)
{
	if (a.fpm == 0)
	{
		return 0;
	}

	return std::min(food_left(a, time_left) / a.fpm, a.max_time);

}

int profitability(const Shop& a, const int time_left)
{
	return a.fpm * max_time_shop(a, time_left);
}

int time_in_shop(const int time_left, const Shop& starting_shop, const Shop& current_pos, const Shop& house)
{
	int shop_time = max_time_shop(starting_shop, time_left - distance(starting_shop, current_pos));
	if (time_left - distance(starting_shop, current_pos) - distance(starting_shop, house) <= shop_time)
	{
		return time_left - distance(starting_shop, current_pos) - distance(starting_shop, house);
	}
	return shop_time;
}


int main()
{

	int test_cases;
	std::cin >> test_cases;
	for (int i = 0; i < test_cases; i++) {
		int shops_nr, deadline;
		std::vector<int> output;
		std::cin >> shops_nr >> deadline;
		int time_left = deadline;
		std::deque<Shop> shops(shops_nr);
		std::deque<bool> visited(shops_nr, false);

		for (int j = 0; j < shops_nr; j++)
		{
			int a, b, c, d, e;
			std::cin >> a >> b >> c >> d >> e;
			shops[j] = Shop(a, b, c, d, e, j + 1, deadline);
		}

		Shop house;
		Shop curr_pos;
		std::cin >> house.pos_x;
		std::cin >> house.pos_y;
		curr_pos = house;


		while (true) {
			Shop starting_shop = Shop();
			long double starting_shop_prof = 0;
			bool changed = false;

			for (int j = 0; j < shops.size(); j++)
			{
				if (visited[j])
				{
					continue;
				}
				int time = time_left - distance(shops[j], curr_pos) - distance(shops[j], house) - 2*max_time_shop(shops[j], time_left - distance(shops[j], curr_pos)/2);
				if (time <= -6 || time_in_shop(time_left, shops[j], curr_pos, house) < 1)
				{
					continue;
				}
				long double prof = static_cast<long double>(profitability(shops[j], time_left - distance(shops[j], curr_pos))) / (static_cast<long double>(distance(shops[j], curr_pos)) +
					static_cast<long double>(time_in_shop(time_left, shops[j], curr_pos, house)));


				if (prof >= starting_shop_prof)
				{
					starting_shop = shops[j];
					starting_shop_prof = prof;
					changed = true;
				}
				
				
			}


			if (!changed)
			{
				break;
			}
			int shop_time = time_in_shop(time_left, starting_shop, curr_pos, house);

			output.push_back(starting_shop.shop_nr);
			output.push_back(shop_time);
			time_left -= (distance(starting_shop, curr_pos) + shop_time);
			curr_pos = starting_shop;
			visited[starting_shop.shop_nr - 1] = true;



		}


		std::cout << i + 1 << std::endl;
		for (int p = 0; p < output.size(); p += 2)
		{
			std::cout << output[p] << " " << output[p + 1] << std::endl;

		}

		std::cout << "0 0" << std::endl;


	}


}