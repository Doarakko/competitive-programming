fn main(){
	a := 0
	b := 0
	C.scanf("%d %d", &a, &b)

	mut ans := a - b * 2
	if ans < 0{
		ans = 0
	}

	println(ans)
}