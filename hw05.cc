//=============================
// Programmer: Milo Fisher
// HW05
// Professor Kath
// CS1C TTH 12:30-2:50
//=============================

#include<iostream>
#include<vector>
#include<algorithm>
#include<ctime>
#include<random>
#include<cstdlib>
using namespace std;

/*
1) Standard Template Library.  A vector is a dynamic container class within the STL.

2) The functions: reserve, resize, push_back, pop_back, emplace, emplace_back, and shrink_to_fit.

3) The STL array container is like the built-in array but with extra functionality, including a function
to get its front value, back value, and size.  It is also not dynamic in size like a vector.

4) Resize changes a vector's size and capacity, adding or removing elements in the process while reserve
can only increase the capacity if the specified new capacity is larger than the current capacity.

5) begin() returns the beginning position of the container and end() returns the position after the last
position in the container.

6)      vector<int> vec{1, 2, 3};
        vec.push_back(4);
		cout << vec[3];

		//output
			4
*/

vector<int> Lotto(int range, int length)
{
	vector<int> nums;
	for(int i = 1; i < range; i++)
		nums.push_back(i);
	random_shuffle(nums.begin(),nums.end());

	vector<int> winNums;
	for(int i = 0; i < length; i++)
	{
		winNums.push_back(nums[i]);
	}
	sort(winNums.begin(),winNums.end());

	return winNums;
}

int main()
{
	srand(time(0));
	vector<int> winners;
	winners = Lotto(51,6);

	cout << "Winning numbers:\n";
	for(int i = 0; i < winners.size(); i++)
		cout << winners[i] << " ";

	return 0;
}
