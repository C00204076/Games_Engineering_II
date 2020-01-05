// ErlangIntergration.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "erl_comm.h"
#include "port_driver.h"

// port
typedef unsigned char byte;

int main()
{
    //std::cout << "Hello World!\n";

	ETERM* tuplep, * intp;
	ETERM* fnp, * argp;

	int res; // , fn, arg;
	byte buf[100];
	long allocated, freed;

	erl_init(NULL, 0);

	while (read_cmd(buf) > 0) 
	{
		/*fn = buf[0];
		arg = buf[1];

		if (fn == 1) 
		{
			res = foo(arg);
		}
		else if (fn == 2) 
		{
			res = bar(arg);
		}

		buf[0] = res;
		write_cmd(buf, 1);*/
		
		tuplep = erl_decode(buf);
		fnp = erl_element(1, tuplep);
		argp = erl_element(2, tuplep);

		if (strncmp(ERL_ATOM_PTR(fnp), "foo", 3) == 0) 
		{
			res = foo(ERL_INT_VALUE(argp));
		}
		else if (strncmp(ERL_ATOM_PTR(fnp), "bar", 3) == 0) 
		{
			res = bar(ERL_INT_VALUE(argp));
		}

		intp = erl_mk_int(res);
		erl_encode(intp, buf);
		write_cmd(buf, erl_term_len(intp));

		erl_free_compound(tuplep);
		erl_free_term(fnp);
		erl_free_term(argp);
		erl_free_term(intp);
	}
}


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
	std::ifstream is ("", std::ifstream::binary);

	do 
	{
		if ((i = is.read((char*)buf + got, len - got)) <= 0) // read(0, buf + got, len - got)) <= 0)
			return(i);
		got += i;
	}
	while (got < len);

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
	}
	while (wrote < len);

	return (len);
}
