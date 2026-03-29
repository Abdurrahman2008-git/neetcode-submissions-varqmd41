func twoSum(nums []int, target int) []int {
	n := len(nums)
	for i := 1; i < n; i++ {
		for j := 0; j < n; j++ {
            if i==j{
                break
            }
			if nums[j]+nums[i] == target {
				return []int{j,i}
			}
		}
	}
	return []int {}

}