//
// Created by yaorelax on 2022-10-18.
//


#ifndef VECTOR_OVERLOAD_VECTOR_OVERLOAD_H
#define VECTOR_OVERLOAD_VECTOR_OVERLOAD_H

#include <iostream>
#include <vector>


//declaration
template<typename T>
std::vector<T> operator+(const std::vector<T>&, const std::vector<T>&);
template<typename T>
std::vector<T> operator+(const std::vector<T>&&, const std::vector<T>&&);
template<typename T>
std::vector<T> operator+(const std::vector<T>&&, const std::vector<T>&);
template<typename T>
std::vector<T> operator+(const std::vector<T>&, const std::vector<T>&&);

template<typename T>
std::vector<T> operator-(const std::vector<T>&, const std::vector<T>&);
template<typename T>
std::vector<T> operator-(const std::vector<T>&&, const std::vector<T>&&);
template<typename T>
std::vector<T> operator-(const std::vector<T>&&, const std::vector<T>&);
template<typename T>
std::vector<T> operator-(const std::vector<T>&, const std::vector<T>&&);

template<typename T>
std::vector<T>& operator+=(std::vector<T>&, const std::vector<T>&);
template<typename T>
std::vector<T>& operator+=(std::vector<T>&, const std::vector<T>&&);
template<typename T>
std::vector<T>& operator-=(std::vector<T>&, const std::vector<T>&);
template<typename T>
std::vector<T>& operator-=(std::vector<T>&, const std::vector<T>&&);

template<typename T>
std::ostream& operator<<(std::ostream&, const std::vector<T>&);
template<typename T>
std::ostream& operator<<(std::ostream&, const std::vector<T>&&);
template<typename T>
std::istream& operator>>(std::istream&, std::vector<T>&);


//definition
template<typename T>
std::vector<T> operator+(const std::vector<T>& x, const std::vector<T>& y)
{
    std::vector<T> res(x.size());
    for (int i = 0; i < x.size(); i++)
    {
        res[i] = x[i] + y[i];
    }
    return res;
}

template<typename T>
std::vector<T> operator+(const std::vector<T>&& x, const std::vector<T>&& y)
{
    return x + y;
}

template<typename T>
std::vector<T> operator+(const std::vector<T>&& x, const std::vector<T>& y)
{
    return x + y;
}

template<typename T>
std::vector<T> operator+(const std::vector<T>& x, const std::vector<T>&& y)
{
    return x + y;
}

template<typename T>
std::vector<T> operator-(const std::vector<T>& x, const std::vector<T>& y)
{
    std::vector<T> res(x.size());
    for (int i = 0; i < x.size(); i++)
    {
        res[i] = x[i] - y[i];
    }
    return res;
}

template<typename T>
std::vector<T> operator-(const std::vector<T>&& x, const std::vector<T>&& y)
{
    return x - y;
}

template<typename T>
std::vector<T> operator-(const std::vector<T>&& x, const std::vector<T>& y)
{
    return x - y;
}

template<typename T>
std::vector<T> operator-(const std::vector<T>& x, const std::vector<T>&& y)
{
    return x - y;
}

template<typename T>
std::vector<T>& operator+=(std::vector<T>& x, const std::vector<T>& y)
{
    for (int i = 0; i < x.size(); i++)
    {
        x[i] = x[i] += y[i];
    }
    return x;
}

template<typename T>
std::vector<T>& operator+=(std::vector<T>& x, const std::vector<T>&& y)
{
    return x += y;
}

template<typename T>
std::vector<T>& operator-=(std::vector<T>& x, const std::vector<T>& y)
{
    for (int i = 0; i < x.size(); i++)
    {
        x[i] = x[i] -= y[i];
    }
    return x;
}

template<typename T>
std::vector<T>& operator-=(std::vector<T>& x, const std::vector<T>&& y)
{
    return x -= y;
}

template<typename T>
std::ostream& operator<<(std::ostream& out, const std::vector<T>& x)
{
    out << "[";
    for (int i = 0; i < x.size(); i++)
    {
        out << x[i] << (i == x.size() - 1 ? "]" : ", ");
    }
    return out;
}

template<typename T>
std::ostream& operator<<(std::ostream& out, const std::vector<T>&& x)
{
    out << "[";
    for (int i = 0; i < x.size(); i++)
    {
        out << x[i] << (i == x.size() - 1 ? "]" : ", ");
    }
    return out;
}

template<typename T>
std::istream& operator>>(std::istream& in, std::vector<T>& x)
{
    for (int i = 0; i < x.size(); i++) { in >> x[i]; }
    return in;
}

#endif //VECTOR_OVERLOAD_VECTOR_OVERLOAD_H
