#include <iostream>
#include <vector>

using namespace std;

//Function prototypes...
vector <vector <char> > initializeMatrix(int,int,char);
void printMatrix( vector <vector <char> > );

//Main program. DO NOT EDIT----------------------------------------------------
//-----------------------------------------------------------------------------
int main()
{
    //Variables for user input and grid representation
    vector <vector <char > > grid;
    int rows;
    int cols;
    char filler;

    //Retrieve user input...
    cout<<"Enter a character to fill the grid:"<<endl;
    cin>>filler;
    cout<<"Enter rows and columns of "<<filler<<"'s:"<<endl;
    cin>>rows>>cols;
    
    //Print error and quit if invalid matrix size...
    if( rows < 1 || cols < 1 )
    {
        cout<<"Grids must have at least one row and at least one column.\n";
    }
    else
    {
        //Call functions to...
        grid = initializeMatrix(rows,cols,filler); //...make the initial grid
        printMatrix(grid); //...print the initialized grid
    }

	return 0;
}
//-----------------------------------------------------------------------------
//END OF MAIN PROGRAM

/**
 * Given a number of rows and columns as well as a symbol, this function
 * creates a matrix of the specified size and fills each element of the matrix
 * with the symbol provided.
 *
 * @param rows - number of rows in the matrix, should be > 0
 * @param columns - number of columns in the matrix, should be > 0
 * @param value - a character value to which each element will be assigned
 * @return provides a vector of vectors of characters with the specified number
 *         of rows and columns which each element assigned to value
**/
vector <vector <char> > initializeMatrix(int rows, int columns, char value)
{
    vector <vector<char> > grid;
    grid.resize(rows);
    for(int r = 0; r < grid.size(); r++)
    {
        grid[r].resize(columns);
        for(int c = 0; c < grid[r].size(); c++)
        {
            grid[r][c] = value;
        }
    }

    return grid;
}

/**
 * Given a matrix (vector of vectors of characters), print out each element,
 * with each row printed on a new line and each value separated by spaces
 * (including a space at the end of each line)
 * 
 * @param matrix - a vector of vectors of characters to be printed out
**/
void printMatrix(vector <vector <char> > matrix)
{
    cout << "GRID======\n";
    for(int r = 0; r < matrix.size(); r++)
    {
        for(int c = 0; c < matrix[r].size(); c++)
        {
            cout << matrix[r][c] << " | ";
        }

        cout << endl;
    }
}
