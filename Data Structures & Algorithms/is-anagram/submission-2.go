
func isAnagram(s string, t string) bool {
	if len(s) != len(t) {
		return false
	}

	Srune := []rune(s)
	Trrune := []rune(t)

	sort.Slice(Srune, func(i, j int) bool {
		return Srune[i] < Srune[j]
	})
	ssrting := string(Srune)

	sort.Slice(Trrune, func(i, j int) bool {
		return Trrune[i] < Trrune[j]
	})
	Tstring := string(Trrune)

	if ssrting == Tstring {
		return true
	}
	return false
}
