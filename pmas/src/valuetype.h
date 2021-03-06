#ifndef _VALUETYPE_H
#define _VALUETYPE_H

/*
 * ValueType
 */
class ValueType
{
private:
	bool _defined;
	char *_s;	// if set, this value is a string
	long _i;

public:
	ValueType();
	ValueType(const ValueType &rhs);
	ValueType& operator = (const ValueType &rhs);
	ValueType(const char *s);
	ValueType(long i);
	void Free();
	~ValueType();
	
	ValueType operator + (const ValueType &rhs);

	ValueType operator != (const ValueType &rhs) const;
	ValueType operator == (const ValueType &rhs) const;
	ValueType operator > (const ValueType &rhs) const;
	ValueType operator < (const ValueType &rhs) const;
	ValueType operator >= (const ValueType &rhs) const;
	ValueType operator <= (const ValueType &rhs) const;

	operator long () const;
	const char * getString() const;		// return the string in this value object
	void undefine();
	bool defined();

	void print() const;

	static ValueType zero;
};


#endif	// _VALUETYPE_H
