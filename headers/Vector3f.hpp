#pragma once

#include "utils.hpp"

class Vector3f
{
private:
	std::vector<GLfloat>	_v3f {0, 0, 0};
	std::string				_params{};
	GLfloat					_len{};

	void len() noexcept;
public:
	Vector3f() = default;
	explicit Vector3f(std::string params);
	~Vector3f() = default;

	void norm();

	void setVector3f(const std::string& params);

	[[nodiscard]] const std::vector<GLfloat>& getV3f() const noexcept;
	[[nodiscard]] GLfloat getLen() const noexcept;

	[[nodiscard]] GLfloat& operator[](uint8_t index);
	[[nodiscard]] Vector3f operator+(Vector3f& vec);
	[[nodiscard]] Vector3f operator-(Vector3f& vec);
	[[nodiscard]] GLfloat operator*(Vector3f& vec);
	Vector3f& operator=(const Vector3f& other);
	[[nodiscard]] Vector3f cross_product(Vector3f& vec);

	class OutOfRange: public std::exception
	{
	public:
		[[nodiscard]] const char* what() const noexcept override;
	};
};

