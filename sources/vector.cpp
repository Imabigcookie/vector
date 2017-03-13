#include "vector.hpp"
vector_t::vector_t() : capacity_{ 0 }, size_{ 0 }, ptr_{nullptr}	
{}

vector_t::vector_t(unsigned int size)
{
	ptr_ = new int[size];
	size_ =size;
	capacity_ = size;
}

vector_t::vector_t(const vector_t& other)
{
	capacity_ = other.capacity_;
	size_ = other.size_;
	ptr_ = new int[capacity_];
	for (int i = 0; i < capacity_; i++)
	{
		ptr_[i] = other.ptr_[i];
	}
}

vector_t::~vector_t()
{
	delete[] ptr_;
}

vector_t& vector_t::operator=(const vector_t& other)
{
	delete[] ptr_;
	ptr_ = new int[other.capacity_];
	for (int i = 0; i < other.capacity_; i++)
	{
		ptr_[i] = other.ptr_[i];
	}
	size_ = other.size_;
	capacity_ = other.capacity_;
}

auto vector_t::capacity() const noexcept -> unsigned int
{
	return capacity_;
}

auto vector_t::size() const noexcept -> unsigned int
{
	return size_;
}


