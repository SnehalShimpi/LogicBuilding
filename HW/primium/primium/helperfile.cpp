int DisplayPrimium(int iAge)
{
	if (iAge < 20)
	{
		return 20000;
	}
	if (iAge >= 20 && iAge < 45)
	{
		return 35000;

	}
	if (iAge >= 45 && iAge < 70)
	{
		return 52000;

	}
	else
	{
		return 85000;
	}
}