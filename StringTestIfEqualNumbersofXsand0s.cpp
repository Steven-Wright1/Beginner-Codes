#include <string>
#include <iostream>

bool XO(std::string str)
{
	int length, i; 
    int xcount = 0; 
    int ocount = 0;  

    length = str.length(); 
    
    for (i = 0; i < length; i++) 
    {
        if (str[i] == 'x' || str[i] == 'X') xcount++;
        else if (str[i] == 'o' || str[i] == 'O') ocount++;    
    }

    std::cout << xcount << std::endl;  
    std::cout << ocount << std::endl;  



    if (xcount == ocount) 
    return (true); 
    else 
    return (false);

}


int main()
{

bool test;
std::string str;

str = "XOOXOXXOZXOKJBIONsiagbxpooxoxxxXzxoozoHDKSB";
test = XO(str);
if (test == true) std::cout << "String has equal number of X's and O's";
else  std::cout << "String has dissimilar number of X's and O's";


}