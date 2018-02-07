if __name__ == '__main__':
	names = {'jack': 2011, 'bill':4098}
	print(names['jack'])
	print(names.keys())
	names['nima'] = 1348
	print(names)
	del names['jack']
	print('jack' in names)