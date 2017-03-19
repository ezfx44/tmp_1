#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>

int main()
{
	char nm1[20], nm2[20], buff1[256], buff2[256];
	int line = 1;
	std::cout << "Enter the name of 1-st file: ";
	std::cin >> nm1;
	std::cout << "\nEnter the name of 2-nd file: ";
	std::cin >> nm2;
	std::ifstream f1, f2;
	f1.open(nm1);
	f2.open(nm2);
	std::ofstream fout;
	fout.open("file.txt");
	while (!f1.eof() || !f2.eof())
	{
		f1.getline(buff1, 256);
		f2.getline(buff2, 256);
		if (strcmp(buff1, buff2))
		{
			fout << nm1 << " " << line << " " << buff1 << std::endl;
			fout << nm2 << " " << line << " " << buff2 << std::endl;
		}
		line++;
	}
	f1.close();
	f2.close();
	system("pause");
	return 0;
}
