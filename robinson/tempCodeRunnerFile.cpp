void writeMatrix()
{
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			output << a[i][j] << " ";
		}
		output << endl;
	}
}