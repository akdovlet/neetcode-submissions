func groupAnagrams(strs []string) [][]string {
	umap := make(map[[26]int][]string)

	for _, str := range strs {
		var arr [26]int
		for _, c := range str{
			arr[c - 'a']++
		}
		umap[arr] = append(umap[arr], str)
	}

	var result [][]string
	for _, group := range umap {
		result = append(result, group)
	}
	return result
}
