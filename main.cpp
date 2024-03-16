#include <iostream>

using namespace std;

void on_market_data(char const* data)
{
    
}

int main(int argc, char* argv[])
{
    // Check compiler arguments
    if (argc != 2)
    {
        cerr << "Usage: " << argv[0] << " <filename>" << endl;
        return 1;
    }

    // Open file
    string filename = argv[1];

    return 0;
}