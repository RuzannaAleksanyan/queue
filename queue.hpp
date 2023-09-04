#ifndef QUEUE
#define QUEUE

#include <algorithm>

template <typename T>
class queue {
private:
    T* m_arr;
    int m_size;
    int m_capacity;

    void resize(int count);
public:
    queue();

    ~queue();

    queue<T>& operator=(const queue<T>& other);
    queue<T>& operator=(queue<T>&& other);

    const T& front() const;
    const T& back() const;

    bool empty() const;

    int size() const;

    void push(const T& value);
    void pop();

    void swap(queue& other) noexcept;
	
};

template <typename T>
queue<T>::queue()
	: m_size{0}
	, m_capacity{1}
	, m_arr{new T(m_capacity)}
{
}

template <typename T>
queue<T>::~queue() {
    delete[] m_arr;
}

template <typename T>
queue<T>& queue<T>::operator=(const queue<T>& other) {
    if(this != &other) {
        m_arr = other.m_arr;
        m_size = other.m_size;
        m_capacity = other.m_capacity;
    }

    return *this;
}

template <typename T>
queue<T>& queue<T>::operator=(queue<T>&& other) {
    if (this != &other) {
        delete[] m_arr; 
        m_size = other.m_size;
        m_capacity = other.m_capacity;
        m_arr = other.m_arr; 
        other.m_arr = nullptr; 
    }

    return *this;
}

template <typename T>
const T& queue<T>::front() const {
    return m_arr[0];
}

template <typename T>
const T& queue<T>::back() const {
    return m_arr[m_size - 1];
}

template <typename T>
bool queue<T>::empty() const {
    return m_size == 0;
}

template <typename T>
int queue<T>::size() const {
    return m_size;
}

template <typename T>
void queue<T>::push(const T& value) {
    if(m_size == m_capacity) {
        resize(2 * m_capacity);
    }

    m_arr[m_size] = value;
    ++m_size;
}

template <typename T>
void queue<T>::pop() {
    if (m_size > 0) {
        for (int i = 0; i < m_size - 1; ++i) {
            m_arr[i] = m_arr[i + 1];
        }
        --m_size;
    }
}

template <typename T>
void my_swap(T*& ob1, T*& ob2) {
    T* tmp = ob1;
    ob1 = ob2;
    ob2 = tmp;
}

template <typename T>
void queue<T>::swap(queue& other) noexcept {
    my_swap(m_arr, other.m_arr);
    std::swap(m_size, other.m_size);
    std::swap(m_capacity, other.m_capacity);
}

template <typename T>
void queue<T>::resize(int count) {
    if (count <= m_capacity) {
        return; 
    }

    T* new_arr = new T[count];

    for (int i = 0; i < m_size; ++i) {
        new_arr[i] = m_arr[i];
    }

    delete[] m_arr;
    m_arr = new_arr;
    m_capacity = count;
}

#endif
