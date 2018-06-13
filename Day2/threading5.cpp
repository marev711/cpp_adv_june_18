#include <iostream>
#include <thread>

using namespace std;

int main()
{
	auto f = []
	{
		for (int i = 0; i < 100; i++)
		{
			cout << this_thread::get_id() << endl;
		}
	};
	thread t1(f);
	auto t2 = move(t1);
	auto t3 = move(t2);

	t3.join();

	system("pause");
	return 0;
}