#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h> 



bool NestTest(std::vector<int> &array1, std::vector<int> &array2)
{

    int counter = 0;          
    int counter1 = 0;                      // MAKE SURE COUNTERS STARTS ON ZERO!!!

    std::sort(array1.begin(), array1.end());       
    std::sort(array2.begin(), array2.end());        // SORTS THE VECTOR IN  ACSENDING ORDER

    int min_arr1 = array1.front();
    int min_arr2 = array2.front();                  // FINDS FIRST AND LAST ELEMENTS OF EACH VECTOR.
    int max_arr1 = array1.back();
    int max_arr2 = array2.back();


    for (int j = 0; j < array2.size(); j++)           // ITERATE THROUGH ARRAY 2 AND IF VALUES ARE EITHER LESS THAN OR GREATER THAN THE MIN AND MAX VALUES IN ARRAY 1, INCREASE COUNTER
    {                                                 // ALSO INPUT THOSE VALUES INTO ARRAY 1 TO COMPLETE THE NESTING PROCESS
        if (min_arr1 > array2[j]) 
        {
            counter++;
            auto it = array1.insert(array1.begin(), array2[j]); 
            
        }

        if (array2[j] > max_arr1) 
        {
           counter1++;
           auto it = array1.insert(array1.end(), array2[j]); 
           
        }
    }
    
    std::sort(array1.begin(), array1.end());  

    
    if (counter +  counter1 == array2.size()) 
    {
        for (int i = 0; i < array1.size(); i++)
        std::cout << array1[i] << '\t';
        std::cout << std::endl; 
        return true; 
    }            

  

    return false; 
}



int main ()
{

// Try out NestTest function with these different arrays to see how to function works
std::vector<int>array1= {1,2,9,10};
std::vector<int>array2= {50,60,17,87};
std::vector<int>array3= {111,1};
std::vector<int>array4= {-5,0,13};
std::vector<int>array5= {-2,2,9,10};
std::vector<int>array6= {3,8,15};
std::vector<int>array7= {-14,-60,11,-100};



if(NestTest(array2, array7))     
{

    std::cout << "The arrays have been nested" << std::endl; 
}
else
std::cout << "The arrays cannot be nested! Please try a different array combination or alter the arrays" << std::endl;


    return 0; 
}