package main

import "errors"

func paperwork(n, m int) (int, error) {
	if n <= 0 {
		return 0, errors.New("variable N can't be zero")
	}

	if m <= 0 {
		return 0, errors.New("variable M can't be zero")
	}

	return n * m, nil
}

func main() {}
