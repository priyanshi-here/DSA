class Solution(object):
    def trap(self, height):

        """
        :type height: List[int]
        :rtype: int
        """
        size = len(height)
        start = 0
        end = size-1
        lmax = 0
        rmax = 0
        totalWater = 0
       

        while(start < end):
            lmax = max(lmax,height[start])
            rmax = max(rmax,height[end])
            if(lmax < rmax):
                totalWater = totalWater + lmax - height[start]
                start = start + 1
            else:
                totalWater = totalWater + rmax - height[end]
                end = end - 1

        return totalWater






        