m,d=gets.chomp.split(" ").map(&:to_i);

# d1 = d%10
# d2 = d/10

# puts m
# puts d
 # puts d2
 # puts d1
sum = 0

for j in 1..m do

	for i in 22..d  do
		d1 = i%10
		d2 = i/10
		#puts i

		if j == d1*d2 
			sum = sum + 1
			#puts "j#{j} i#{i} sum#{sum}"
			if d1 < 2 || d2 < 2
				sum = sum -1
			end
		end
	end
#puts j

end
puts ""
puts sum