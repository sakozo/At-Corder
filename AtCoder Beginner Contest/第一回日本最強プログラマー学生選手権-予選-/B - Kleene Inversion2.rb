n,k=gets.chomp.split(" ").map(&:to_i);

a = gets.chomp.split(" ").map(&:to_i);
b =[]
sum = 0
n = []
k = k%1000000007
for j in 0..k-1
	for i in 0..a.length-1 do 
		b = b.push(a[i])
		#puts "j#{j}i#{i}"
	end
end

#puts "b#{b}"

for k in 0..a.length-2
	for l in k+1..a.length-1
		if a[k] > a[l]
			n = n.push(k)
		end
	end
end

#puts sum
