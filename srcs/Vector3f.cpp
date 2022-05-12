#include "Vector3f.hpp"

Vector3f::Vector3f(std::string params): _params(std::move(params))
{
	Parser::parseVector(this->_params, this->_v3f);
	this->len();
}

void Vector3f::norm()
{
	for (GLfloat& it : this->_v3f)
		it /= this->_len;
	this->len();
}

const std::vector<GLfloat> &Vector3f::getV3f() const noexcept
{
	return this->_v3f;
}

void Vector3f::len() noexcept
{
	for (GLfloat& it: this->_v3f)
		this->_len += it * it;
	this->_len = sqrtf(this->_len);
}

GLfloat Vector3f::getLen() const noexcept
{
	return this->_len;
}

Vector3f Vector3f::operator+(Vector3f &vec)
{
	Vector3f res;

	for (uint8_t i = 0; i < 3; ++i)
		res[i] = this->_v3f[i] + vec[i];
	return res;
}

GLfloat& Vector3f::operator[](uint8_t index)
{
	if (index < 0 || index > 3)
		throw OutOfRange();
	return this->_v3f[index];
}

Vector3f &Vector3f::operator=(const Vector3f &other)
{
	if (this != &other)
	{
		this->_v3f = other._v3f;
		this->_params = other._params;
		this->_len = other._len;
	}
	return *this;
}

Vector3f Vector3f::operator-(Vector3f &vec)
{
	Vector3f res;

	for (uint8_t i = 0; i < 3; ++i)
		res[i] = this->_v3f[i] - vec[i];
	return res;
}

GLfloat Vector3f::operator*(Vector3f &vec)
{
	GLfloat res = 0;

	for (uint8_t i = 0; i < 3; ++i)
		res += this->_v3f[i] * vec[i];
	return res;
}

Vector3f Vector3f::cross_product(Vector3f &vec)
{
	Vector3f res;

	for (int i = 0; i < 3; ++i)
		res[i] = (*this)[(i + 1) % 3] * vec[(i + 2) % 3] \
			- (*this)[(i + 2) % 3] * vec[(i + 1) % 3];
	return res;
}

const char* Vector3f::OutOfRange::what() const noexcept
{
	return "Index out of range vector!";
}
