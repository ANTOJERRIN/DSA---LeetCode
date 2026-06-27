from collections import Counter

class Solution(object):
    def maximumLength(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        # 1. Map each unique number to its total frequency count
        counts = Counter(nums)
        
        # 2. Initialize the global maximum result boundary
        max_len = 1
        
        # 3. Special handling for the identity element 1
        if 1 in counts:
            ones_count = counts[1]
            if ones_count % 2 == 0:
                max_len = max(max_len, ones_count - 1)  # Must be an odd length
            else:
                max_len = max(max_len, ones_count)
                
        # 4. Process all other numbers greater than 1
        for num in counts:
            if num == 1:
                continue
                
            current_len = 0
            x = num
            
            # Chain upwards by squaring as long as we can build symmetric side slopes
            while counts[x] >= 2:
                current_len += 2
                x = x * x  # Square the base value
                
            # If the final element in our chain exists at least once, it becomes the peak
            if counts[x] >= 1:
                current_len += 1
            else:
                # If it's missing entirely, the chain broke. Turn the last step into the peak.
                current_len -= 1
                
            # Update our global maximum length
            max_len = max(max_len, current_len)
            
        return max_len
