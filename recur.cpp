void printarray(int array[], int count) {
	int i;
	for (i = 0; i < count-1; i++) {
		cout << array[i] << ", ";
	}
	cout << array[i];
	cout << endl;
}

int countPositive(int *array, int size)
{
  if(size < 0)
  {
    return 0;
  }
  if (size == 0)
  {
    return 0;
  }

  if ( *array > 0)
  {
    return 1 + countPositive(array+1,size-1);
  }
  else
  {
    return countPositive(array+1,size-1);
  }

}

int countRange(int *array, int size)
{

  if(size < 0)
  {
    return 0;
  }
  if (size == 0)
  {
    return 0;
  }

  if ( *array > 0 && *array < 10)
  {
    return 1 + countRange(array+1,size-1);
  }
  else
  {
    return countRange(array+1,size-1);
  }

}

int getMaximum(int *array, int size)
{

  if(size == 1)
  {
    return *array;
  }

  if( *array > *(array + size-1))
  {
    return getMaximum(array,size-1);
  }
  else
  {
    return getMaximum(array+1,size-1);
  }
}


int getMinimum(int *array, int size)
{
  if(size == 1)
  {
    return *array;
  }

  if( *array < *(array + size-1))
  {
    return getMinimum(array,size-1);
  }
  else
  {
    return getMinimum(array+1,size-1);
  }
}

int getSum(int *array, int size)
{

if (size < 0)
{
  return 0;
}
if (size == 0)
{
  return 0;
}

return *array + getSum(array+1, size-1);

}

int getProduct(int *array, int size){


  if (size < 0)
  {
    return 1;
  }
  if (size == 0)
  {
    return 1;
  }
	return *array * getProduct(array+1, size-1);
}
