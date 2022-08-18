#include <iostream>
using namespace std;

int main()
{
    int i, n, cub;

    cout << "\n\n Display the cube of the numbers upto a given integer:"<<endl;
    cout << "----------------------------------------------------------"<<endl;
    
	cout << "Input the number of terms : ";
    cin >> n;
    
	for (i = 1; i <=n; i++) 
    {
        cub = i * i * i;
        cout << "Number is : " << i << " and the cube of " << i << " is: " << cub << endl;
    }
}

