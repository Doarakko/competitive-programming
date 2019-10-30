n = gets.chomp
n = n.to_i

ans = -1
(1..Math.sqrt(n)).reverse_each do |i|
    if n / i == n * 1.0 / i
        ans = i + n / i
        break
    end
end

# start at (1, 1)
ans -= 2

puts ans
