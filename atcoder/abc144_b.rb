n = gets.chomp
n = n.to_i

flag = false
for i in 1..9 do
    if n / i == n * 1.0 / i and n / i <= 9
        flag = true
        break
    end
end

if flag
    puts "Yes"
else
    puts "No"
end
