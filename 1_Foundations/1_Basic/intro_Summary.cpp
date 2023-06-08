#include <iostream>
#include <string>
#include <vector>

#include <fstream>   // std::ifstream 
#include <sstream>

using std::cout;
using std::string;
using std::vector;

using std::ifstream;
using std::istringstream;


enum class State {kEmpty, kObstacle};


// Function declared and defined here
int AdditionFunction(int i, int j) 
{
    return i + j;
}

/* 
int AdditionFunction( vector<int> a)
{
    int sum = 0;
    for( int i : a)
        sum += i;
    return sum;
} */

int AdditionFunction(const vector<int> &v)
{
    int sum = 0;
    for(int i = 0; i < v.size(); ++i)
        sum += v[i];                      // change here 
    return sum;
}

// Write the PrintStrings function here.
void PrintStrings(string a, string b)
{
    cout << a << " " << b << "\n";   // add string
    return;
}


/*--------------------------------- Reading Data from the Stream - -----------------------------------------*/ 

void ReadBoardFile(string path){
   ifstream my_file(path);            // Declare and Initialized var
  
  if (my_file) {                  
        cout << "The file stream has been created!" << "\n";
        string line;
        while (getline(my_file, line)) {         //  write file lines to a string.
            cout << line << "\n";
        }
    }
}


/*--------------------------------- ParseLine function {1,0,1,0} ------------------------------------------*/ 

vector<int>ParseLine(string line){
  istringstream sline(line);
  char c;
  int n;

  vector<int> row;
  while (sline >> n >> c && c == ',') {
    row.push_back(n);
   }
  return row;
}

// TODO: Change the return type of ReadBoardFile.
vector<vector<int>> PrintReadBoardFile(string path) {
    ifstream myfile (path);      
    vector<vector<int>> board{};                           // TODO: Declare an empty board variable here with
    
    if (myfile) {
        string line;
        while (getline(myfile, line)) {
            // TODO:  Call ParseLine for each line and Push the results of ParseLine to the back of the board.
            vector<int> row = ParseLine(line);
            board.push_back(row);
            }
        }
        return board;
}

// TODO: Add PrintBoard function here.
void PrintBoard(const vector<vector<int>> board) {
  for (int i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[i].size(); j++) {
      cout << board[i][j]<<" ";
    }
    cout << "\n";
  }
}



/*===========================================1. Main Function ================================================-===============================*/


int main() {
  // TODO: Add your code here:
  cout << "Hello!" << "\n";

  cout << "\n";

/*===========================================2. How to Store Data================================================-===============================*/

  // Declaring and initializing an int variable.
  int a = 9;

  // Declaring a string variable without initializing right away.
  std::string b;
  std::string c;

  // Initializing the string b.
  b = "Here is a string";
  c = "Here is another string";

  cout << a << "\n";
  cout << b  << "\n";
  cout << c << "\n"<<"\n";
 
  // 1D vector
  vector<int> v_1{0, 1, 2,3,4}; // best one 
  cout << "1D Vector !" << "\n";
  cout << v_1[0]<<"\n";
  cout << v_1[1]<<"\n";

  cout << v_1[2]<<" ";
  cout << v_1[3]<<" ";
  cout <<"\n"<<"\n";

  // Print 1D vector
  for(int i : v_1){
      cout << i << " ";
  }
  cout <<"\n"<<"\n";
    
  // Creating a 2D vector. 
  vector<vector<int>> matrix {{1,2,3,4},
                         {3,4,4,8}}; 

  cout << "Great! A 2D vector has been created." << "\n";
  cout << "\n";

  // Using auto
  auto v_2 = {1, 2, 3};
  auto s = "Hello";
  cout << "Variables declared and initialized without explicitly stating type!"<< "\n";

  for(auto i : v_2)
        cout << i << " ";
  cout <<"\n"<<"\n";

/*===========================================3. Store a Grid in Your Program================================================-===============================*/

  // TODO: Declare a "board" variable here, and store the data provided above.
  vector<vector<int>> board{{0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 0, 0, 0, 1, 0}}; 

/*===========================================4. Working with Vectors================================================-====================================*/

  // 2D Vector Access 
  cout<<matrix[0][0]<<"\n";
  cout<<matrix[1][1]<<"\n"<<"\n";

  // Getting a Vector's Length 
  // Print the length of vector a to the console. 
  cout << "Length of 1D Vector "<<v_1.size() << "\n"<<"\n";

  cout << "Row of matrix: " << matrix.size() << "\n";
  cout << "Column of matrix: " << matrix[0].size() <<"\n"<<"\n";


/*===========================================5. Functions and Control Structures ================================================-====================================*/

  // For Loop with an Index Variable
  for (int i=0; i < 5; i++) {
    cout << i << "\n";
    }
  cout <<"\n";
  
  for (int j=-5; j<=5; ++j) {
      cout << j << " ";
  }
  cout <<"\n\n";

  auto i = 1;

  // Post-increment assigns i to p and then increments i.
  auto p = i++;        
  cout << "The value of p is: " << p << "\n";
  cout << "The value of i++ is: " << i << "\n";

  // Reset i to 1.
  i = 1;
  // Pre-increment increments i, then assign to c.
  p = ++i;     
  cout << "The value of p ++iis: " << p << "\n";
  cout << "The value of i is: " << i << "\n\n";

  vector<int> v_3 {1, 2, 3, 4, 5};
    for (int i: v_3) {
        cout << i << " ";
    }
  cout <<"\n\n";

  vector<vector<int>> v_4{{1, 2},
                          {3, 4},
                          {5, 6}};

  for (vector<int> v:v_4 ) {
    for (int i: v) {
        cout << i << " ";
        }
        cout << "\n";
    }

  cout <<"\n";

  // Functions

  auto d = 3;
  auto f = 7;
  cout << AdditionFunction(d, f) << "\n\n";

  // Following line to call your function:
  cout <<"Sum of v_3 {1, 2, 3, 4, 5} :" <<AdditionFunction(v_3) << "\n\n";

  string s1 = "C++ is ";
  string s2 = "super awesome.";
  
  // The following line to call your function:
  PrintStrings(s1, s2);
  cout << "\n";


  /*-----------------------------------------------------------If Statements and While Loops -------------------------------------------------------------------*/ 

  // Set an equal to true here.
  bool e = true;
  bool g;
    
  if (g= true) {
    cout << "Hooray! You made it into the if statement!" << "\n";
    }
  cout << "\n";
  
  int num = 1; 
  // While Loop 
  // While loop to iterate over the integers from 1 to 10. If the integer is even, print it out.
  cout << "Even Number : ";
  while (num <= 10) {
    if (num % 2 == 0) {
        cout <<num << " ";
        }      
        num++;
    }
  cout <<"\n\n";

/*===========================================6. Reading from a File ============================================================================================*/

  // TODO: Call the ReadBoardFile function here.  
  ReadBoardFile("files/1.board"); 
  cout <<"\n\n";


  /*- --------------------------------------- Processing Strings  ---------------------------*/ 

  string s3("1 2 3,6p");
  istringstream my_stream(s3);

  char c1;
  int n;
  // Testing to see if the stream was successful and printing results.
  
  while (my_stream >> n >> c1) {
    cout << "That stream was successful: " << n << " "<< c1 <<"\n";
    }
    cout << "That stream was NOT successful!" << "\n\n";                                   //there wasn't any more of the string to stream          
    
     
  /* -------------------------------------------  Adding Data to a Vector ------------------------*/ 
  // Push 6 to the back of the vector
  // vector<int> v_3 {1, 2, 3, 4, 5};
  v_3.push_back(6);

  // Print the contents again
  for (int i=0; i < v_3.size(); i++) {
      cout << v_3[i] << " ";
  }
  cout <<"\n\n";

  // TODO: Store the output of ReadBoardFile in the "board" variable.
   auto path_board = PrintReadBoardFile("files/1.board");
  // TODO: Uncomment PrintBoard below to print "board".
  PrintBoard(path_board);
  cout <<"\n\n";

}