#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

#define ABS(x) ({ \
	int _x = (x); \
	if (_x < 0) \
		_x = -_x; \
	_x; \
})

#endif /* FUNCTION_LIKE_MACRO_H */
