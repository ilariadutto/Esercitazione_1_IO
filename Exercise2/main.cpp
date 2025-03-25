#include <iostream>
#include <fstream>
#include <iomanip>

#include "funzioni.cpp"
#include "funzioni.hpp"



int main()
{   
	std::ifstream fstr2("data.txt");
	if (fstr2.fail())  
	{
		std::cerr <<"errore nell'apertura del file"<< std::endl;
		return 1;
    }
	
	
	
	double val;
	double med;
	int n = 0;
	double sum = 0;
	std::ofstream printout("result.txt");
	printout << "#N Mean" <<std::endl;
	printout << std::scientific << std:: setprecision(16);
	while(fstr2 >> val)
	{
		n +=1;
		sum += map(val)
		med = sum/n;
		printout << n << " " << med << std::endl;
		
	}
	
	
	
    return 0;
}
