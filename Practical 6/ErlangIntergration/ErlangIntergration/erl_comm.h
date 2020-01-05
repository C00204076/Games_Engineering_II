#include <iostream>
#include <fstream>

#include "erl_interface.h"
#include "ei.h"

//
int read_cmd(byte* buf)
{
	int len;

	if (read_exact(buf, 2) != 2)
		return(-1);

	len = (buf[0] << 8) | buf[1];

	return read_exact(buf, len);
}

int write_cmd(byte* buf, int len)
{
	byte li;

	li = (len >> 8) & 0xff;
	write_exact(&li, 1);

	li = len & 0xff;
	write_exact(&li, 1);

	return write_exact(buf, len);
}

int read_exact(byte* buf, int len)
{
	int i, got = 0;
	std::ifstream is("", std::ifstream::binary);

	do
	{
		if ((i = is.read((char*)buf + got, len - got)) <= 0) // read(0, buf + got, len - got)) <= 0)
			return(i);
		got += i;
	} while (got < len);

	return(len);
}

int write_exact(byte* buf, int len)
{
	int i, wrote = 0;
	std::ofstream os("", std::ifstream::binary);

	do
	{
		if ((i = os.write((char*)buf + wrote, len - wrote)) <= 0) // write(1, buf + wrote, len - wrote)) <= 0)
			return (i);

		wrote += i;
	} while (wrote < len);

	return (len);
}