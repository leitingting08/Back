def create_groups(items, num_groups):
	try:
		size = len(items)

	except ZeroDivisionError:
		print("warning:returning empty list. please use a nonzero number.")
		return []
	else:
		groups = []
		for i in range(0, len(items), size):
			groups.append(items[i:i + size])
		return groups
	finally:
		print("{} groups returned.".format(num_groups))
print("creating 6 groups...")
for group in create_groups(range(32), 6):
	print(list(group))

print("\ncreating 0 groups...")
for group in create_groups(range(32), 0):
	print(list(group))