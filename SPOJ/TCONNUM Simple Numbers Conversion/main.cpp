#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cstdlib>
using std::string;

int main()
{

	int inputs_nr, base_in, base_out;
	string in_number;


	std::cin >> inputs_nr;

	for (int i = 0; i < inputs_nr; i++)
	{
		std::cin >> in_number >> base_in >> base_out;
		std::vector<int> out;
		out.push_back(0);

		for(int j=0;j<in_number.length();j++)
		{
			char char_in_nr = in_number[j];
			int int_in_nr = strtol(&char_in_nr, 0, base_in);

			out[0] += int_in_nr;

			int counter = 0;
			while(out[counter] >= base_out)
			{
				if(counter + 1 >= out.size())
				{
					out.push_back(0);
				}
				out[counter + 1] += static_cast<int>(out[counter] / base_out);
				out[counter++] = out[counter] % base_out;

				if (out[counter] < base_out)
				{
					while (out[counter] < base_out && counter + 1 < out.size())
					{
						counter++;
					}
				}
			}

			if (j+1 < in_number.length()) {
				int non_zero = -1;
				for (int z = 0; z < out.size(); z++)
				{
					out[z] *= base_in;
					if(non_zero == -1 && out[z] >= base_out)
					{
						non_zero = z;
					}
				}
				if (non_zero >= 0) {

					counter = non_zero;
				}
				else
				{
					counter = out.size()-1;
				}
				while (out[counter] >= base_out)
				{
					if (counter + 1 >= out.size())
					{
						out.push_back(0);
					}
					out[counter + 1] += static_cast<int>(out[counter] / base_out);
					out[counter++] = out[counter] % base_out;

					if(out[counter] < base_out)
					{
						while(out[counter] < base_out && counter+1 < out.size())
						{
							counter++;
						}
					}

				}
			}

			
			


		}
		for (int d = out.size() - 1; d >= 0; d--)
		{
			if(out[d] > 9)
			{
				std::cout << static_cast<char>(out[d] + 'A' - 10);
			}
			else {
				std::cout << out[d];
			}
		}
		std::cout << std::endl;

	}






}