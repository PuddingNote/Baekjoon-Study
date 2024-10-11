#include <iostream>
#include <vector>
using namespace std;

class MergeSort
{
private:
	vector<int> v;
	int mergeCount;
	int resultNum;
	int resultCount;

public:
	MergeSort() : mergeCount(0), resultNum(-1), resultCount(0)
	{
		
	}
	void SaveResultCount(int K)
	{
		resultCount = K;
	}
	void Add(int input)
	{
		v.push_back(input);
	}
	void Merge_Start()
	{
		Merge_Sort(v, 0, v.size() - 1);
	}
	void Merge_Sort(vector<int>& v, int p, int r)
	{
		if (p < r)
		{
			int q = (p + r) / 2;		// 중간지점
			Merge_Sort(v, p, q);		// 전반부 정렬
			Merge_Sort(v, q + 1, r);	// 후반부 정렬
			Merge(v, p, q, r);			// 병합
		}
	}
	void Merge(vector<int>& v, int p, int q, int r)
	{
		vector<int> temp(r - p + 1);	// 임시 벡터
		int i = p;						// 왼쪽 배열 시작
		int j = q + 1;					// 오른쪽 배열 시작
		int t = 0;						// 임시 벡터 인덱스

		while (i <= q && j <= r)
		{
			if (v[i] <= v[j])
			{
				temp[t++] = v[i++];
			}
			else
			{
				temp[t++] = v[j++];
			}
		}

		while (i <= q)
		{
			temp[t++] = v[i++];
		}
		while (j <= r)
		{
			temp[t++] = v[j++];
		}
		for (int k = 0; k < t; k++)
		{
			v[p + k] = temp[k];

			mergeCount++;
			if (mergeCount == resultCount)
			{
				resultNum = temp[k];
			}
		}
	}
	void PrintKNum()
	{
		cout << resultNum << '\n';
	}
};

int main()
{
	int N;
	cin >> N;
	MergeSort ms;

	int K;
	cin >> K;
	ms.SaveResultCount(K);

	for (int i = 0; i < N; i++)
	{
		int input;
		cin >> input;

		ms.Add(input);
	}

	ms.Merge_Start();
	ms.PrintKNum();

	return 0;
}