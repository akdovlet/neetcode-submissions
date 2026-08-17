func hasDuplicate(nums []int) bool {
	m :=  make(map[int]int)

	for i := 0; i < len(nums); i++ {
		m[nums[i]] += 1
		if m[nums[i]] > 1{
			return true
		}
	}
	return false
}
