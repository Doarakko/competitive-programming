a = gets.split.map(&:to_i)
a = a.sort

for i in 0..a.length-1 do
    if i != a.length - 1
        print sprintf("%d ", a[i])
    else
        puts a[i]
    end
end
