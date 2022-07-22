// Problem solution in C.
static int compare( const void a,const void b )
{
return ( (int) a -(int) b );
}

int threeSum (int nums, int numsSize, int returnSize) {
if (numsSize < 3) return NULL;
qsort (nums, numsSize, sizeof(int), compare);
int p = NULL;
int count = 0;
p=(int) malloc( 50000 sizeof (int) );
for( int i = 0; i < numsSize - 2; )
{
int temp1 = -nums[i];
int low = i+1;
int high = numsSize-1;
while( low < high )
{
int temp2 = nums[low] + nums[high];
if ( temp1 > temp2 ) low++;
else if ( temp1 < temp2 ) high--;
else
{
p[count] = (int) malloc( 3 sizeof(int) );
p[count][0] = nums[i];
p[count][1] = nums[low];
p[count][2] = nums[high];
count++;
while( low<high && nums[low] == nums[low+1] )
low++;
while( low < high && nums[high] == nums[high-1] )
high--;
low++;
high--;
}
}
i++;
while( nums[i] == nums[i-1] )
i++;
}
returnSize = count;
return p;
}
