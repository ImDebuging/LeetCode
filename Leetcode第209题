#include<stdio.h>
#include<limits.h>
int minSubArrayLen(int target, int* nums, int numsSize){                  //暴力法
	int result = numsSize+1;
	int sublength = 0;
	int sum = 0;
	for (int i = 0; i<numsSize; ++i){
		for (int j = i; j<numsSize; ++j){
			sum += nums[j];
			if (sum >= target){
				result = j - i + 1;
				sublength = sublength>result ? result : sublength;
				break;
			}
		}
		sum = 0;
	}
	return result == numsSize+1 ? 0 : result;
}

int minSubArrayLen2(int target, int* nums, int numsSize){                 //滑动窗口法
	int sum = 0;
	int ans = INT32_MAX;
	int sublength = 0;
	for (int i=0, j = 0; j<numsSize; j++)
	{
		sum += nums[j];
		while (sum >= target)
		{
			sublength = j - i + 1;
			ans = ans>sublength ? sublength : ans;
			sum -= nums[i];
			i++;
		}
	}
	return ans == INT32_MAX ? 0 : ans;
  }
int main()
{
	int arr[6] = { 2, 3, 1, 2, 4, 3 };
	printf("答案是%d\n", minSubArrayLen(7, arr, 6));
	return 0;
}

