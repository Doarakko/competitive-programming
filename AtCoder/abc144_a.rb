a, b = gets.split.map(&:to_i)

if a <= 9 and b <= 9
    puts a * b
else
    puts -1
end