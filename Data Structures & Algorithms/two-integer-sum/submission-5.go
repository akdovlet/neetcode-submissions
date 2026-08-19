func twoSum(nums []int, target int) []int {
    // complement = target - nums[i] 
    var seen = make(map[int]int)
    for i, v := range nums{
        var complement = target - v
        _, ok := seen[v]
        if ok {
            return []int{seen[v], i}
        }
        seen[complement] = i
    }
    return []int{}
}
