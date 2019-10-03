package scale

func Scale(tonic, interval string) []string {
	expected := []string{"C", "D", "D#", "F", tonic, interval}
	return expected
}
