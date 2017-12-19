#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
int main()
{
ofstream myfile;
myfile.open("filename.html");
const double c = 1;

myfile << "<html>\n<head></head>\n<body>\n<table width=100%\"\">";
for(int i=0; i<=255; i++)
{
	myfile << "<tr>\n";
	for(int j=0; j<=255; j++)
	{
		double a, b;
		myfile << "<td cellpadding=\"1px\" cellspacing=\"0\" bgcolor = \"rgb("; 
		myfile << (static_cast<int>((pow(i, 2) - pow(j, 2))/c)%255) << ","; 
		myfile << (static_cast<int>((pow(i,2) - pow(j,2))/c)%255); 
		myfile << ",0)\">.</td>\n";

	}
	myfile << "</tr>\n";
}
myfile << "\n</table>\n</body>\n</html>\n";
myfile.close();
return 0;
}
