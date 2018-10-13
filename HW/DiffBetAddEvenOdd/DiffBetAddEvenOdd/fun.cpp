int Diff(int arr[], int size)
{
	int i = 0, sum = 0, isum = 0, diff = 0;
	for (i = 0;i < size;i++)
	{
		if (arr[i] % 2 == 0)
		{
			sum = sum + arr[i];
		}
		else
		{
			isum = isum + arr[i];
		}
	}
	diff = sum - isum;
	if (diff < 0)
	{
		diff = -diff;

	}
	return diff;
}