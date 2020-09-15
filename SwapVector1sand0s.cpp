#include <vector>
#include <iostream>

using namespace std; 
   
int vectsize_x;
int vectsize_y;

// The vect is passed by reference (simply by using &vect) and changes made here reflect in main() 
void func(vector<vector<int>> &vect) 
{ 
    // calcs x and y dimensions of vector
    vectsize_x = vect.size();
    vectsize_y = vect[0].size();


    // iterates through both vector dimensions swapping zeros for ones and vice versa
	for (int i = 0; i < vectsize_x;  i++) 
    {
		for (int j = 0; j < vectsize_y;  j++) 
        {
			if(vect[i][j] == 1)           vect[i][j] = 0;                
                else if (vect[i][j] == 0)     vect[i][j] = 1;                
		}
	}
  
} 
   
int main() 
{   
 
    // Create Vector ones and zeros are to be changed
    vector<vector<int>> vect = {{0,1,0,0,0,1,0,1,1,0,1},{0,1,1,1,0,0,1,1,0,1,0}};

    // calcs x and y dimensions of vector
    vectsize_x = vect.size();
    vectsize_y = vect[0].size();

    
    // Print Original Vector
    for (int i = 0; i < vectsize_x;  i++) 
    {
		for (int j = 0; j < vectsize_y;  j++)
         {
            cout << vect[i][j]; 
         }
            cout << endl;
    }
    
    // Call function that swaps ones and zeros
    func(vect);
    
    // Print Edited Vector
    cout << endl;
    for (int i = 0; i < vectsize_x;  i++) {
		for (int j = 0; j < vectsize_y;  j++) {
            cout << vect[i][j]; 
        }
        cout << endl;
    }

    return 0; 
} 