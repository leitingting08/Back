def create_groups(items, num_groups):
	size = len(items)

	groups = []
	for i in range(0, len(items), size):
		groups.append(items[i:i + size])

	print("{} groups returned.".format(num_groups))
	return groups

print("creating 6 groups...")
for group in create_groups(range(32), 6):
	print(list(group))

print("\ncreating 0 groups...")
for group in create_groups(range(32), 0):
	print(list(group))