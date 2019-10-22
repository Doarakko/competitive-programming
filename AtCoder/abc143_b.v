fn main(){
	n := 0
	C.scanf("%d", &n)

	a := [0].repeat(n)
	for i := 0; i < n; i++ {
		C.scanf("%d", &a[i])
	}

	mut ans := 0
	for i := 0; i < n - 1; i++ {
		for j := i + 1; j < n; j++ {
			ans += a[i] * a[j]
		}
	}
	println(ans)
}