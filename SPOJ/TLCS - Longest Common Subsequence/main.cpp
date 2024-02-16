#include <iostream>
#include <string>
#include <vector>
using std::string;


int main()
{
	int input_nr;
	std::cin >> input_nr;

	int s1_length, s2_length;
	string s1, s2;

	for (int p = 0; p < input_nr; p++)
	{
		std::cin >> s1_length >> s1 >> s2_length >> s2;

		int** matrix = new int* [s1_length + 1];
		for (int i = 0; i < s1_length + 1; i++) {
			matrix[i] = new int[s2_length + 1];
		}



		for (int i = 0; i < s1_length + 1; i++) {
			for (int j = 0; j < s2_length + 1; j++) {

				if (i == 0 || j == 0) {
					matrix[i][j] = 0;
					continue;
				}
				matrix[i][j] = 0;

				if (s1[i - 1] == s2[j - 1])
				{
					matrix[i][j] = matrix[i-1][j-1] + 1;
					

				}
				else {
					int rowV = matrix[i - 1][j];
					int colV = matrix[i][j - 1];

					matrix[i][j] = std::max(rowV, colV);
				}
				


			}
		}

		
		int counterR = s1_length;
		int counterL = s2_length;
		std::vector<char> pos;
		
		while (counterR != 0 && counterL != 0)
		{

			if (s1[counterR-1] == s2[counterL-1]) {
				 
				pos.push_back(s1[counterR - 1]);
				
				counterR -= 1;
				counterL -= 1;
			}

			else if (matrix[counterR-1][counterL] < matrix[counterR][counterL-1])
			{
				counterL -= 1;
			}
			else
			{
				counterR -= 1;
			}



		}


		string subseq;


		if (pos.size() < 1)
		{
			std::cout << "case " << p + 1 << " N" << std::endl;
		}
		else {
			std::cout << "case " << p + 1 << " Y" << std::endl;
			std::cout << pos.size() << std::endl;
			int last1 = -1, last2 = -1;
			int pos1 = 0;
			for (int i = pos.size() - 1; i >= 0; i--)
			{
				subseq = pos[i];
				for (int j = last1 + 1; j < s1_length; j++)
				{
					if (s1[j] == subseq[0])
					{
						pos1 = j;
						if (j > last1)
						{
							last1 = j;
							break;
						}
					}
				}
				int pos2 = 0;
				for (int j = last2 + 1; j < s2_length; j++)
				{
					if (s2[j] == subseq[0])
					{
						pos2 = j;
						if (j > last2)
						{
							last2 = j;
							break;
						}
					}
				}
				std::cout << subseq << " " << pos1 + 1 << " " << pos2 + 1 << std::endl;
			}
		}


		for (int x = 0; x < s1_length + 1; x++) {
			delete matrix[x];
		}
		delete[] matrix;


	}

}