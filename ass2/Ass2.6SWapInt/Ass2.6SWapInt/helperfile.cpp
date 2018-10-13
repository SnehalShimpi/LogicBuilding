void Swap(int * no1, int * no2)
{
	*no1 = *no1 + *no2;
	*no2 = *no1 - *no2;
	*no1 = *no1 - *no2;
}