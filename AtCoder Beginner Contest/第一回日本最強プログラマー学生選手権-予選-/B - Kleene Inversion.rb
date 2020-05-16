n,k=gets.chomp.split(" ").map(&:to_i);

a = gets.chomp.split(" ").map(&:to_i);
b =[]
sum = 0

for j in 0..k-1
	for i in 0..a.length-1 do 
		b = b.push(a[i])
		#puts "j#{j}i#{i}"
	end
end

#puts "b#{b}"

for k in 0..b.length-2
	#puts k
	for l in k+1..b.length-1
		# puts b[k]
		# puts b[l]
		if b[k] > b[l]
			sum = sum +1
		end
	end
end

puts sum%1000000007