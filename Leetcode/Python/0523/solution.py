class Solution:
    def checkSubarraySum(self, nums: List[int], k: int) -> bool:
        if len(nums) < 2:
            return False
        remainder_dict = {0: -1}
        prefix_sum = 0

        for i, num in enumerate(nums):
            prefix_sum += num
            remainder = prefix_sum % k

            if remainder in remainder_dict:
                if i - remainder_dict[remainder] > 1:
                    return True
            else:
                remainder_dict[remainder] = i
        return False
