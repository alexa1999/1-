
//#include "pch.h"
#include <iostream>
#include <thread>
#include <time.h>

#define MAX 20


#define THREAD_MAX 4

using namespace std;
int a[MAX];
int part = 0;

// merge function for merging two parts
void merge(int low, int mid, int high)
{
	int i, j, k, c[500];
    i = low;
    k = low;
    j = mid + 1;

    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            c[k] = a[i];
            k++;
            i++;
        }
        else
        {
            c[k] = a[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        c[k] = a[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)
    {
        a[i] = c[i];
    }

}

void merge_sort(int low, int high)
{
	int mid = low + (high - low) / 2;
	if (low < high) {
		merge_sort(low, mid);
		merge_sort(mid + 1, high);
		merge(low, mid, high);
	}
}

void merge_sort2()
{
	// which part out of 4 parts
	int thread_part = part++;

	// calculating low and high
	int low = thread_part * (MAX / 4);
	int high = (thread_part + 1) * (MAX / 4) - 1;

	// evaluating mid point
	int mid = low + (high - low) / 2;
	if (low < high) {
		merge_sort(low, mid);
		merge_sort(mid + 1, high);
		merge(low, mid, high);
	}
}
int main()
{

	for (int i = 0; i < MAX; i++)
		a[i] = rand() % 100;

	clock_t t1, t2;

	t1 = clock();

	thread threads[THREAD_MAX];


	//se crean los 4 threads
	for (int i = 0; i < THREAD_MAX; i++)
		threads[i]= thread(merge_sort2);

	for (int i = 0; i < 4; i++)
		//pthread_join(threads[i], NULL);
		threads[i].join();

	// merging the final 4 parts
	merge(0, (MAX / 2 - 1) / 2, MAX / 2 - 1);
	merge(MAX / 2, MAX / 2 + (MAX - 1 - MAX / 2) / 2, MAX - 1);
	merge(0, (MAX - 1) / 2, MAX - 1);

	t2 = clock();

	// displaying sorted array
	cout << "Sorted array: ";
	for (int i = 0; i < MAX; i++)
		cout << a[i] << " ";

	// time taken by merge sort in seconds
	cout << "Time taken: " << (t2 - t1) /
		(double)CLOCKS_PER_SEC << endl;

	return 0;
}
