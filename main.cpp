int main()
{
	char* ptr = new char[100]; // creates a pointer array of 100 chars
	*reinterpret_cast<int*>(ptr + 10) = 73642; // takes char ptr goes out to memory 10 and creates a pointer of int that are dereferenced to place 73642
	*(ptr + 42) = '#'; // goes out to memeory 42 and places '#' with a dereference

	return 0;
}