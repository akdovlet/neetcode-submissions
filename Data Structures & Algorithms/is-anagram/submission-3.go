func isAnagram(s string, t string) bool {
	if (len(s) != len(t)){
		return false
	}
	m := make(map[rune]int, 26)
	n := make(map[rune]int, 26)
	for i, ch  := range s {
		m[ch]++
		n[rune(t[i])]++
	}
	for k, v := range m {
		if n[k] != v {
			return false
		}
	}
	return true
}
