fn main(){
	s := malloc(1)
	p := malloc(1)
	C.scanf("%s %s", s, p)
	s_str := string(s) + string(s)
	p_str := string(p)
	
	mut flag := false
	for i := 0; i < (s_str.len / 2); i++ {
		if p_str == s_str.substr(i, i + p_str.len) {
			flag = true
		}
	}

	if flag {
		println("Yes")
	}else{
		println("No")
	}
}