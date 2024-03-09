#include <iostream>
#include <vector>

void swapvec (std::vector<int>& vec, int* array)
{
    for (int i = 0; i < vec.size(); ++i) {
        int temp = vec[i];
        vec[i] = *(array + i);
        *(array + i) = temp;
    }
}

int main() {
    std::vector<int> a = {1, 2, 3, 4};
    int b[] = {2, 4, 6, 8};

    swapvec(a,b);

    for (int i = 0; i < 4; ++i)
        std::cout << a[i] << " ";
    std::cout << std::endl;
    for (int i = 0; i < 4; ++i)
        std::cout << b[i] << " ";

}
