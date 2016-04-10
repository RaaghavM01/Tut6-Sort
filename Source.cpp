//Raaghav Maharaj
//214502397
#include <iostream>
using namespace std;
template <typename T> class NewClass{
	
private:
	T val;
	cout << "Please enter size of array: " << endl;
	cin >> val;
	T arr[val];// = { 2.5, 3.2, 4.5, 6.6, 12.8, 8.9, 8.0, 9.8, 8.9, 7.2, 3.1, 2.2, 1.1, 2.9, 15.0 };
public:
	NewClass(T value){
		for (int k = 0; k < val; k++)
		{
			arr[k] = value;
		}//Loop
	};
	T sort(arr)
	{
		for (int i = 0; i < val - 1; i++)
		{
			for (int j = 0; j < (val - i - 1); j++)
			{
				if (arr[j] < arr[j + 1])
				{
					T temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}//Loop
		}//Loop
		return arr;
	}//Sort function
};//Class


int main()
{

	
	//sort(int arr, int a);
	int val;
	for (int i = 0; i <T.val;i++)
	cout << "Please enter value for arr: " << endl;
	cin >> val;
	cout << " " <<NewClass(val)<<endl;
	cout << " " << NewClass.sort() << endl;

	return 0;
}//Main class