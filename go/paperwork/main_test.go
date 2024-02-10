package main

import "testing"

func TestPaperworkWithTwoNumbers(t *testing.T) {
	n := 10
	m := 20
	want := 200

	test, err := paperwork(n, m)
	if err != nil {
		t.Fatalf("Error: %v \n", err)
	}
	if test != want {
		t.Fatalf("Output = %d, want %d \n", test, want)
	}
}

func TestPaperworkWithFirstBeingZero(t *testing.T) {
	n := 0
	m := 20
	want := "variable N can't be zero"

	_, err := paperwork(n, m)

	if err == nil || err.Error() != want {
		t.Fatalf("Output = %s, want %s \n", err.Error(), want)
	}
}

func TestPaperworkWithSecondBeingZero(t *testing.T) {
	n := 10
	m := 0
	want := "variable M can't be zero"

	_, err := paperwork(n, m)

	if err == nil || err.Error() != want {
		t.Fatalf("Output = %s, want %s \n", err.Error(), want)
	}
}
